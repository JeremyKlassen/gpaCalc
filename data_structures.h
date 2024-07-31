#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdbool.h>

#define MAX_COURSE_NAME_LENGTH 40
#define MAX_GPA_LENGTH 4

typedef struct
{
    float gpa;
    char grade[MAX_GPA_LENGTH];
    char course_name[MAX_COURSE_NAME_LENGTH];

} Course;

bool is_valid_grade(const char *grade);
bool is_valid_gpa(const float gpa);

#endif