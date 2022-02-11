//write include statements
#include "variables.h"
#include<iostream>

//write namespace using statement for cout

using std::cout;
using std::cin;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num; //capture a number from keybaard

	int result = multiply_numbers(num);
	cout<<num<<" times five is: "<<result<<"\n";
	
	int num1 = 4;
	int result2 = multiply_numbers(num1);
	cout<<"Four times five is: "<<result2<<"\n";
	
	return 0;


}
