/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
char str[50];
int i=0,count=0;
printf("Enter a sentence:");
fgets(str,sizeof(str),stdin);
while (str[i] != '\0') {
    if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
        (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' '))
            count++;
    i++;
}

printf("Number of words = %d", count);

return 0;
}