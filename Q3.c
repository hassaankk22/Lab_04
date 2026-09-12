/*To attract bulk orders, Slice &amp; Dice Palace implements an absolute pricing matrix for their small
pizzas: 1 pizza costs $8; a combo of 2 pizzas costs $15; and a package of 3 pizzas costs $21.
Write a program that asks the cashier to input the customer&#39;s desired pizza quantity (limited to
1, 2, or 3). Using a conditional ladder, compute the base cost according to this pricing policy and
print the final package total along with the quantity.*/

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