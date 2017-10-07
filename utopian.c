/* utopian tree grows twice in a year 
in spring it doubles its lenght 
in summer it increases my 1 meter

in this problem we consider lenght is 1 meter and spring is about to come 
*/

#include <stdio.h>

  int utopian(int n);

int main()
{
  int n,res;
  printf("enter the year of growth : ");
  scanf("%d",&n);

  res=utopian(n);
  printf("height of utopian after %d years is : %d\n",n,res);

return 0;
}

 int utopian(int n)
{  int height=1;

   for(int i=1;i<=n*2;i++)
{   
	if(i%2==0)
      height++;

  else height*=2;


}
	return height;
}
