#include "helper.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function to initiliaze the list before using it*/
void initialize_list(List *list){
    list->head = NULL;
    list->tail= NULL;
    list->size= 0;
}


/*Function that adds a student to the list by creating a new node and asking the user for student information*/
void add_student(List *list, Student student){
    Node *new_node = (Node *)malloc(sizeof(Node)); //This line was assisted by Copilot. Prompt:"How do I allocate memory for a new node in C?"
    
    new_node->student_data= student;
    new_node->next= NULL;
    new_node->prev =list->tail;

    if(list->tail ==NULL){
        list->head= new_node;
    }
    else{
        list->tail->next= new_node;
    }
    list->tail= new_node;
    list->size++;
}

/*Function that removes a student from the list by last name. The function links the previous and next nodes*/
void remove_student(List *list, const char *lastname){
    Node *current = list->head;
   
    while(current != NULL){
        Node *next_node= current->next;
   
        if(strcmp(current->student_data.lastname, lastname)==0){ //This line was assisted by Copilot. Prompt: "How do I compare two strings in C?"
            if(current->prev !=NULL){
                current->prev->next= current->next;
            }
            else{
                list->head= current->next;
            }
            if(current->next != NULL){
                current->next->prev= current->prev;
            }
            else{
                list->tail= current->prev;
            }
            free(current->student_data.firstname);
            free(current->student_data.lastname);
            free(current->student_data.year);
            free(current);
            list->size--;
        }
        current= next_node;
    }
}

/*Function that prints all the students and their information starting from the beginning of the list*/
void print_beginning(const List *list){
    Node *current = list->head;

    while(current != NULL){
        printf("First Name: %s, Last Name: %s\n, Year: %s\n, ID: %d\n, Expected Graduation: %d\n", current->student_data.firstname, current->student_data.lastname, current->student_data.year, current->student_data.student_id, current->student_data.expected_graduation);
        current = current->next;
    }
}

/*Function that prints all the students and their information starting from the end of the list*/
void print_end(const List *list){
    Node *current = list->tail;

    while(current != NULL){
        printf("First Name: %s, Last Name: %s\n, Year: %s\n, ID: %d\n, Expected Graduation: %d\n", current->student_data.firstname, current->student_data.lastname, current->student_data.year, current->student_data.student_id, current->student_data.expected_graduation);
        current= current->prev;
    }
}

/*Function that frees all the memory that was allocated for the list and specific strings such as first name, last name, and year as well as the nodes*/
void free_list(List *list){
    Node *current= list->head;
    while(current != NULL){
        Node *new_node= current->next; 
        free(current->student_data.firstname);  
        free(current->student_data.lastname);
        free(current->student_data.year);
        free(current); 
        current= new_node; 
    }

    list->head=NULL;
    list->tail=NULL;
    list->size=0;
}
