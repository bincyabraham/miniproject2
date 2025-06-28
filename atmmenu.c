#include<stdio.h>
void main()
{
    int balance=10000,withdraw,deposit,x,accno;
    do{
        printf("ATM MENU");
        printf("\n1.Check Balance");
        printf("\n2.Deposit Money");
        printf("\n3.Withdraw Money");
        printf("\n4.Exit");
        printf("\nEnter your Choice:");
        scanf("%d",&x);
        switch(x)
        {
            case 1:printf("Current Balance:%d\n",balance);
            break;
            case 2:printf("Enter the amount to Deposit:");
            scanf("%d",&deposit);
            if(deposit>0)
            {
                balance=balance+deposit;
                printf("Deposited Successfully!\n");
                printf("Updated balance=%d\n",balance);
            }
            else
            {
                printf("Invalid Deposit Amount!\n");
            }
            break;
            case 3:printf("Enter the amount to Withdraw:");
            scanf("%d",&withdraw);
            if(withdraw>balance)
            {
                printf("Insufficient Balance!\n");
            }
            else if(withdraw<=0)
            {
                printf("Invalid withdrawal amount!\n");
            }
            else
            {
                balance=balance-withdraw;
                printf("Withdraw Successfully!\n");
                printf("Updated Balance=%d\n",balance);
            }
            break;
            case 4:printf("Thank You..!");
            break;
            default:printf("Inavalid choice..Try again!\n");
        }
    }while(x!=4);

}