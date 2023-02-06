#include<stdio.h>
#define max 10
void main()
{
 int arr[max];
 int i,j,num,temp;
 printf("Enter the value of num \n");
 scanf("%d",&num);
 printf("Enter the elements one by one \n");
 for(i=0;i<num;i++)
 {
  scanf("%d", &arr[i]);
 }
 printf("Input array is \n);
  for(i=0;i<num;i++)
  printf("%d",arr[i]);
  
  for(i=0;
