#include<stdio.h>
int main()
{
float average;
int physics, chemistry, maths;
printf("marks in physics:");
scanf("%d", &physics);
printf("marks in chemistry:");
scanf("%d",&chemistry);
printf("marks in maths:");
scanf("%d",&maths);
average = (physics + chemistry + maths)/3;
printf("average %f \n", average);
if (average>=50){
printf("Eligeble for Admisssion \n");
}
else{
printf("Not Eligeble for Admisssion");
}
return 0;
}
