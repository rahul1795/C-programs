#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{ int arm=0,dig,co,num,i=0,rem,sum=0;

    printf("\n\tEnter your number\n");
    scanf("%d",&num);

//this is to find the no: of digits in num
dig=co=num;
while(dig != 0){

dig=dig/10;
i++;
}

    printf("\n\ttotal digits in number is %d\n",i);

//this is to find the sum of digits
    while(num>0){

        rem=num%10;
        sum=sum+rem;
        num=num/10;
        arm=arm+pow(rem,i);
    }
        printf("\n\tsum of digits for number is %d\n",sum);

if(arm==co)
        printf("\n\t%d is an armstrong number\n",co);
else
        printf("\n\t%d is not an armstrong number\n",co);


    return 0;
}
