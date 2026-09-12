#include<stdio.h>

int main(){
    int quantity, crust, time, fulfillment_Option;
    char cheese, student_status;
    double total_price;

    /*  Pizza quantity & base price  */
    printf("Enter Pizza Quantity (1-3): \n");
    scanf("%d", &quantity);

    if(quantity==1){
        total_price = 8;
        printf("1 Pizza : $8");
    }
    else if(quantity==2){
        total_price = 15;
        printf("2 Pizza : $15 (Save $1)");
    }
    else if(quantity==3){
        total_price = 21;
        printf("3 Pizza : $21 (Save $3)");
    }
    else{
        total_price = 0;
        printf("Invalid Size");
    }

    /*  Crust type */
    printf("\n---Enter Crust Type--- \n");
    printf("Input Guidance\n1 for Regular\n2 for Thin\n3 for Stuffed\n");
    scanf("%d", &crust);

    if(crust==1){
        printf("---Regular crust selected---\n(Same Price)\n");
    }
    else if(crust==2){
        printf("---Thin Crust Selected--- (+$1)\n");
        total_price = total_price + 1;
    }
    else if(crust==3){
        printf("---Stuffed Crust Selected--- (+$2)\n");
        total_price = total_price + 2;
    }
    else
        printf("Invalid Crust Input");

    /*  Extra cheese  */
    printf("Do you want extra cheese: (Y/N)\n");
    scanf(" %c" , &cheese);

    if(cheese=='y' || cheese == 'Y'){
        printf("Extra Cheese Added (+$1.50)\n");
        total_price = total_price + 1.50;
    }
    else if(cheese=='N' || cheese=='n')
        printf("No extra cheese added\n");
    else
        printf("Invalid Input\n");

    /*  Garlic bread   */
    if (quantity == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    }
    /*  Student discount  */
    printf("Are You a STudent? (Y/N) \n");
    scanf(" %c" , &student_status);

    if(student_status=='Y' || student_status=='y'){
        total_price = total_price - 2.00;
    }
    else if(student_status=='N' || student_status=='n'){
        // no discount
    }
    else
        printf("Invalid input\n");

    /* hour discount  */
    printf("Enter Current Time (0-23)\n");
    scanf("%d" , &time);

    if(time>=11 && time<=14){
        printf("Congratulations! You got 10%% discount!\n");
        total_price = total_price * 0.90;
    }

    /* Delivery / pickup  */
    printf("Fulfillment Option (1. Pickup, 2. Delivery)\n");
    scanf("%d", &fulfillment_Option);

    if (fulfillment_Option == 2) {
        total_price = total_price + 3.00;
        printf("+$3\n\n\n\n\n");
    }
    else if (fulfillment_Option == 1) {
        // no charges added
    }

    /*  negative bill  */
    if(total_price<0){
        total_price = 0.00;
        printf("====Bill Adjusted to Avoid Nagative Value====\n");
    }

    printf("========Reciept========\n\n\n");

    // quantity
    printf("Quantity: %d\n" , quantity);

    // crust

    if(crust==1){
        printf("Crust  = Regular\n");
    }
    else if(crust==2){
        printf("Crust  = Thin\n");
    }
    else if(crust==3){
        printf("Crust = Stuffed\n");
    }
    else
        printf("Invalid Crust Input");


    // student_status

    if(student_status=='Y' || student_status=='y'){
        printf("Student = Yes\n");
    }
    else if(student_status=='N' || student_status=='n'){
        printf("Student = No\n");
    }
    else
        printf("Invalid input\n");
    
    // extra cheese

        if(cheese=='y' || cheese == 'Y'){
        printf("Extra Cheese = Yes\n");
    }
    else if(cheese=='N' || cheese=='n')
        printf("Extra Cheese = No\n");
    else
        printf("Invalid Input\n");

    // fulfillment_Option

    if (fulfillment_Option == 2) {
        printf("Fulfillment = Delivery\n");
    }
    else if (fulfillment_Option == 1) {
        printf("Fulfillment = Pickup\n");
    }

    // Garlic bread
    if (quantity == 3 && crust == 3) {
        printf("==========\nBONUS==========\nYou get free garlic bread!\n");
    }

    // Final total

    printf("==========\nFinal Total = %lf\n==========\n" , total_price);

    printf("Thankyou for Dining With Us");
}