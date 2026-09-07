#include"student.h"
void stud_del(SLL **ptr)
{
    char op1;
    printf("r)rollno n)name\n");
    scanf(" %c",&op1);
    if(op1=='n')
    {
        if(*ptr==0)
        {
            printf("no records present\n");
            return;
        }
        SLL *del=*ptr,*prev=*ptr;
        char name[20];
        printf("enter the name\n");
        scanf("%s",name);
        while(del)
        {
            if(strcmp(name,del->name)==0)
            {
                if(*ptr==del)
                {
                    *ptr=del->next;
                    free(del);
                }
                else
                {
                    prev->next=del->next;
                    free(del);
                }
            }
            prev=del;
            del=del->next;
        }
    }
    else if(op1=='r')
    {
        if(*ptr==0)
        {
            printf("no records present\n");
            return;
        }
        SLL *del=*ptr,*prev=*ptr;
        int num;
        printf("enter the num\n");
        scanf("%d",&num);
        while(del)
        {
            if(num==del->rollno)
            {
                if(del==*ptr)
                {
                    *ptr=del->next;
                    free(del);
                }
                else
                {
                    prev->next=del->next;
                    free(del);
                }
            }
            prev=del;
            del=del->next;
        }
    }
}
