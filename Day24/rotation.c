/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{int i,l1,l2,j;
char str1[50],str2[50],temp[50];
printf("Enter a string1:");
fgets(str1,sizeof(str1),stdin);
l1=strlen(str1);
str1[strcspn(str1,"\n")]='\0';
printf("Enter a string2:");
fgets(str2,sizeof(str2),stdin);
l2=strlen(str2);
str2[strcspn(str2,"\n")]='\0';
if(l1!=l2)
   { printf("Not a rotation");
     return 0;
   }
strcpy(temp,str1);
strcat(temp,str1);
if(strstr(temp,str2))
      printf("Rotation");
else
      printf("Not a rotation");

    return 0;
}
