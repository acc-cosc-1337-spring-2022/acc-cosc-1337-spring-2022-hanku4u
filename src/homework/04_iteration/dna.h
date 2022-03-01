#include<string>
#include<iostream>

//using statements
using std::cout; using std::cin; using std::string; using std::endl;

//Factorial function accepts one integer as argument and returns the sum.
int factorial(int num);

//Greatest common divisor accepts two integers as arguments and finds the largest number
//that both are divisible by.
int greatest_divisor(int num1, int num2);

//Displays menu
void display_menu();

//Runs menu
void run_menu();

//Handle the users menu selection
void handle_menu_option(int selection);

//Calls factorial for menu
void call_factorial();

//Calls GCD for menu
void call_GCD();

//Calls exit for menu
void call_exit();