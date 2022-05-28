#include <stdio.h>
union unionJob
{
   char name[5];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("Size of union = %d bytes", sizeof(uJob));
   printf("\nSize of structure = %d bytes", sizeof(sJob));
   return 0;
}

