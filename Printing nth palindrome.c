#include<stdio.h>
int main()
{
int i,rangenum num=1,c=0,letest=0;

printf("Enter the Nth value");
scanf("%d",&rangenum);

while(c!=rangenum) // 0th palindrome no. DNE
{
int num1=num;
int num2=0;
while(num 1 !=0)

{
int rem=num1%10;
  num 1 /=10;
  num 2= num2*10+rem;
  }
  
  if(num==num2)
  {
  c++
  letest=num;
  }
  
  
  num=num+1;
  printf("%dth palindrome no. is %d",rangenum,letest);
  
  
  
  return 0;
  }
