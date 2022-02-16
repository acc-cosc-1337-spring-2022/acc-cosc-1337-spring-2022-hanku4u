#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"
#include "../src/homework/02_expressions/expressions.h"

//TEST_CASE("Verify Test Configuration", "verification") {
//	REQUIRE(true == true);
//}
//
//TEST_CASE("Verify sum_numbers function")
//{
//	REQUIRE(add_numbers(5, 5) == 10);
//	REQUIRE(add_numbers(10, 10) == 20);
//}

TEST_CASE("Test get_sales_tax_amount")
{
    REQUIRE(0.675 == get_sales_tax_amount(10));
    REQUIRE(1.35 == get_sales_tax_amount(20));
}

TEST_CASE("Test get_tip_amount")
{
    REQUIRE(3 == get_tip_amount(20, 0.15));
    REQUIRE(4 == get_tip_amount(20, .2));
}