#include <stdio.h>
//Name:-Abrarkhan Abdulgani Mokashi
//UIN:-251P054
//Division:-c
int main() 
{
int choice;
float num1,num2,result;
menu:
printf("Menu-driven Calculator \n");
printf("1. Addition \n");
printf("2. Subtraction \n");
printf("3. Multiplication \n");
printf("4. Division \n");
printf("5. Exit \n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 5)
{
printf("Exiting calculator. Goodbye!");
return 0;
}
printf("Enter two numbers: ");
scanf("%f %f",&num1,&num2);

switch(choice) {
 case 1:
 result=num1+num2;
printf("result:%2f \n",result);

 break;
case 2:
result = num1 - num2;
printf("result: %2f \n", result);
break;
case 3:
result = num1 * num2;
printf("result: %2f \n", result);
break;
case 4:
if(num2 == 0) {
 printf("Error: Division by zero is not allowed. \n");
 break;
 }
 result =num1 / num2;
printf("result: %2f \n", result);
break;
default:
printf("Invalid choice. Please try again.");
    }

    goto menu;
}
