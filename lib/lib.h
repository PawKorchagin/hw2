#pragma once

/*
    Напиши здесь функцию с названием add, которая принимает как аргументы два целых числа a, b типа int.
    Результат функции: число типа int, сумму двух чисел a и b.
*/

int add(int a, int b) {
    return a + b;
}

/*
    Напиши здесь функцию subtract, которая принимает как аргументы два целых числа a, b типа int.
    Результат функции: число типа int, разность чисел a и b.
*/

int subtract(int a, int b) {
    return a - b;
}

/*
    Напиши здесь функцию divide_by_two, которая принимает одно целое число n типа int.
    Результат функции: число типа int, результат деления числа n на 2.
*/

int divide_by_two(int n) {
    return n / 2;
}

/*
    Напиши здесь функцию get_square, которая принимает одно целое число n типа int.
    Результат функции: число типа int, квадрат числа n.
*/

int get_square(int n) {
    return n * n;
}

/*
    Напиши здесь функцию add_three_numbers, которая принимает три целых числа a, b, c типа int.
    Результат функции: число типа int, сумма чисел a, b и c.
*/

int add_three_numbers(int a, int b, int c) {
    return a + b + c;
}

/*
    Напиши здесь функцию get_remainder, которая принимает два целых числа a, b типа int.
    Результат функции: число типа int, остаток от деления a на b.
    Примечание: считай, что b не равен 0.
*/

int get_remainder(int a, int b) {
    return a % b;
}

/*
    Напиши здесь функцию double_number, которая принимает одно целое число n типа int.
    Результат функции: число типа int, удвоенное значение n.
*/

int double_number(int n) {
    return n * 2;
}

/*
    Напиши здесь функцию halve_number, которая принимает одно целое число n типа int.
    Результат функции: число типа int, результат деления n на 2.
*/

int halve_number(int n) {
    return n / 2;
}

/*
    Напиши здесь функцию negate, которая принимает одно целое число n типа int.
    Результат функции: число типа int, противоположное значение n.
*/

int negate(int n) {
    return -n;
}

/*
    Напиши здесь функцию sum_and_double, которая принимает два целых числа a, b типа int.
    Результат функции: число типа int, удвоенная сумма a и b.
*/

int sum_and_double(int a, int b) {
    return (a + b) * 2;
}

/*
    Напиши здесь функцию add_floats, которая принимает два числа типа float.
    Результат функции: число типа float, сумма этих чисел.
*/

float add_floats(float a, float b) {
    return a + b;
}

/*
    Напиши здесь функцию is_even, которая принимает одно целое число n типа int.
    Результат функции: значение типа bool, true если число четное, иначе false.
*/

bool is_even(int n) {
    return n % 2 == 0;
}

/*
    Напиши здесь функцию is_greater, которая принимает два числа a и b типа float.
    Результат функции: значение типа bool, true если a больше b, иначе false.
*/

bool is_greater(float a, float b) {
    return a > b;
}


/*
    Напиши здесь функцию always_true, которая не принимает аргументов.
    Результат функции: значение типа bool, всегда возвращает true.
*/

bool always_true() {
    return true;
}

/*
    Напиши здесь функцию void_global_a, которая ничего не принимает и ничего не возвращает.
    Функция должна прибавить к глобальной переменной global_a значение глобальной переменной global_b.
*/

int global_a = 0, global_b = 1;

void void_global_a() {
    global_a += global_b;
}

/*
    Напиши здесь функцию void_global_c, которая ничего не принимает и ничего не возвращает.
    Функция должна умножить глобальную переменную global_c на 2.
*/

int global_c = 1;

void void_global_c() {
    global_c *= 2;
}

/*
    Напиши здесь функцию void_global_d, которая ничего не принимает и ничего не возвращает.
    Функция должна установить глобальную переменную global_d равной сумме global_a и global_b.
*/

int global_d = 0;

void void_global_d() {
    global_d = global_a + global_b;
}

/*
    Напиши здесь функцию void_global_reset, которая ничего не принимает и ничего не возвращает.
    Функция должна установить глобальные переменные global_a, global_b, global_c и global_d равными 0.
*/

void void_global_reset() {
    global_a = 0;
    global_b = 0;
    global_c = 0;
    global_d = 0;
}
