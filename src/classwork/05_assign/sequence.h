//write include statements for string and vector
#include <iostream>
#include <string>

//using statements
using std::cout; using std::cin; using std::string;


/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/

const string dna = "AGCTATAG";

double get_gc_content(const string& dna);


/*
Prototype reverse string of DNA.
*/

string reverse_string(string dna_string);

/*
Prototype iterate through reversed string and then change each letter to its complement letter.
*/

string get_dna_complement(string dna_string);

//display menu
void display_menu();


//handle menu option user has selected
void handle_menu_option(int selection);


//call exit function
void call_exit();


//run menu
void run_menu();

