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

    int choice;
    while(choice != 5){
        printf("1. Add a student\n");
        printf("2. Remove a student\n");
        printf("3. Print students from beginning\n");
        printf("4. Print students from end\n");
        printf("5. Exit\n");
        printf("Enter choice: ");

        fgets(buffer, BUFFERSIZE, stdin);
        choice= strtol(buffer, NULL,10);
    }

    if(choice == 1){

    }
    else if(choice ==2){

    }
    else if(choice ==3){

    }
    else if(choice ==4){

    }
    else if(choice==5){
        printf("Exited program\n");
        free_list(&student_list);
    }
    else{
        printf("Pick another choice\n");
    }

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

    add_student(&student_list, student);
    free_list(&student_list);


}