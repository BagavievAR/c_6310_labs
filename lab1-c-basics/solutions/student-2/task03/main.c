/*

Лабораторная работа №1
Студент: Багавиев Артем (номер: 2)
Вариант: 3
Задание: 3 (Сортировка массива по возрастанию) */

#include <stdio.h>

#define MAX_SIZE 100

void print_array(int arr[], int arr_size);
void bubble_sort(int arr[], int arr_size);

int main(void) {
    int arr_size = 0;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    if (scanf("%d", &arr_size) != 1 || arr_size < 0 || arr_size > MAX_SIZE) {
        printf("Invalid array size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    if (arr_size == 0) {
        printf("Array is empty. Nothing to sort.\n");
        return 0;
    }

    int arr[arr_size];
    printf("Enter %d integers:\n", arr_size);
    for (int i = 0; i < arr_size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    printf("Array before sort: ");
    print_array(arr, arr_size);

    bubble_sort(arr, arr_size);

    printf("Array after sort: ");
    print_array(arr, arr_size);

    return 0;
}

void print_array(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        int swapped = 0;
        for (int j = 0; j < arr_size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}