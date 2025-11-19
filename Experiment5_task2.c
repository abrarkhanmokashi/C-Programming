#include <stdio.h>

int factorial_2(int num) {
    
    if(num==0||num==1) {
        return 1;
    }
    else 
    {
        return num*factorial_2(num-1);
    }
}


int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial is %d",factorial_2(num));

    return 0;
}
