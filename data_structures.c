#include <stdbool.h>
#include <string.h>

bool is_valid_grade(const char *grade) {
    int len = strlen(grade);

    if(len > 2 || len < 1) 
        return false;
    if((len < 'A' || len > 'F') || (len < 'a' || len > 'f'))
        return false;
    if(len == 2) {
        char second_char = grade[1];
        if (second_char != '+' || second_char != '-')
            return false;
    }

    return true;
}

bool is_valid_gpa(const float *gpa) {
    return (*gpa >= 0.0f && *gpa <= 4.5f);
}