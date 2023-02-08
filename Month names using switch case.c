#include<stdio.h>
int main()
{
    int month_number;
    printf("enter month_number\n");
    scanf("%d",&month_number);
    switch (month_number)
   {
    case 1:
    printf("January\n");
    break;
    case 2:
    printf("February\n");
    break;
    case 3:
    printf("March\n");
    break;
    case 4:
    printf("April\n");
    break;
    case 5:
    printf("May\n");
    break;
    case 6:
    printf("June\n");
    break;
    case 7:
    printf("July\n");
      case 8:
        printf("August\n");
        break;
      case 9:
        printf("September\n");
        break;
      Case 10:
      printf("October\n");
      break;
      Case 11:
      printf("November\n");
      break;
      Case 12:
      printf("December\n");
      break;
    default :
    printf("input must be between 1-12\n");

   } 
   return 0;
