/*The program asks for the bill total and student ID status. If the customer has a student ID, it
subtracts $2.00 from the total. After this, it uses a completely separate if statement to check if
the bill is negative (regardless of whether a discount was applied) and adjusts it to $0.00 if
needed. This makes the program more robust as it protects ALL customers from negative bills,
not just students.*/

#include<stdio.h>
int main()
{
    char student_status;
    double bill;
    printf("Enter your total bill: \n");
    scanf("%lf", &bill);
    printf("Are You a STudent? (Y/N) \n");
    scanf(" %c" , &student_status);

    if(student_status=='Y' || student_status=='y'){
        bill = bill - 2.00;
    }
    else if(student_status=='N' || student_status=='n'){
    // no discount
    }
    else
    printf("Invalid input\n");

    if(bill<0){
    bill = 0.00;
    printf("====Bill Adjusted to Avoid Nagative Value====\n");
    }
    else
    printf("Total Bill: %.2f" , bill);


}