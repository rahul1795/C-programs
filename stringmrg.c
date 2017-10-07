#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,k=0,len1,len2;
	char fname[8],lname[8];
	
	// getting the values of arrays
				printf("===============================\n");

		printf("enter the first name : \n");
           scanf("%s",fname);	
		printf("enter the second name : \n");
           scanf("%s",lname);	

//finding the lenght of strings

len1=strlen(fname);
len2=strlen(lname);
char ar3[len1+len2+2];

		
	for(i=0;i<len1+len2;i++)
	{
		if(i<len1)
		{
			if(i<len1)
			ar3[i]=fname[i];

		}
		else if(i>=len1)
		{
			  ar3[i]=lname[k];
		      k++;
		}
	}
	printf("%s\n",ar3);

	return 0;
}