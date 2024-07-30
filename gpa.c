#include <stdio.h>
#include "data_structures.h"

int main () {
    Course first = {
        3.75f,
        "b+",
        "ACS-1103"
    };

	printf( "Greetings you're score in %s was %.1f\n", first.course_name, first.gpa);
    return 0;
}