#include<stdio.h>
void main()
{
    int choice,quantity,Bill=0;
    char ch;
    my:
        printf("------------MENU----------------\n");
        printf("\n1.Tea--------------$30 \n2.Coffee------------$50");
        printf("\n3.Milkshake--------------$80 \n4.sandwitch------------$90");
        printf("\n5.pizza--------------$130 \n6.Green Tea------------$50");
        printf("\nWhat is your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nyou have selected a Tea");
                   printf("\nHow many cups of tea you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*30);
                   break;
            case 2:printf("\nyou have selected a Coffee");
                   printf("\nHow many cups of Coffee you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*50);
                   break;
            case 3:printf("\nyou have selected a Milkshake");
                   printf("\nHow many cups of milkshake you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*80);
                   break;
            case 4:printf("\nyou have selected a Sandwitch");
                   printf("\nHow many Sandwitch you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*90);
                   break;
            case 5:printf("\nyou have selected a Pizza");
                   printf("\nHow many pizza you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*130);
                   break;
            case 6:printf("\nyou have selected a Green tea");
                   printf("\nHow many cups of green tea you want :");
                   scanf("%d",&quantity);
                   Bill=Bill+(quantity*50);
                   break;

        }
        printf("\nDo you want to continue y/n :");
        scanf(" %c",&ch);
        if(ch=='y' || ch=='Y')
        {
            goto my;
        }
        printf("your total bill is %d",Bill);
}
