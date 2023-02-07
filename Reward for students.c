#include <stdio.h>

int main()
{
  int a,b ;

printf("Full Marks = 100\n");
printf("Pass Marks = 40\n");
  printf("\nEnter the marks you got in science ?\n");
  scanf("%d", &a);
printf("Enter the marks you got in math ?\n");
scanf("%d", &b);
  if (a>=40 && b>=40)
  {
    printf("you will get gift of Rupees 45 for passing in Both subjects");
  }
  else if(a>=40)
  {
    printf("you will get gift of Rupees 15 for passing in science only");
  }
  else if(b>=40){
    printf("you will get gift of Rupees 15 for passing in maths only" );
  }
  else
{
    printf("Better luck next time");
  }
    return 0;
}
