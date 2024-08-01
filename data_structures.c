#include <stdbool.h>
#include <string.h>
#include <stdio.h>


bool is_valid_grade(const char *grade) {
    int len = strlen(grade);

    if(len > 2 || len < 1) 
        return false;
    if(!(grade[0] >= 'A' && grade[0] <= 'F') && !(grade[0] >= 'a' && grade[0] <= 'f'))
        return false;
    if(len == 2) {
        char second_char = grade[1];
        printf("%c\n", second_char);
        if (second_char != '+' && second_char != '-')
            return false;
    }

    return true;
}

bool is_valid_gpa(const float gpa) {
    return (gpa >= 0.0f && gpa <= 4.5f);
}