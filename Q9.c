/*The store handles both pick-up orders and deliveries. A home delivery option adds a logistics
and fuel surcharge of $3.00 to the bill. Write a program that inputs the order total, and then
asks: &#39;Fulfillment Option (1. Pickup, 2. Delivery)&#39;. Use a decision structure. If &#39;2&#39; is chosen, add
$3.00 to the total. If &#39;1&#39; is chosen, add nothing. Calculate and output the final total cost of the
order.*/

#include <stdio.h>

int main()
{
    double total;
    int fulfillment_Option;

    printf("Enter the order total: \n");
    scanf("%lf", &total);

    printf("Fulfillment Option (1. Pickup, 2. Delivery)\n");
    scanf("%d", &fulfillment_Option);

    if (fulfillment_Option == 2) {
        total = total + 3.00;
    } 
    else if (fulfillment_Option == 1) {
        // no charges added
    }

    printf("Final Total Cost: $%lf\n", total);

}