/*Extra cheese is a popular option that carries a fixed preparation fee of $1.50. Write a program
that prompts the cashier for the current order total, then asks: &#39;Do you want extra cheese
(Y/N)?&#39;. Check the character input. If the cashier enters &#39;Y&#39; or &#39;y&#39;, add $1.50 to the current total
cost and print the updated total. If they enter &#39;N&#39; or &#39;n&#39;, keep the total unchanged. Handle any
invalid characters with a polite warning.*/

#include<stdio.h>
int main(){
    int current_price ;
    char cheese;
    printf("Enter Current Price: \n");
    scanf("%d" , &current_price);
    printf("Do you want extra cheese: (Y/N)\n");
    scanf(" %c" , &cheese);

    if(cheese=='y' || cheese == 'Y'){
    printf("Extra Cheese Added (+$1.50)\n");
    printf("Your Total Price is : %.2f" , current_price+1.50 );
    }
    else if(cheese=='N' || cheese=='n')
    printf("Total Price : %d" , &current_price);
    else
    printf("Invalid Input");

    }
