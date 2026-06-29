/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,len=0;
char str[50];
printf("Enter string:");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\n')
{  len=len+1;
   i++;
}
printf("Reverse string:");
for(i=len-1;i>=0;i--)
    printf("%c",str[i]);

    return 0;
}
