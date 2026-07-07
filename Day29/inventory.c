#include <stdio.h>

struct item
{int id,qty;
char name[50];
float price;
};

int main()
{struct item p[50];
int n,i;
printf("Enter number of items:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {printf("\nItem %d\n",i+1);
     printf("Enter ID:");
     scanf("%d",&p[i].id);
     printf("Enter Name:");
     scanf("%s",p[i].name);
     printf("Enter Quantity:");
     scanf("%d",&p[i].qty);
     printf("Enter Price:");
     scanf("%f",&p[i].price);
    }
printf("\nInventory Details\n");
for(i=0;i<n;i++)
    {printf("\nID=%d",p[i].id);
    printf("\nName=%s",p[i].name);
    printf("\nQuantity=%d",p[i].qty);
    printf("\nPrice=%.2f\n",p[i].price);
    }

    return 0;
}