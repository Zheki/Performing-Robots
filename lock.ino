

//Initializing constants for buttons and LEDs
const int button4 = 3;
const int button3 = 4;
const int button2 = 5;
const int button1 = 6;

const int ledGreen =  9;
const int ledYellow =  10;
const int ledRed =  11;

int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int i = 0;

int code[4];


void setup() {

  Serial.begin(9600);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);

  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);
  state3 = digitalRead(button3);
  state4 = digitalRead(button4);

  if (state1 == HIGH) {
    digitalWrite(ledYellow, HIGH);
    a = 1;
    code[i] = a;
    i++;
    delay(1000);
  }
  else {
    digitalWrite(ledYellow, LOW);
  }

  state1 == LOW;

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


  if (code[0] == 4 && code[1] == 2 && code[2] == 1 && code[3] == 3) {
    digitalWrite(ledGreen, HIGH);

    digitalWrite(ledRed, LOW);
  }
  else {
    digitalWrite(ledRed, HIGH);
  }

  for (byte j = 0; j < 5; j = j + 1) {
    Serial.print(code[j]);
  }

  Serial.println("'");
}


//4213




