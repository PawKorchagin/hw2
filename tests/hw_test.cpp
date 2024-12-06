#include "gtest/gtest.h"
#include "lib/lib.h"

TEST(_, Add) {
    ASSERT_EQ(add(1, 10), 11);
}

#include <gtest/gtest.h>

TEST(_, Subtract) {
    ASSERT_EQ(subtract(10, 5), 5);
    ASSERT_EQ(subtract(0, 5), -5);
    ASSERT_EQ(subtract(7, 7), 0);
}

TEST(_, DivideByTwo) {
    ASSERT_EQ(divide_by_two(10), 5);
    ASSERT_EQ(divide_by_two(9), 4);  // Проверяем целочисленное деление
    ASSERT_EQ(divide_by_two(0), 0);
}

TEST(_, GetSquare) {
    ASSERT_EQ(get_square(4), 16);
    ASSERT_EQ(get_square(-3), 9);
    ASSERT_EQ(get_square(0), 0);
}

TEST(_, AddThreeNumbers) {
    ASSERT_EQ(add_three_numbers(1, 2, 3), 6);
    ASSERT_EQ(add_three_numbers(0, 0, 0), 0);
    ASSERT_EQ(add_three_numbers(-1, -2, -3), -6);
}

TEST(_, GetRemainder) {
    ASSERT_EQ(get_remainder(10, 3), 1);
    ASSERT_EQ(get_remainder(10, 2), 0);
    ASSERT_EQ(get_remainder(9, 5), 4);
}

TEST(_, DoubleNumber) {
    ASSERT_EQ(double_number(5), 10);
    ASSERT_EQ(double_number(-3), -6);
    ASSERT_EQ(double_number(0), 0);
}

TEST(_, HalveNumber) {
    ASSERT_EQ(halve_number(10), 5);
    ASSERT_EQ(halve_number(9), 4);  // Проверяем целочисленное деление
    ASSERT_EQ(halve_number(0), 0);
}

TEST(_, Negate) {
    ASSERT_EQ(negate(10), -10);
    ASSERT_EQ(negate(-3), 3);
    ASSERT_EQ(negate(0), 0);
}

TEST(_, SumAndDouble) {
    ASSERT_EQ(sum_and_double(3, 4), 14);
    ASSERT_EQ(sum_and_double(0, 0), 0);
    ASSERT_EQ(sum_and_double(-2, -3), -10);
}

TEST(_, AddFloats) {
    ASSERT_FLOAT_EQ(add_floats(3.5, 2.5), 6.0);
    ASSERT_FLOAT_EQ(add_floats(0.0, 0.0), 0.0);
    ASSERT_FLOAT_EQ(add_floats(-1.1, 1.1), 0.0);
}

TEST(_, IsEven) {
    ASSERT_TRUE(is_even(4));
    ASSERT_FALSE(is_even(5));
    ASSERT_TRUE(is_even(0));
}

TEST(_, IsGreater) {
    ASSERT_TRUE(is_greater(3.5, 2.5));
    ASSERT_FALSE(is_greater(2.5, 3.5));
    ASSERT_FALSE(is_greater(2.5, 2.5));
}

TEST(_, AlwaysTrue) {
    ASSERT_TRUE(always_true());
    ASSERT_TRUE(always_true());  // Функция всегда возвращает true, можно вызвать несколько раз
}

TEST(_, VoidGlobalA) {
    global_a = 14;
    global_b = 1;
    void_global_a();
    ASSERT_EQ(global_a, 15);
}

TEST(_, VoidGlobalC) {
    global_c = 3;
    void_global_c();
    ASSERT_EQ(global_c, 6);
}

TEST(_, VoidGlobalD) {
    global_a = 5;
    global_b = 10;
    void_global_d();
    ASSERT_EQ(global_d, 15);
}

TEST(_, VoidGlobalReset) {
    global_a = 5;
    global_b = 10;
    global_c = 20;
    global_d = 25;
    void_global_reset();
    ASSERT_EQ(global_a, 0);
    ASSERT_EQ(global_b, 0);
    ASSERT_EQ(global_c, 0);
    ASSERT_EQ(global_d, 0);
}
