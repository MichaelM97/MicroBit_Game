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

MicroBit uBit;

#define INPUT_SEQUENCE_LENGTH 15

//Generates random input sequence for each instance of the game
int * get_input_sequence() {
    //Initialise variables
    int randNum;
    int returnArray [INPUT_SEQUENCE_LENGTH] = {};

    //Use the time as a random seed
    srand (time(NULL)); 

    //Fills input sequence array with 1's and 2's randomly
    for (int i = 0; i < INPUT_SEQUENCE_LENGTH; i++) {
      randNum = rand() % 2 + 1;
      returnArray[i] = randNum;
    }

    return returnArray;
}

//Displays the inputs the user must repeat 
void display_input_sequence(int *sequence, int currentPos) {
    //Loops through the input sequence up to the current position
    for (int i = 0; i <= currentPos; i++) {

	//Points at the buttons the user must press
        if (sequence[i] == MICROBIT_ID_BUTTON_A) {
	    uBit.display.print("<");
	} else {
	    uBit.display.print(">");
	}
    }
}

int main()
{
    //Initialise the micro:bit runtime.
    uBit.init();

    //Retrieve int array containing input sequence
    int *inputSequence = get_input_sequence();

    // 
    bool gameInProcess = true;
    int counter = 0;

    while (gameInProcess == true) {

        display_input_sequence(inputSequence, counter);

    }

    uBit.display.scroll("test");

    // If main exits, there may still be other fibers running or
    // registered event handlers etc.
    // Simply release this fiber, which will mean we enter the
    // scheduler. Worse case, we then
    // sit in the idle task forever, in a power efficient sleep.
    release_fiber();
}
