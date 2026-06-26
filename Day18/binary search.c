/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int ar[100],n,i,key,low,high,mid,f=0;
printf("Enter number of elements:");
scanf("%d", &n);
printf("Enter sorted array elements: ");
for(i=0; i<n;i++)
    scanf("%d", &ar[i]);
printf("Enter element to search: ");
scanf("%d", &key);
low = 0;
high=n-1;

while(low<=high)
{   mid=(low+high)/2;
    if(ar[mid]==key)
    {   f=1;
        break;
    }
    else if(ar[mid] < key)
        low=mid+1;
    else
        high=mid-1;
}
if(f==1)
    printf("Element found at index %d", mid);
else
    printf("Element not found");

    return 0;
}