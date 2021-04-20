/****************************************************/
/* Lab 4 Question 4                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 4/20/21                                    */
/* Function to produce outputs                      */
/****************************************************/

#include<stdio.h>

//Function prototype
float get_sales();//Function prototype will call function get_sales and it will capture monthly sales amount from user
float get_advanced_pay();//Function prototype will call function get_advanced_pay and it will capture advanced pay amount from user
float determine_comm_rate(float sales);//Function prototype will call function determine_comm_rate and it will calculate rate based on the sales amount entered by user


int main()
{
    //Local variable declaration
    float sales, pay, advanced_pay, comm_rate;

    //Function call to get the amount of sales from user
    sales = get_sales();

    //Function call to get the amount of advanced pay from user
    advanced_pay = get_advanced_pay();

    //Function call to determine commission rate
    comm_rate = determine_comm_rate(sales);

    //Function call to calculate pay
    pay = (sales * comm_rate) - advanced_pay;

    //Displays the amount of pay
    printf("The pay is $%.2f \n", pay);

    //If statement will determine if pay is negative
    if(pay < 0)
    {
        printf("The salesperson must reimburse the company. \n");

    }

    return 0;
}

float get_sales()//Function get_sales will capture monthly sales amount from user
{
    float sales;
    printf("Enter the monthly sales: ");
    scanf("%f", &sales);
    return(sales);

}
float get_advanced_pay()//Function get_advanced_pay will capture advanced pay amount from user
{
    float advanced_pay;
    printf("Enter the amount of advanced pay,or enter 0 if no advanced pay was given. \n");
    printf("Advanced pay: ");
    scanf("%f", &advanced_pay);
    return(advanced_pay);

}
float determine_comm_rate(float sales)//Function determine_comm_rate will calculate rate based on the sales amount entered by user
{
    float rate;
    if(sales < 10000.00)
        {
            rate = .10;
	    return rate;
        }
        else if((sales > 10000.00) && (sales <= 14999.99))
            {
                rate = .12;
                return rate;
            }
            else if((sales >= 15000.00) && (sales <= 17999.99))
                {
                    rate = .14;
                    return rate;
                }
                else if((sales >= 18000.00) && (sales <= 21999.99))
                    {
                        rate = .16;
                        return rate;
                    }
                    else if(sales > 21999.99)
                        {
                            rate = .18;
                            return rate;
                        }

}


//Output
//Test Run 1
//Enter the monthly sales: 14550.00
//Enter the amount of advanced pay,or enter 0 if no advanced pay was given.
//Advanced pay: 1000.00
//The pay is $746.00
//
//Test Run 2
//Enter the monthly sales: 9500
//Enter the amount of advanced pay,or enter 0 if no advanced pay was given.
//Advanced pay: 0
//The pay is $950.00
//
//Test Run 3
//Enter the monthly sales: 12000.00
//Enter the amount of advanced pay,or enter 0 if no advanced pay was given.
//Advanced pay: 2000.00
//The pay is $-560.00
//The salesperson must reimburse the company.




