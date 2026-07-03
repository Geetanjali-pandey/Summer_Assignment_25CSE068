/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
char word[20][50],temp[50];
int n,i,j;

printf("Enter number of words: ");
scanf("%d",&n);

printf("Enter words:\n");
for(i=0;i<n;i++)
    scanf("%s",word[i]);

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(strlen(word[j])>strlen(word[j+1]))
        {
            strcpy(temp,word[j]);
            strcpy(word[j],word[j+1]);
            strcpy(word[j+1],temp);
        }
    }
}

printf("Words sorted by length:\n");
for(i=0;i<n;i++)
    printf("%s\n",word[i]);

return 0;
}