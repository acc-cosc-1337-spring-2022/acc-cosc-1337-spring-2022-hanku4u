#include "decisions.h"
//write include statement for decisions header

//Get letter grade using numerical grade (if statement)
std::string get_letter_grade_using_if(int grade)
{
    if (grade <= 100 && grade >= 95)
    {
        return "A";
    }
    else if(grade <= 94 && grade >= 85)
    {
        return "B";
    }
    else if(grade <= 84 && grade >= 75)
    {
        return "C";
    }
    else if(grade <= 74 && grade >= 65)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

//Get letter grade using numerical grade (switch statement)
std::string get_letter_grade_using_switch(int grade)
{
    switch (grade) {
        case 95 ... 100:
            return "A";
            break;
        case 85 ... 94:
            return "B";
            break;
        case 75 ... 84:
            return "C";
            break;
        case 65 ... 74:
            return "D";
            break;
        case 0 ... 64:
            return "F";
            break;
    }
}

