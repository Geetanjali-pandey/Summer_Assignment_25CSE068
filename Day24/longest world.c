/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char str[100],max[50],temp[50];
int i=0,j=0,maxlen=0,len=0;
printf("Enter string: ");
fgets(str,sizeof(str),stdin);

while(str[i]!='\n'&&str[i]!='\0')
{if(str[i]!=' ')
    {temp[j]=str[i];
     j++;
     len++;
    }
else
    {temp[j]='\0';
    if(len>maxlen)
        {maxlen=len;
         for(j=0;temp[j]!='\0';j++)
              max[j]=temp[j];
         max[j]='\0';
        }
        j=0;
        len=0;
    }
    i++;
}

temp[j]='\0';
if(len>maxlen)
   {for(j=0;temp[j]!='\0';j++)
    max[j]=temp[j];
    max[j]='\0';
   }

printf("Longest word: %s",max);

return 0;
}