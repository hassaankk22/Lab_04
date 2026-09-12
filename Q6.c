/*To drive traffic during the slow lunch-hour dip, the shop offers a special 10% discount between
11:00 AM and 2:00 PM (11 to 14 in 24-hour time). Write a program that reads the current total
bill and the current time of day as an integer hour (0-23). Using logical comparisons, check if the
hour falls within the promo window [11, 14] inclusive. If it is, deduct 10% from the total and
print the discounted total. If not, print the original bill with no discounts.*/


#include<stdio.h>
int main()
{
    float bill;
    int time;
    printf("Enter your total bill: \n");
    scanf("%f" , &bill);
    printf("Enter Current Time (0-23)\n");
    scanf("%d" , &time);

    if(time>=11 && time<=14){
        printf("Congratulations! You got 10%% discount!\n");
        printf("Now your Total Bill is: \n$%.2f", bill*0.90);
    }
    else
    printf("Total Bill: $%.2f", bill);
}