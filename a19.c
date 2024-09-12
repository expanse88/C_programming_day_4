 /*WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is 
in lowercase, otherwise display an appropriate message. */
#include<stdio.h> 
int main()
{
char m;
printf("Enter an alphabet in lowercase:");
scanf("%c",&m);
if(m>='a' && m<='z'){
	m =m -32; 
     printf("The alphabet in uppercase is:%c\n.",m);
}
else{
   printf("You have enetered %c which is already in uppercase.\n",m);
}
}
