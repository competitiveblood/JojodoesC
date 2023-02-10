#include <stdio.h>

int main()
{
    
    printf("Hello world\n ");
    int i,age;
    
    for (i =0; i <10; i++){
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("You are a big boy/girl");
        printf("Shivangi is the King");
        
    }
    return 0;
    
}
