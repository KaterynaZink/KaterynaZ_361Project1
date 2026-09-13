#include "helper.h"

#include <stdio.h>
#include <stdlib.h>

void initialize_list(List *list){
    list->head = NULL;
    list->tail= NULL;
    list->size= 0;
}

void add_student(List *list, Student student){
    Node *new_node = (Node *)malloc(sizeof(Node)); //
    
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

void remove_student(List *list, const char *lastname){
    Node *current = list->head;
   
    while(current != NULL){
        Node *next_node= current->next;
   
        if(strcmp(current->student_data.lastname, lastname)==0){
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
        }
        free(current);
        list->size--;
    }
    current= current->next;
}


void print_beginning(const List *list){
    Node *current = list->head;

    while(current != NULL){
        printf("First Name: %s, Last Name: %s\n", current->student_data.firstname, current->student_data.lastname);
        current = current->next;
    }
}

void print_end(const List *list){
    Node *current = list->tail;

    while(current != NULL){
        printf("First Name: %s, Last Name: %s\n", current->student_data.firstname, current->student_data.lastname);
        current= current->prev;
    }
}

void free_list(List *list){
    Node *current= list->head;
    while(current != NULL){
        Node *new_node= current->next;
        free(current);
        current= new_node;
    }
}
