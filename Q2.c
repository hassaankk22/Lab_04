

#include<stdio.h>
int main(){
    int quantity;
    printf("Enter Number Of Pizzas: \n");
    scanf("%d",&quantity);
    
    if(quantity>1){
    printf("---Check our Multi-pizza Deals---\n");
    printf("===Without Deal===\nTotal Price = $%d" , quantity*8);
    }
    else
    printf("Total Price = $%d" , quantity*8);
    
}