//WAP to find the sum of all digits of a three-digit number.Number must be a user input.
#include<stdio.h>
int main()
{
int n,n1,n2,n4,n3;
printf("Enter a three-digit number: ");
scanf("%d",&n);
n1 = n/100;
n2 = (n/10)%10; 
n3 = n%10;
n4 = n1+n2+n3;
printf("The sum of the three-digit number is:%d", n4);
return 0;

}
