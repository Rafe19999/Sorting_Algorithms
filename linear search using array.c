//Write a C program for linear search using array//
#include<stdio.h>
int main()
{
  int i,num[100]={10,35,46,73,28,19};
int value,pos=-1;
printf("Enter the value you want to search: ");
scanf("%d",&value);
  for(i=0;i<6;i++)
  {
      if (value==num[i])
      {
          pos=i+1;
          break;
      }

  }
  if(pos==-1)
    printf("Not Found");
    else
        printf("The position of that number is:%d\n",pos);
  return 0;





}
