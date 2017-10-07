#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int n=15;
  char na[21];

  sprintf(na," %d ",n);  // sprintf(destination_string,"%d",var);
  printf(" %s\n",na); //printing the string value
  return 0;
}