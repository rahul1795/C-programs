#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{ 
	int dec=0,count=0;
	char hex[15];
	char given[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	printf("Enter the hex value : "); //use upper case character
    scanf("%s",hex);

 for(int j=strlen(hex)-1;j>=0;j--)
 {
    for(int i=0;i<=15;i++)
    {
      if(hex[j]==given[i])
      {
        dec += i*pow(16,count);
      }
    }
    count++;
 }

printf(" the hex value you entered is : %s  \nAnd its decimal value is : %d\n",hex,dec);

	return 0;
}