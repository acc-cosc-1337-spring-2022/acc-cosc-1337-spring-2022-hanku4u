#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

//int main()
//{
//	string letter_grade;
//	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
//
//	cout << "Enter letter grade: ";
//	cin >> letter_grade;
//	cout << "Enter credit hours: ";
//	cin >> credit_hours;
//	sum_credit_points += get_grade_points(letter_grade) * credit_hours;
//	sum_credit_hours += credit_hours;
//
//	cout << "Enter letter grade: ";
//	cin >> letter_grade;
//	cout << "Enter credit hours: ";
//	cin >> credit_hours;
//	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
//	sum_credit_hours += credit_hours;
//
//	cout << "Enter letter grade: ";
//	cin >> letter_grade;
//	cout << "Enter credit hours: ";
//	cin >> credit_hours;
//	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
//	sum_credit_hours += credit_hours;
//
//
//	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
//	cout << "GPA: " << gpa;
//
//	return 0;
//}

int main()
{
    int user_select = 0;
    cout << "\tMain Menu \n";
    cout << "1-Letter grade using if\n";
    cout << "2-Letter grade using switch\n";
    cout << "Select method to calculate letter grade\n";

    cin >> user_select;
    int grade = 0;
    std::string result = "";

    if (user_select == 1)
    {
        cout << "Enter a grade from 0 to 100.\n";
        cin >> grade;

        if (grade > 100) {
            cout << "Invalid grade. Enter a number between 0 and 100.\n";
        } else {
            result = get_letter_grade_using_if(grade);
            cout << "Your grade using 'if' is a " << result;
        }
    }
    else if (user_select == 2)
    {
        cout << "Enter a grade from 0 to 100.\n";
        cin >> grade;
        if (grade > 100)
        {
            cout << "Invalid grade. Enter a number between 0 and 100.\n";
        }
        else
        {
            result = get_letter_grade_using_switch(grade);
            cout << "Your grade using 'switch' is a " << result;
        }
    }

    return 0;
}