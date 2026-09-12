#ifndef helper_h
#define helper_h

#include <stdio.h>

typedef struct Node{
    int student_data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct Student{
    char *lastname;
    char *firstname;
    long int student_id;
    char *year;
    int expected_graduation;
} Student;










#endif //helper_h