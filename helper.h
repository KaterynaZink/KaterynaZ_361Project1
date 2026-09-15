#ifndef helper_h
#define helper_h

#include <stdio.h>

typedef struct Student{
    char *lastname;
    char *firstname;
    char *year;
    long int student_id;
    int expected_graduation;
} Student;

typedef struct Node{
    Student student_data;
    struct Node* next;
    struct Node* prev;
} Node; 

typedef struct List{
    Node *head;
    Node *tail;
    int size;
} List;

void initialize_list(List *list);
void add_student(List *list, Student student);
void remove_student(List *list, const char *lastname);
void print_beginning(const List *list);
void print_end(const List *list);
void free_list(List *list);


#endif //helper_h