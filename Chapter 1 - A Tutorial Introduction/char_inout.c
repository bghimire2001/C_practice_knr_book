#include <stdio.h>
/*
Text inputs are dealt with as streams of characters. Text Streams are a sequence of characters 
divided into line; each line consists of zero or more characters followed my a newline char.

The simplest functions for reading and writing one character at a time are getchar() and putchar()

Getchar reads the next character from a text stream and returns that as it's value
- For getchar(), characters usually come from the keyboard

Putchar takes a given character, c, and prints it. 
- For putchar(c), characters usually are printed to the screen

*/

/*
reads a char
- While (character is not end of file indicator)
 - Output the character just read
 - Read a character
*/
void copy_input_to_output(){
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
    }
}