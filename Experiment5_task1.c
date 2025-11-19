#include <stdio.h>

int factorial_1(int num) {
    
    int fact=1;
    
    for(int i=1; i<=num; i++) {
        
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial is %d",factorial_1(num));
    return 0;
}
