//write include statements
#include "expressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    double meal_amount;
    cout<<"Enter the price of the meal: \n";
    cin>>meal_amount; //capture a meal_amount from keyboard

    double tip_rate;
    cout<<"Enter percentage you would like to tip with (i.e. 10, 15, 20): \n";
    cin>>tip_rate; //capture a tip_rate from keyboard

    tip_rate = tip_rate / 100;

    double tax_amount = get_sales_tax_amount(meal_amount);

    double tip_amount = get_tip_amount(meal_amount, tip_rate);

    double total = meal_amount + tax_amount + tip_amount;

    cout<<"Meal amount: \t"<<meal_amount<<"\n";
    cout<<"Sales Tax: \t"<<tax_amount<<"\n";
    cout<<"Tip: \t"<<tip_amount<<"\n";
    cout<<"Grand Total: \t"<<total<<"\n";

    return 0;
}
