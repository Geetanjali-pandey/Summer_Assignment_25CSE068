/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n, i, first,arr[100];
printf("Enter number of elements:");
scanf("%d", &n);
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
first = arr[0];
for(i = 0; i < n-1; i++)
    arr[i] = arr[i+1];
arr[n-1] = first;
printf("Array after left rotation:\n");
for(i = 0; i < n; i++)
    printf("%d ", arr[i]);

    return 0;
}