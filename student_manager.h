#ifndef STUDENT_MANAGER
#define STUDENT_MANAGER

typedef struct Student {
  char name[80];
  char sclass[4];
  int phone;
} Student;

void insert(int size, Student *ptr_name, Student *ptr_phone, char name[80], char sclass[4], int phone);
void delete(int size, Student *ptr_name, *ptr_phone, name);
void delete(int size, Student *ptr_name, *ptr_phone, phone);
Student search(int size, Student *ptr_name, name);
Student search(int size, Student *ptr_phone, phone);
void display(int size, Student *ptr_name);

#endif
