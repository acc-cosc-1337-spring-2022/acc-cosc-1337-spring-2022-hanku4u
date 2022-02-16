#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get option switch")
{
    REQUIRE("Option 1" == get_option(1));
    REQUIRE("Option 2" == get_option(2));
}