#include "helper.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 128



int main(void) {
    char buffer[BUFFERSIZE];

    List student_list;
    Student student;

    printf("Enter a first name: ");
    if (fgets(buffer, BUFFERSIZE, stdin) != NULL){

        buffer[strcspn(buffer, "\n")]= '\0';
        student.firstname= malloc(strlen(buffer)+1);
        strcpy(student.firstname, buffer);
    }


    printf("Enter a last name: ");




    printf("Enter a year: ");




}