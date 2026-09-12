#include<stdio.h>
int main(){
    int quantity;
    printf("Enter Pizza Quantity (1-3): \n");
    scanf("%d", &quantity);

    if(quantity==1)
    printf("1 Pizza : $8");
    else if(quantity==2)
    printf("2 Pizza : $15 (Save $1)");
    else if(quantity==3)
    printf("3 Pizza : $21 (Save $3)");
    else
    printf("Invalid Size");

}