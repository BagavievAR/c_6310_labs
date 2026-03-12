/*

Лабораторная работа №1
Студент: Багавиев Артем (номер: 2)
Вариант: 3
Задание: 18 (Сумма первых n натуральных чисел) */

#include <stdio.h>

int main(void) {
    int n = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    long long sum = (long long)n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %lld\n", n, sum);

    return 0;
}