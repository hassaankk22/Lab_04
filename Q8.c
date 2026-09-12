/*The shop is running a promotional giveaway to encourage premium combos: If a customer
orders exactly 3 pizzas and selects the Stuffed Crust option, they qualify for a free side dish.
Write a C program segment that reads the number of pizzas and the crust type selection (3 for
Stuffed). If both conditions are met simultaneously using a compound logical operator, print:
&#39;You get free garlic bread!&#39;. Otherwise, print: &#39;Thank you for your order!&#39;*/


#include <stdio.h>

int main()
{
    int quantity, crust_type;

    printf("Enter the number of pizzas: \n");
    scanf("%d", &quantity);

    printf("Enter crust type (1 = Regular, 2 = Thin, 3 = Stuffed): \n");
    scanf("%d", &crust_type);

    if (quantity == 3 && crust_type == 3) {
        printf("You get free garlic bread!\n");
    } 
    else
        printf("Thank you for your order!\n");
}