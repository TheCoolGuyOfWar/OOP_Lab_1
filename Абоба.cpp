#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "rus");
    const int number = 10;
    int inputArray[number];
    int cout = 0; 
    int input=0;
    double sumCoef = 0;
    printf("Введите 10 целых чисел.\nДля завершения введите \'0\' \n");
    while (cout < 10) {
        printf("Введите число \n");
        if (scanf_s("%d", &input) != 1) {
            printf("Пожалуйста, введите целое число.\n");
            while (getchar() != '\n');
            continue;
        }
        if (input == 0) {
            break;
        }
        inputArray[cout] = input;
        cout++;
    }
    if (cout == 10) {
        printf("Максимальная длина последовательности введена.\n");
    }
    for (int i = 0; i < cout; i++) {
        double coef =(i + 1) / 10.0;
        sumCoef += inputArray[i] * coef;
    }
    printf("Сумма элементов, умноженных на весовые коэффициенты: %.2f\n", sumCoef);
    system("pause");
    return 0;
    }