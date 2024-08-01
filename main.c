#include <stdio.h>
#include "data_structures.h"
#include "main.h"

#define INITIAL_CAPACITY 100

int main () {

    int size = 0;
    Course courses[INITIAL_CAPACITY];
    choose_input(courses, &size);
    printf("%i courses added.", size);
    printf("Your course is %s \n", courses[0].course_name); 
    printf("Your gpa is %.1f \n", courses[0].gpa);
}

    

void choose_input(Course courses[], int *size){
    int userChoice;
    bool course_added;
    while(1) {
        course_added = true;
        printf("Enter a course - 1 \n");
        printf("See totals - 2: ");
        scanf("%d", &userChoice);

        if (userChoice == 2){
            break;
        }
        if (*size >= INITIAL_CAPACITY) {
            printf("Array is full. Cannot accept more userChoice.\n");
            break;
        }

        printf("Enter course name: ");
        scanf("%s", courses[*size].course_name);

        printf("Enter GPA: ");
        scanf("%f", &courses[*size].gpa);
        const float gpa = courses[*size].gpa;
        if(!is_valid_gpa(gpa)) {
            printf("Not a valid GPA\n");
            course_added = false;
        }

        while(getchar() != '\n');
        printf("Enter grade: ");
        fgets(courses[*size].grade,3,stdin);
        if(!is_valid_grade(courses[*size].grade)){
            printf("Not a valid grade. \n");
            course_added = false;
        }
        
        if(course_added)
            *size++;
    }
}
