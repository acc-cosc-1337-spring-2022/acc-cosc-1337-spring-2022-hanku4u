//write include statements 
#include "sequence.h"


/*
Create a function with a const reference string parameter, write code to calculate
 the GC-content, and return it.
*/

double get_gc_content(const string &dna)
{
    double gc_count = 0;
    double string_length = dna.length();

    for (int i = 0; i <= dna.length(); i += 1)
    {

        auto character = dna[i];
        if (character == 'G' || character == 'C')
        {
            gc_count = gc_count + 1;
        }
        else
        {
            continue;
        }
    }

    double result = gc_count / string_length;
    return result;
}


/*
Function that will reverse the given string.
*/

string reverse_string(string dna_string)
{
    string reversed_string;

    for (int i = dna_string.length()-1; i >= 0; i--)
    {
        char character = dna_string[i];
        reversed_string += character;
    }

    return reversed_string;
}


//Function that will reverse the given DNA string and then find its complement

string get_dna_complement(string dna_string)
{
    string reverseString = reverse_string(dna_string);
    string result_string;

    for (int i = 0; i <= dna_string.length(); i += 1)
    {
        char character = reverseString[i];
        if (character == 'G')
        {
            result_string += 'C';
        }
        else if (character == 'C')
        {
            result_string += 'G';
        }
        else if (character == 'T')
        {
            result_string += 'A';
        }
        else if (character == 'A')
        {
            result_string += 'T';
        }
    }
    return result_string;
}


//display menu
void display_menu()
{
    cout << "\nMain Menu \n";
    cout << "1-Get GC content\n";
    cout << "2-Get DNA complement\n";
    cout << "3-Exit\n";
}

//handle menu option user has selected
void handle_menu_option(int selection)
{
    string *pointer;
    pointer = (string*)(&dna);

    if (selection == 1)
    {
        cout << "Enter a DNA string:";
        cin >> *pointer;
        cout << "The GC content is: " << get_gc_content(dna) << "\n";
    }
    else if (selection == 2)
    {
        cout << "Enter a DNA string:";
        cin >> *pointer;
        cout << "The complement sequence is: " << get_dna_complement(dna) << "\n";
    }
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