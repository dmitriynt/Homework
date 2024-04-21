// Ввести два числа. Если первое число больше второго, то программа 
// печатает слово Above. Если первое число меньше второго, то 
// программа печатает слово Less. А если числа равны, программа 
// напечатает сообщение Equal.
// Данные на входе: Два целых числа
// Данные на выходе: Одно единственное слово: Above, Less, Equal

#include <stdio.h>

int main(){
    int number_one, number_two;

    scanf ("%d", &number_one);
    scanf ("%d", &number_two);

    if(number_one == number_two) printf("Equal");
    else if(number_one > number_two) printf("Above");
    else printf("Less");
    
    return 0;
}