// Дано трехзначное число, напечатать максимальную цифру
// Данные на входе: Целое положительное трехзначное число
// Данные на выходе: Одна цифра

#include <stdio.h>

int main() {
    char str[3];
    fgets(str, 4, stdin); 
    int max = str[0] - '0';
    max = (int)(str[1] - '0') > max ? (int)(str[1] - '0') : max;
    max = (int)(str[2] - '0') > max ? (int)(str[2] - '0') : max;
    printf("%d", max);
    return 0;
}