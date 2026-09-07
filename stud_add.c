#include"student.h"
void stud_add(SLL **ptr)
{
    int c=1,f;
    SLL *new,*pos,*t;
    new=malloc(sizeof(SLL));
    while(1)
    {
        f=0;
        t=*ptr;
        while(t!=0)
        {
            if(t->rollno==c)
            {
                f=1;
                break;
            }
            t=t->next;
        }
        if(f)
            c++;
        else
            break;
    }
    new->rollno=c;
    printf("enter the name and percentage\n");
    scanf("%s %f",new->name,&new->percentage);
    if((*ptr==0)||(new->rollno<(*ptr)->rollno))
    {
    new->next=*ptr;
    *ptr=new;
    }
    else
    {
        pos=*ptr;
        while((pos->next!=0)&&(new->rollno>pos->next->rollno))
            pos=pos->next;
        new->next=pos->next;
        pos->next=new;
    }
}
