#include "helper.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 128



int main(void) {
    char buffer[BUFFERSIZE];

    List student_list;
    Student student;

    initialize_list(&student_list);

    printf("Enter a first name: ");
    if (fgets(buffer, BUFFERSIZE, stdin) != NULL){

        buffer[strcspn(buffer, "\n")]= '\0';
        student.firstname= malloc(strlen(buffer)+1);
        strcpy(student.firstname, buffer);
    }

    printf("Enter a last name: ");
    if( fgets(buffer, BUFFERSIZE, stdin) != NULL){

        buffer[strcspn(buffer, "\n")]= '\0';
        student.lastname= malloc(strlen(buffer)+1);
        strcpy(student.lastname, buffer);
    }

    printf("Enter student's year (freshmen, sophomore, etc.): ");
    if(fgets(buffer, BUFFERSIZE, stdin) != NULL){

        buffer[strcspn(buffer, "\n")]= '\0';
        student.year = malloc(strlen(buffer)+ 1);
        strcpy(student.year, buffer);
    }

    printf("Enter student's ID: ");
    fgets(buffer, BUFFERSIZE, stdin);
    student.student_id= strtol(buffer, NULL,10);


    printf("Enter expected graduation year: ");
    fgets(buffer,BUFFERSIZE, stdin);
    student.expected_graduation= strtol(buffer,NULL,10);






}