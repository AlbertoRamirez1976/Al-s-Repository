/* Title: Teacher Discount Program                        */
/* Author: Alberto E. Ramirez                             */
/* Date: 1/13/2021                                        */
/* Program that calculates and displays teacher discount  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

void discount_function();

int main(void)
{
    discount_function();
    return 0;

}

void discount_function(void)
{
    float purchase_price, price_after_salestax, teacher_discount, discounted_total, total_tax;
    char teacher_status;

    printf("Welcome to the Teacher Discount Program\n");/* Opening Statement */

    printf("\nPlease enter the purchase total: \n");/* Prompt user input for purchase price */
    scanf("%f", &purchase_price);/* Purchase price input assigned to variable purchase price */

    printf("\nIs this customer a teacher?\nY - Yes\nN - No\n");/* Prompt user input for teacher status */
    scanf(" %c", &teacher_status);/* Teacher status input assigned to variable teacher status */

    teacher_discount = purchase_price * .12;/* Teacher discount rate calculated at 12% */

    if (teacher_status == 'Y' || teacher_status == 'y')/* Conditional statement to determine teacher status */
    {
        discounted_total = purchase_price - (purchase_price * .12);/* Discounted total is calculated before sales tax */
        total_tax = discounted_total * 0.05;/* Total tax is calculated */
        price_after_salestax = discounted_total + (discounted_total * 0.05); /* Total with discount and sales tax */
    }
    else if (teacher_status == 'N' || teacher_status == 'n')
    {
        total_tax = purchase_price * 0.05;/* Total tax is calculated */
        price_after_salestax = purchase_price + (purchase_price * 0.05);/* Total without discount and sales tax */
    }

    if (teacher_status == 'Y' || teacher_status == 'y')
    {
        printf("\nMusic teachers receive a 10 percent discount on their sheet music purchases, \n");/* Discount Policy Statement */
        printf("unless the purchase total is $100 or higher.In that case, the discount is 12 percent.\n");/* Discount Policy Statement */
        printf("\nTeacher Receipt: \nTotal Purchases      $%5.2f \nTeacher Discount (12) %5.2f \nDiscounted Total     $%5.2f \nSales Tax            %5.2f \nTotal                $%5.2f \n",
              purchase_price, teacher_discount, discounted_total, total_tax, price_after_salestax);/* Spacing is provided in order to align all outputs */
    }
    else if (teacher_status == 'N' || teacher_status == 'n')
    {
        printf("\nCustomer receipt: \nTotal Purchases  $%5.2f \nSales Tax        %5.2f \nTotal            $%5.2f \n",
              purchase_price, total_tax, price_after_salestax);/* Spacing is provided in order to align all outputs */
    }

    getchar();
    getchar();

    return (0);/* End of function main  */

}
