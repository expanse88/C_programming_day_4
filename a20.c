//WAP to read a character from the user and test whether it is a vowel or consonant or not an alphabet.
//#include<stdio.h>

#include<stdio.h>
int main() {
  char m;
  printf("Enter an alphabet : ");
  scanf("%c",&m);
  if ((m>='a' && m<= 'z' || m>='A' && m <= 'Z')){	
	if (m == 'a' || m == 'o' || m == 'i' || m == 'e' || m == 'u' || 
	    m == 'A' || m == 'O' || m == 'I' || m == 'E' || m == 'U' ){
            printf("The alphabet is vowel.");            
} else {
                      printf("The alphabet is a consonant.\n");
}  
} 
else {
printf("Sorry!!Retype!!This is not an alphabet.\n");
}           
 return 0;          
}
