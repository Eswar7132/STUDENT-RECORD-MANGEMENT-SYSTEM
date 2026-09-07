#include"student.h"
void stud_save(SLL *ptr)
{
    int c=0;
            if(ptr==0)
            {
                printf("no records present\n");
                return;
            }
            c=1;
            SLL *s=ptr;
            FILE *fp;
            fp=fopen("student.dat","w");
            while(s)
            {
            s->rollno=c++;
            fprintf(fp,"%d %s %f\n",s->rollno,s->name,s->percentage);
                s=s->next;
            }
}
