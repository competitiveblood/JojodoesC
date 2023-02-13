#include <stdio.h>
int main()
{
int n,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=c+i;
if(c==n)
{
printf("the number is triangular");
break;

}
if(i==n)
{
printf("the number is not triangular");
}
return 0;
}
