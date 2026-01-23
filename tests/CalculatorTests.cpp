#include <gtest/gtest.h>
#include "Calculator/Calculator.hpp"

TEST(CalculatorTest, AdditionWorks) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, SubtractionWorks) {
    Calculator calc;
    EXPECT_EQ(calc.sub(5, 3), 2);
}

