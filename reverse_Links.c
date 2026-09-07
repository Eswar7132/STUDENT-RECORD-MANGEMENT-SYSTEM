#include"student.h"
void reverseLinks(SLL **ptr)
{
        if(*ptr==0)
        {
            printf("no records present\n");
            return;
        }
        SLL *t,*p=*ptr;
        int i,j,c1=0;
        while(p)
        {
            c1++;
            p=p->next;
        }
        for(i=0;i<c1;i++)
        {
            t=*ptr;
            for(j=0;j<c1-1-i;j++)
                t=t->next;
            printf("%d %s %f\n",t->rollno,t->name,t->percentage);
        }
}
