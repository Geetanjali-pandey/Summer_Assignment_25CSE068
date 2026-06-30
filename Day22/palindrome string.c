/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{ int i,j,len=0;
char str[50],s[50];
printf("Enter string:");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\n')
{  len=len+1;
   i++;
}
str[len]='\0';
j=0;
for(i=len-1;i>=0;i--)
   { s[j]=str[i];
    j++;}
s[j]='\0';
if(strcmp(str,s)==0 )
     printf("It is a palindrome string ");
else
     printf("It is not a palindrome string ");

    return 0;
}
