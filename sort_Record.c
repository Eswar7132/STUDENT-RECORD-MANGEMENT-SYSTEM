#include"student.h"
void sortRecords(SLL **ptr)
{
char op1;
        printf("n)sort with name p)sort with percentage\n");
        scanf(" %c",&op1);
        if(op1=='p')
        {
            if(*ptr==0)
            {
                printf("no records present\n");
                return;
            }
            SLL *p1=*ptr,*p2,t,*p3=*ptr;
            int i,j,c=0;
            while(p3)
            {
                c++;
                p3=p3->next;
            }
            for(i=0;i<c-1;i++)
            {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                    if(p1->percentage > p2->percentage)
                    {
                        t.percentage=p1->percentage;
                        strcpy(t.name,p1->name);
                        t.rollno=p1->rollno;

                        p1->percentage=p2->percentage;
                        strcpy(p1->name,p2->name);
                        p1->rollno=p2->rollno;

                        p2->percentage=t.percentage;
                        strcpy(p2->name,t.name);
                        p2->rollno=t.rollno;
                    }
                    p2=p2->next;
                }
                p1=p1->next;
            }
        }
        else if(op1=='n')
        {
            SLL *p1=*ptr,*p2,t,*l=*ptr;
            int i,j,c=0;
            while(l)
            {
                c++;
                l=l->next;
            }
            for(i=0;i<c-1;i++)
            {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                    if(strcmp(p1->name,p2->name)>=0)
                    {
                        t.percentage=p1->percentage;
                        strcpy(t.name,p1->name);
                        t.rollno=p1->rollno;

                        p1->percentage=p2->percentage;
                        strcpy(p1->name,p2->name);
                        p1->rollno=p2->rollno;

                        p2->percentage=t.percentage;
                        strcpy(p2->name,t.name);
                        p2->rollno=t.rollno;
                    }
                    p2=p2->next;
                }
                p1=p1->next;
            }
        }
    }
