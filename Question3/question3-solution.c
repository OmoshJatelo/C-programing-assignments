#include <stdio.h>

int main()
{
    int credit_limit, price, quantity, total_price, n, counter, quantity2;
    counter = 1;
    printf("Enter number of clients\n");
    scanf("%d",&n);
    while(counter <= n){
        do{

            printf("Enter your credit limit\n");
            scanf("%d",&credit_limit);

            printf("Enter price:\n");
            scanf("%d",&price);


        

            printf("Enter the quantity:\n");
            scanf("%d",&quantity);

            total_price = price * quantity;
            while(total_price > credit_limit){
                printf("Sorry you cannot purchase goods worth such a value on credit\n");
                printf("Enter the quantity:\n");
                scanf("%d",&quantity);
                total_price = price * quantity;
            }
        }
        while(total_price >credit_limit);
        printf("Thank you for purchasing from us\n the total was %d \n" ,total_price);
        counter ++;

    }
    return 0;
}
