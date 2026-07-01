/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{char str1[50],str2[50];
int i,j,c1,c2;
printf("Enter first string: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter second string: ");
fgets(str2,sizeof(str2),stdin);
if(strlen(str1)!=strlen(str2))
{   printf("Strings are not anagrams.");
    return 0;
}
for(i=0;str1[i]!='\n';i++)
{     c1=0;
      c2=0;
      for(j=0;str1[j]!='\n';j++)
            if(str1[i]==str1[j])
                c1++;
      for(j=0;str2[j]!='\n';j++)
            if(str1[i]==str2[j])
                c2++;
      if(c1!=c2)
        {   printf("Strings are not anagrams.");
            return 0;
        }
    }

    printf("Strings are anagrams.");

    return 0;
}