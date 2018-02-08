/**
 * File: main.cpp
 * Author: Michael McCormick
 * Date: 05-02-2018
 * Desc: Basic game that displays randomly generated input sequence
 * and gets user to repeat the same sequence.
 * Copyright: University of West of England 2017
 */
#include "MicroBit.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>

MicroBit uBit;

#define INPUT_SEQUENCE_LENGTH 15
//YOU CAN SET A PRINT DELAY (FOR DIFFICULTIES)

//Generates random input sequence for each instance of the game
int * get_input_sequence() {
    //Initialise variables
    int randNum;
    static int returnArray[INPUT_SEQUENCE_LENGTH];

    //Use the time as a random seed
    srand (time(NULL)); 

    //Fills input sequence array with 1's and 2's randomly
    for (int i = 0; i < INPUT_SEQUENCE_LENGTH; i++) {
      randNum = rand() % 2 + 1; //Generate 1 or 2 randomly
      returnArray[i] = randNum;
    }
    return returnArray;
}

int get_button_press() {
    while (true) {
	//Detect input and add to string
	if (uBit.buttonA.isPressed()){
	    return MICROBIT_ID_BUTTON_A;
	}
	if (uBit.buttonB.isPressed()){	    
	    return MICROBIT_ID_BUTTON_B;
	}
    }
}

int main()
{
    //Initialise the micro:bit runtime.
    uBit.init();

    //Retrieve int array containing input sequence
    int *inputSequence = get_input_sequence();

    //Declare variables
    bool gameInProcess = true;
    int gameCounter = 1;
    int userInput[INPUT_SEQUENCE_LENGTH];
    char requiredString[INPUT_SEQUENCE_LENGTH];

    while (gameInProcess == true || gameCounter == INPUT_SEQUENCE_LENGTH) {
	//Displays input order to the user
	strcpy(requiredString, ""); 
	for (int i = 0; i < gameCounter; i++) {
	    if (inputSequence[i] == MICROBIT_ID_BUTTON_A) {
		strcat(requiredString,"< ");
	    } else {
		strcat(requiredString,"> ");
	    }
	}
	uBit.display.print(requiredString);

	//Gets input from user
	memset(userInput, 0, sizeof(userInput));
	for (int x = 0; x < gameCounter; x++) {
	    userInput[x] = get_button_press();
	}

	//Detect if input is valid
	for (int y = 0; y < gameCounter; y++){
	    if (userInput[y] != inputSequence[y]) {
		gameInProcess = false;
		break;
	    }
	}
	gameCounter++;
    }

    //Display if user won or lost game
    if (gameInProcess == true) {
	uBit.display.scroll("Winner!");
    } else {
	uBit.display.scroll("Game over");
    }    

    // If main exits, there may still be other fibers running or
    // registered event handlers etc.
    // Simply release this fiber, which will mean we enter the
    // scheduler. Worse case, we then
    // sit in the idle task forever, in a power efficient sleep.
    release_fiber();
}
