// echo program
// a program to accept input data from the console and print it on the screen
// end of input data is indicated by pressing '^Z' (Ctrl-Z)
#include <stdio.h>
main98()
{
	char ch;
	while((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}
