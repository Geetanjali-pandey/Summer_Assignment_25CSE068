/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{char str1[100],str2[100];
int i,j,found;

printf("Enter first string: ");
fgets(str1,sizeof(str1),stdin);

printf("Enter second string: ");
fgets(str2,sizeof(str2),stdin);

printf("Common characters:");

for(i=0;str1[i]!='\n';i++)
{found=0;
    for(j=0;str2[j]!='\n';j++)
    {if(str1[i]==str2[j])
        {found=1;
        break;
        }
    }
    if(found)
    {printf("%c ",str1[i]);
    for(j=0;str2[j]!='\n';j++)
        if(str2[j]==str1[i])
            str2[j]='*';
    }
}
return 0;
}