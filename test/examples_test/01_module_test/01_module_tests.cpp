#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "numbers.h"
#include<string>
#include "vars.h"
#include "input.h"
#include "numbers.h"
#include "chars.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test case echo_variable", "test echoes") {
	REQUIRE(5 == echo_variable(5));
	REQUIRE(4 == echo_variable(4));
	REQUIRE(6 == echo_variable(6));
	REQUIRE(9 == echo_variable(9));
	REQUIRE(234 == echo_variable(234));
}

TEST_CASE("Test get_total function") {
	REQUIRE(10 == get_total(2, 5));
	REQUIRE(55 == get_total(10, 5.5));
}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add_to_double_1 function") {
	REQUIRE(.9 == add_to_double_1(0));
}

/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("Test add_to_double_1b function") {
	REQUIRE(1.9 == add_to_double_1(1));
}

/*test case add_to_double_2 with 0 as parameter*/
TEST_CASE("Test add_to_double_2 function") {
	REQUIRE(1.5 == add_to_double_2(0));
}
/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
//creating a bank of test assertions for the function
TEST_CASE("Test return ASCII function") {
	REQUIRE(97 == get_char_ascii_value('a'));
	REQUIRE(115 == get_char_ascii_value('s'));
	REQUIRE(65 == get_char_ascii_value('A'));
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/
TEST_CASE("Test ASCII values of string") {
	string name = "Joe";
	REQUIRE(74 == name[0]);
	REQUIRE(111 == name[1]);
	REQUIRE(101 == name[2]);
}
