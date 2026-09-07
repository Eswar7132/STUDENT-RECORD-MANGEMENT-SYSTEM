#include"student.h"
void readFile(SLL **ptr)
{
    SLL *new,*last;
    FILE *fp;
    fp=fopen("student.dat","r");
    if(fp==0)
    {   
        printf("file is not present\n");
        return;
    }   
    while(1)
    {   
    new=malloc(sizeof(SLL));
    if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage)==-1)
            break;
        new->next=0;
        if(*ptr==0)
            *ptr=new;
        else
        {
            last=*ptr;
            while(last->next)
                last=last->next;
            last->next=new;
        }
    }   
}
