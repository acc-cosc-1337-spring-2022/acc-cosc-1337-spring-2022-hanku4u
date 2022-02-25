#include "dna.h"

//Factorial function accepts one integer as argument and returns the sum.
int factorial(int num)
{
    int sum = num;

    while(num > 1)
    {
        int i = num - 1;

        sum = sum * i;
        num -= 1;
    }
    return sum;
}


//Greatest common divisor accepts two integers as arguments and finds the largest number
//that both are divisible by.
int greatest_divisor(int num1, int num2)
{
    if (num1 > num2)
    {
        int remainder;
        while(num1 % num2 > 0)
        {
            remainder = num1 % num2;
            num1 = num2;
            num2 = remainder;
        }
        return num2;
    }

    else
    {
        int remainder;
        while(num2 % num1 > 0)
        {
            remainder = num2 % num1;
            num2 = num1;
            num1 = remainder;
        }
        return num1;
    }
}


//call factorial function
void call_factorial()
{
    int func_arg = 0;   //argument to be passed to function
    cout << "Enter a positive, whole integer. Decimals will be ignored.\nNumber:";
    cin >> func_arg;

//  force valid argument
    while (func_arg <= 0 || cin.fail())
    {
        cout << "Invalid Number. Enter a whole integer greater than zero:";
        cin.clear();
        cin.ignore();
        cin >> func_arg;
    }
    int result = factorial(func_arg);
    cout<<"The factorial of "<< func_arg << " is: "<< result <<"\n";

}


//call GCD function
void call_GCD()
{
    int func_arg1;  //first argument to be passed to GCD function
    int func_arg2;  //second argument to be passed to GCD function

    cout << "Enter two positive integers to find the Greatest Common Divisor. Decimals will be ignored"
            "\nEnter first number:";
    cin >> func_arg1;

//  force valid argument for first number
    while (func_arg1 <= 0 || cin.fail())
    {
        cout << "Invalid number. Enter a whole positive integer.\n";
        cout << "Enter first number:";
        cin.clear();
        cin.ignore();
        cin >> func_arg1;
    }

    cout << "Enter second number:";
    cin >> func_arg2;

//  force valid argument for second number.
    while (func_arg2 <= 0 || cin.fail())
    {
        cout << "Invalid number. Enter a whole positive integer.\n";
        cout << "Enter second number:";
        cin.clear();
        cin.ignore();
        cin >> func_arg2;
    }

//  display result of GCD function.
    int result = greatest_divisor(func_arg1, func_arg2);
    cout << "The Greatest Common Divisor of " << func_arg1 << " and " << func_arg2 << " is " << result
         << ".\n";
}


//call exit function
void call_exit()
{
    string menu_continue;
    cout << "Are you sure you want to quit? Enter Y or N:";
    cin >> menu_continue;

//  force valid Y or N choice
    while (menu_continue != "y" && menu_continue != "Y" && menu_continue != "N" && menu_continue != "n")
    {
        cout << "Invalid input. Enter Y or N:";
        cin >> menu_continue;
    }

//  display quit message if user selects Y to quit
    if (menu_continue == "Y" || menu_continue == "y")
    {
        cout << "Application closed.";
    }

    else if (menu_continue == "n" || menu_continue == "N")
    {
        run_menu();
    }
}


//handle menu option user has selected
void handle_menu_option(int selection)
{
    if (selection == 1)
    {
        call_factorial();
    }
    else if (selection == 2)
    {
        call_GCD();
    }
}


//display menu
void display_menu()
{
    cout << "\nMain Menu \n";
    cout << "1-Factorial\n";
    cout << "2-Greatest Common Divisor\n";
    cout << "3-Exit\n";
}


//run menu
void run_menu()
{
    int user_select;
    do
    {
        display_menu();
        cout << "Select an option.\n";
        cin >> user_select;     //users selection from the menu

//      force valid selection
        if ((user_select != 1 && user_select != 2 && user_select != 3) || cin.fail())
        {
            cout<<"Invalid choice. Select 1, 2 or 3\n";
            cin.clear();
            cin.ignore();
            cin >> user_select;
        }
        handle_menu_option(user_select);
    }
    while (user_select != 3);
    {
        call_exit();
    }
}




