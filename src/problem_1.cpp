#include "../include/problem_1.h"
#include <vector>

bool is_divisible_by(const int num1, const int num2) {
    return num1 % num2 == 0;
}

std::vector<int> find_multiples_of(const int num1, const int num2, const int limit) {
    std::vector<int> result;
    for (int i = num1; i < limit; i++) {
        if (is_divisible_by(i, num1) || is_divisible_by(i, num2)) {
            result.push_back(i);
        }
    }
    return result;
}

int calc_sum_multiples_of(const int num1, const int num2, const int limit) {
    int sum = 0;
    for (int i = num1; i < limit; i++) {
        if (is_divisible_by(i, num1) || is_divisible_by(i, num2)) {
            sum += i;
        }
    }
    return sum;
}