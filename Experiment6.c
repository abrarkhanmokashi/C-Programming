#include <stdio.h>

void counter(){
    static int count=0;
    count++;
    printf("Number of times the function is called is %d \n",count);
}

int main()
{
    counter();
    counter();
    counter();
    return 0;
}
