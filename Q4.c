/*Customers can choose their crust to suit their preference. Each crust selection has a distinct
pricing addition: Regular crust costs $0, thin crust adds $1, and Stuffed crust adds $2. Write a
program that asks the cashier to enter the current total cost of the order. Then, prompt for the
crust type choice (1 for regular, 2 for Thin, 3 for Stuffed). Use conditional branches to add the
appropriate surcharge to the total and print the new updated bill total.*/

#include<stdio.h>
int main(){
    int crust, current_cost, total_price;
    printf("Enter Current Total Cost Of Order : \n");
    scanf("%d", &current_cost);
    printf("---Enter Crust Type--- \n");
    printf("Input Guidance\n1 for Regular\n2 for Thin\n3 for Stuffed\n");
    scanf("%d", &crust);

    if(crust==1){
        printf("---Regular crust selected---\n(Same Price)");
    }
    else if(crust==2){
    printf("---Thin Crust Selected--- (+$1)\n");
    total_price = current_cost + 1;
    printf("Total Price = $%d" , total_price);
    }
    else if(crust==3){
        printf("---Stuffed Crust Selected--- (+$2)\n");
        total_price = current_cost + 2;
        printf("Total Price = $%d" , total_price);

    }
    else
    printf("Invalid Crust Input");    
}