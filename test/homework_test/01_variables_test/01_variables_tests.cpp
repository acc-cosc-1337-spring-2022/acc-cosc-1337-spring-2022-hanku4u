#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

// TEST_CASE("Verify Test Configuration", "verification") {
// 	REQUIRE(true == true);
// }

// TEST_CASE("Verify sum_numbers function") 
// {
// 	REQUIRE(add_numbers(5, 5) == 10);
// 	REQUIRE(add_numbers(10, 10) == 20);
// }

TEST_CASE("Verify multiply_numbers returns a product")
{
	REQUIRE(10 == multiply_numbers(2));
	REQUIRE(15 == multiply_numbers(3));
	REQUIRE(20 == multiply_numbers(4));
}

