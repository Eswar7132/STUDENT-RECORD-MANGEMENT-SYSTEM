#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}SLL;
void stud_add(SLL **);
void stud_del(SLL **);
void stud_show(SLL *); 
void stud_mod(SLL *); 
void stud_save(SLL *); 
void sortRecords(SLL **);
void deleteallRecords(SLL **);
void reverseLinks(SLL **);
void readFile(SLL **);
