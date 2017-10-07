#include <stdio.h>
#include <stdlib.h>

int toh(int,int,int,int);

int main()
{   
   int n;
   printf("enter the number of disks\n");
   scanf("%d",&n);
   toh(n,1,3,2);

	return 0;
}

int toh(int n,int a,int b,int c)
{
   if(n>=1)
   {
        toh(n-1,a,c,b);
    	printf("%d to %d\n",a,b);
        toh(n-1,c,b,a);
   }
return 0;
}