// Ввести два числа. Если первое число больше второго, то программа 
// печатает слово Above. Если первое число меньше второго, то 
// программа печатает слово Less. А если числа равны, программа 
// напечатает сообщение Equal.
// Данные на входе: Два целых числа
// Данные на выходе: Одно единственное слово: Above, Less, Equal

#include <stdio.h>

int main(){
    int first_number, second_number;

    scanf ("%d", &first_number);
    scanf ("%d", &second_number);

    if(first_number == second_number) printf("Equal");
    else if(first_number > second_number) printf("Above");
    else printf("Less");
    
    return 0;
}