/*Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.*/
#include<stdio.h>
int main()
{
	// '\' will not treat '\'as escape sequence
    printf("ASCII value of \\n is %d",'\n');
    printf("\nASCII value of \\r is %d",'\r');
    printf("\nASCII value of \\t is %d",'\t');
    printf("\nASCII value of \\a is %d",'\a');
    printf("\nASCII value of \\b is %d\n",'\b');
    
    return 0;
}
/*
Escape Sequence	Name	Description
\a	Alarm or Beep	It is used to generate a bell sound in the C program.
\b	Backspace	It is used to move the cursor backward.
\f	Form Feed	It is used to move the cursor to the start of the next logical page.
\n	New Line	It moves the cursor to the start of the next line.
\r	Carriage Return	It moves the cursor to the start of the current line.
\t	Horizontal Tab	It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v	Vertical Tab	It is used to insert vertical space.
\\	Backlash	Use to insert backslash character.
\’	Single Quote	It is used to display a single quotation mark.
\”	Double Quote	It is used to display double quotation marks.
\?	Question Mark	It is used to double quotation marks.
\ooo	Octal Number	It is used to represent an octal number.
\xhh	Hexadecimal Number	It represents the hexadecimal number.
\0	NULL	It represents the NLL character.

*/
