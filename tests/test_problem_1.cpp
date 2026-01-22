#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "problem_1.h"
#include <vector>

TEST_CASE("Problem 1: Multiples of 3 and 5", "[problem1]") {
    constexpr int num1 = 3;
    constexpr int num2 = 5;

    SECTION("find_multiples_of") {
        SECTION("finds multiples of 3 and 5 below 10") {
            std::vector expected = {3, 5, 6, 9};
            REQUIRE(find_multiples_of(num1, num2, 10) == expected);
        }

        SECTION("finds multiples of 3 and 5 below 11") {
            std::vector expected = {3, 5, 6, 9, 10};
            REQUIRE(find_multiples_of(num1, num2, 11) == expected);
        }
    }


    SECTION("calc_sum_multiples_of") {
        SECTION("calculates correct sum of multiples of 3 and 5 below 10") {
            REQUIRE(calc_sum_multiples_of(num1, num2, 10) == 23);
        }

        SECTION("calculates correct sum of multiples of 3 and 5 below 11") {
            REQUIRE(calc_sum_multiples_of(num1, num2, 11) == 33);
        }

        SECTION("calculates correct sum of multiples of 3 and 5 below 1000") {
            REQUIRE(calc_sum_multiples_of(num1, num2, 1000) == 233168);
        }
    }
}
