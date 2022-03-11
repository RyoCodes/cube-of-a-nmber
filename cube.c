#include<stdio.h>
 
int main()
{
  int num, cube;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d",&num);
  
  cube = num*num*num;
  
  printf("\n Cube of a given number %d is  =  %d",num, cube);
 
  return 0;
}
