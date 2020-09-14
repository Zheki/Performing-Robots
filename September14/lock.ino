//Four button combination lock
//Zheljko Nenadikj
//Performing robots
//14.09.2020


//Pins for the buttons
const int button4 = 3;
const int button3 = 4;
const int button2 = 5;
const int button1 = 6;

//Pins for the LEDs
const int ledGreen =  9;
const int ledYellow =  10;
const int ledRed =  11;

//States of the buttons (0 = not pressed, 1 = pressed)
int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;

//Value for each button (starts with 0, assigned in if statement)
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int i = 0; //Position counter

int code[4]; //An array with 4 empty slots


void setup() {

  Serial.begin(9600);  //Serial monitor setup
  
  //Assigning the buttons as input
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  
  //Assigning the LEDs as output
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  
  //Assigning the state of the buttons
  state1 = digitalRead(button1);
  state2 = digitalRead(button2);
  state3 = digitalRead(button3);
  state4 = digitalRead(button4);
  
  //What to do if the button is pressed?
  if (state1 == HIGH) {
    digitalWrite(ledYellow, HIGH);  //Make the yellow LED glow for 1 second.
    a = 1;                          
    code[i] = a;                    //Assign the button's value at position i in the list
    i++;                            //Increase the position counter
    delay(1000);                    //Wait 1 second
  }
  else {
    digitalWrite(ledYellow, LOW);   //Turn of the yellow LED
  }
  
  //The concept is the same for all 4 buttons
  if (state2 == HIGH) {
    digitalWrite(ledYellow, HIGH);
    b = 2;
    code[i] = b;
    i++;
    delay(1000);
  }
  else {
    digitalWrite(ledYellow, LOW);
  }

  if (state3 == HIGH) {
    digitalWrite(ledYellow, HIGH);
    c = 3;
    code[i] = c;
    i++;
    delay(1000);
    
  }
  else {
    digitalWrite(ledYellow, LOW);
  }

  if (state4 == HIGH) {
    digitalWrite(ledYellow, HIGH);
    d = 4;
    code[i] = d;
    delay(1000);
    i++;
  }
  else {
    digitalWrite(ledYellow, LOW);
  }

  //If these specific numbers are at their positions in the list, that means the code is correct.
  if (code[0] == 4 && code[1] == 2 && code[2] == 1 && code[3] == 3) {
    digitalWrite(ledGreen, HIGH);                                         //Green LED lights up to indicate an open lock

    digitalWrite(ledRed, LOW);                                            //Red LED stops glowing indicating an open lock
  }
  else {
    digitalWrite(ledRed, HIGH);                                           //Red LED still glows meaning the combination code is not yet correct
  }

  for (byte j = 0; j < 5; j = j + 1) {                                    //Checking the code in the serial monitor(unnecesary for the program's functionality)
    Serial.print(code[j]);
  }

  Serial.println("'");
}


//4213                                                                   //This is the code




