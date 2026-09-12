#include "helper.h"

void initialize_list(List *list){
    list->head = NULL;
    list->tail= NULL;
    list->size= 0;
}

void add_student(List *list, Student student){
    Node *new_node = (Node *)malloc(sizeof(Node));
    
    new_node->student_data= student;
    new_node->next = NULL;
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

void remove_student(List *list, Student student){

}
void print_beginning(const List *list){

}
void print_end(const List *list){

}
void free_list(List *list){

}
