# Project no.1 : Simple Combination Lock

## Introduction
This is a simple combination lock. The LEDs indicate if the lock is open or not. In order to open the lock, a user needs to input any four digit number from 1111 to 4444. If the user enters the correct combination, the green LED will indicate that the code is correct and the lock is open.

## How it works
Each button has an assigned value 1,2,3, or 4. There is a counter running in the background that counts how many times any button was pressed. The program contains a list with 4
empty values that are filled with four button pushes. Lets say that the first button we press is the third one. It has a predetermined value of 3, and since this is the first button that we push the counter has a value of 0. This means that in the array[0] (first position) the first value will be 3. While doing this the counter goes 1 value up which means that the next button we push will assign a value to the next slot in the array.

## Images
![](Scheme.png)

![](Circuit.png)

## Problems
The biggest issue was remembering the value of the previously pressed button in the sequence of pressing 4 buttons. After that, the buttons could be pressed for a longer period 
which just filled the array with the value of that button instantly, and crashing the program. This was solved using the delay(1000) function. The user can hold the button pressed for a second and only one value will be assigned in the array.

