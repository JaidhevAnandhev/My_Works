#include<iostream.h>
int main()
{
   //str_ptrn refers to the star pattern
   int i , j;
   for (i = 0 ; i<6 ; i++)
   {
	for(j = 0 ; j<=i ; j++)
		cout<<" * & ";
		cout<<endl;
   }
   cout<<endl;
   return 0;
}
