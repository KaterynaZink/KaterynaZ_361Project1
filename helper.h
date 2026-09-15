#ifndef helper_h
#define helper_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Struct that represents a student*/
typedef struct Student{
    char *lastname;
    char *firstname;
    char *year;
    long int student_id;
    int expected_graduation;
} Student;

/*Struct that represents a node in a linked list by using next and previous pointers*/
typedef struct Node{
    Student student_data;
    struct Node* next;
    struct Node* prev;
} Node; 

/*Struct that represents a linked list*/
typedef struct List{
    Node *head;
    Node *tail;
    int size;
} List;


/*function prototypes that are written in helper.c*/
void initialize_list(List *list);
void add_student(List *list, Student student);
void remove_student(List *list, const char *lastname);
void print_beginning(const List *list);
void print_end(const List *list);
void free_list(List *list);


#endif //helper_h