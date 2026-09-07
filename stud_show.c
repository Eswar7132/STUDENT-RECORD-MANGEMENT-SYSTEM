#include"student.h"
void stud_show(SLL *ptr)
{
    printf("*************************\n");
    if(ptr==0)
    {   
        printf("no records present\n");
        printf("*************************\n");
        return;
    }   
    while(ptr)
    {   
        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }   
    printf("*************************\n");
}
