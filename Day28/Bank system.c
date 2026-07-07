#include <stdio.h>

struct bank
{int accno;
char name[50];
float balance;
};
int main()
{struct bank b;
float deposit,withdraw;
printf("Enter Account Number:");
scanf("%d",&b.accno);
printf("Enter Name:");
scanf("%s",b.name);
printf("Enter Balance:");
scanf("%f",&b.balance);
printf("Enter Deposit Amount:");
scanf("%f",&deposit);
b.balance=b.balance+deposit;
printf("Enter Withdraw Amount:");
scanf("%f",&withdraw);
if(withdraw<=b.balance)
    b.balance=b.balance-withdraw;
else
    printf("Insufficient Balance\n");
printf("\nAccount Details\n");
printf("Account Number:%d\n",b.accno);
printf("Name:%s\n",b.name);
printf("Balance:%.2f",b.balance);

    return 0;
}