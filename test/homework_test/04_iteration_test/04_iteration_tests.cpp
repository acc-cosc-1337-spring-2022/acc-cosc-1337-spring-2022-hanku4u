#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function") {
    REQUIRE(6 == factorial(3));
    REQUIRE(120 == factorial(5));
    REQUIRE(720 == factorial(6));
    REQUIRE(5040 == factorial(7));
    REQUIRE(40320 == factorial(8));
    REQUIRE(362880 == factorial(9));
    REQUIRE(3628800 == factorial(10));
    REQUIRE(6227020800 == factorial(13));
}

TEST_CASE("Test greatest_divisor function") {
    REQUIRE(5 == greatest_divisor(5, 15));
    REQUIRE(7 == greatest_divisor(21, 28));
    REQUIRE(25 == greatest_divisor(25, 100));
    REQUIRE(28 == greatest_divisor(196, 84));
}