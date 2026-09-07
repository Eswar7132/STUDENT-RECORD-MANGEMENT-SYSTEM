#include"student.h"
void deleteallRecords(SLL **ptr)
{
        if(*ptr==0)
        {
            printf("no records present\n");
            return;
        }
        int c=1;
        SLL *del=*ptr;
        while(del)
        {
            *ptr=del->next;
            free(del);
            printf("delete node:%d\n",c++);
            sleep(1);
            del=*ptr;
        }
        printf("all  node deleted\n");
}
