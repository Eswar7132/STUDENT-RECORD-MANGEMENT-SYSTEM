#include"student.h"
int main()
{
    SLL *headptr=0;
    char ch,ch1;
    FILE *fp=fopen("student.dat","r");
     ch1=fgetc(fp);
     if(ch1!=-1)
    readFile(&headptr);
    while(1)
    {
        printf("\033[32m enter the character\n");
        printf("|----------------------------\n");
        printf("|******STUDENT DATABASE*****|\n");
        printf("|\ta)ADD STUDENT DATA  |\n|\td)DELETE A RECORD   |\n|\ts)SHOW THE  LIST    |\n|\tm)MODIFY            |\n|\tv)SAVE              |\n|\te)EXIT              |\n|\tt)SORT THE LIST     |\n|\tl)DELETE ALL RECORDS|\n|\tr)REVERSE THE LIST  |\n ");
        printf("------------------------------\n\033[0m");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'a':stud_add(&headptr);break;
            case 'd':stud_del(&headptr);break;
            case 's':stud_show(headptr);break;
            case 'm':stud_mod(headptr);break;
            case 'v':stud_save(headptr);break;
            case 't':sortRecords(&headptr);break;
            case 'l':deleteallRecords(&headptr);break;
            case 'r':reverseLinks(&headptr);break;
            case 'e':
                      {
                     char ch2;
                     int c1;
                     printf("s)save and exit e)exit without saving\n");
                     scanf(" %c",&ch2);
                     if(ch2=='s')
                     {
                         if(headptr==0)
                         {
                             printf("no records present\n");
                             return 0;
                         }
                         c1=1;
                         SLL *s=headptr;
                         FILE *fp;
                         fp=fopen("student.dat","w");
                         while(s)
                         {
                s->rollno=c1++;
               fprintf(fp,"%d %s %f\n",s->rollno,s->name,s->percentage);
                             s=s->next;
                         }
                         printf("file is saved\n");
                         exit(0);
                     }
                         else if(ch2=='e')
                         {
                             exit(0);
                         }
                     break;
        }
    }
}
}
