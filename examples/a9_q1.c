/*
** Scientific Computing
** Assignment 9 solutions
** 29 March 2024
**
** Question 1
**
** This question was worth 5 marks.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STR_MAX 200

bool is_palindrome( const char *message );
int read_line( char *str, int n );


bool is_palindrome( const char *message ) {
	const char *p, *q;

	if( *message == '\0' ) {
		// if empty string, not a palindrome
		return false;
	}

	p = message;
	// find the end of the string
	for( q = message; *q; q++ )
		continue;
	q--;  // point to the last character in the string

	while( p <= q ) {
		// ignore characters that aren't letters
		while( !isalpha(*p) ) {
			p++;
		}

		// ignore characters that aren't letters
		while( !isalpha(*q) ) {
			q--;
		}

		// ignore case in the comparison
		if( tolower(*p) != tolower(*q) ) {
			return false;
		}

		p++;
		q--;
	}

	return true;
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

	if( is_palindrome( message ) ) {
		printf( "Palindrome\n" );
	}
	else {
		printf( "Not a palindrome\n" );
	}

	return 0;
}
