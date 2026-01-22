#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "../include/problem_1.h"
#include <vector>

TEST_CASE("problem_001", "find_multiples_of") {
    std::vector expected = {3, 5, 6, 9};
    REQUIRE(find_multiples_of(3, 5, 10) == expected);
    expected = {3, 5, 6, 9, 10};
    REQUIRE(find_multiples_of(3, 5, 11) == expected);

}

TEST_CASE("problem_1", "calc_sum_multiples_of") {
    REQUIRE(calc_sum_multiples_of(3, 5, 10) == 23);
    REQUIRE(calc_sum_multiples_of(3, 5, 11) == 33);
    REQUIRE(calc_sum_multiples_of(3, 5, 1000) == 233168);
}