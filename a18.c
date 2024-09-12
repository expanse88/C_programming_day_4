//	WAP to find the largest between two numbers.
#include<stdio.h>
float main()
{
float n1,n2;
printf("Enter number 1:\n");
scanf("%f",&n1);
printf("Enter number 2:\n");
scanf("%f",&n2);
if(n1>n2){
printf("Number 1 is greater than Number 2\n ");
}
else if (n1<n2){
printf("Number 2 is greater than Number 1\n ");
}
else{
printf("Numbers are equal\n");
}
return 0;
}

