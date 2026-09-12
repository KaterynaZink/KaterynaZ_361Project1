#ifndef helper_h
#define helper_h

#include <stdio.h>

typedef struct Student{
    char *lastname;
    char *firstname;
    long int student_id;
    char *year;
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









#endif //helper_h