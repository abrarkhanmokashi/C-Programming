#include <stdio.h>

// Name:Abrarkhan Mokashi Uin:251P054 Roll No:49 Div:C 

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printPrimes(num1, num2);

    return 0;
}
