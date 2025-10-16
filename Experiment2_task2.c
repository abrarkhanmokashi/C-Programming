#include<stdio.h>
int main()
{
//name:-Abrarkhan Abdulgani Mokashi
//class:-comp
//division:-c
//UIN:-2501P054
int start,end,sum=0;
printf("enter the starting number:-");
scanf("%d", &start);
printf("enter the ending number:-");
scanf("%d",&end);
for(int i=start; end>i;i++)
{
if(i%2!=0)
{
sum=sum+1;
}
}
printf("sum of all odd number between %d and %d is: %d\n",start,end,sum);
return 0;
}
