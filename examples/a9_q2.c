/*
** Scientific Computing
** Assignment 9 solutions
** 29 March 2024
**
** Question 2
**
** This question was worth 5 marks.
*/

#include <stdio.h>

#define STR_MAX 255

void reverse( char *message );
int read_line( char *str, int n );


void reverse( char *message ) {
	char *p, *q;

	if( *message == '\0' ) {
		// if empty string, nothing to reverse
		return;
	}

	p = message;
#if 1
	// find the end of the string
	for( q = message; *q; q++ )
		;
	q--;  // point to the last character in the string

#else
	// alternate implementation
	q = message + strlen( message ) - 1;
#endif

	while( p <= q ) {
		char temp = *p;
		*p = *q;
		*q = temp;

		p++;
		q--;
	}
}


int read_line( char *str, int n ) {
	int ch, i = 0;

	while( (ch = getchar()) != '\n' ) {
		if( i < n ) {
			str[i++] = ch;
		}
		else {
			// discard extra input
		}
	}
	str[i] = '\0';   // ensure it's a string

	return i;
}


int main( void ) {
	char message[STR_MAX+1] = { 0 };

	printf( "Enter message: " );
	read_line( message, STR_MAX );

	reverse( message );

	printf( "%s\n", message );

	return 0;
}
