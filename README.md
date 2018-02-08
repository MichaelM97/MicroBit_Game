# Author: Michael McCormick


# How to build ---
# 1st: Change directory into the root folder of the game
# (Named 'IoT-Challenge1')
# 2nd: Set the build target by running this command
# 'yt target bbc-microbit-classic-gcc'
# 3rd: Build the program by running this command
# 'yt build'
# 4th: Copy the executable hex file to your microbit using this command (change for your account name)
# 'cp build/bbc-microbit-classic-gcc/source/iot-example-combined.hex /media/[YOUR_ACCOUNT_NAME]/MICROBIT'


# How to play ---
# When started, the game will begin displaying arrows
# e.g. ("<" or ">")
# You must press the buttons in the order that the arrows point to them
# Do this slowly as to allow the MicroBit to correctly detect your inputs
# If an incorrect entry is made, "Game over" will be displayed
# If you complete every round successfully, "Winner!" will be displayed


# Additional Information ---
# It is possible to change the length of the game (number of rounds)
# You can do so in the file "IoT-Challenge1/source/main.cpp"
# By changing this line (this is currently set to 10)
# '#define INPUT_SEQUENCE_LENGTH [NUMBER_OF_ROUNDS]'


