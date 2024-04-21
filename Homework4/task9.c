// Ввести три числа и определить, верно ли, что они вводились в 
// порядке возрастания.
// Данные на входе: Три целых числа
// Данные на выходе: Одно слово YES или NO

#include <stdio.h>

int main(){
    int first_number, second_number, third_number;
    scanf ("%d", &first_number);
    scanf ("%d", &second_number);
    scanf ("%d", &third_number);

    if(first_number > second_number || second_number > third_number) printf("NO");
    else printf("YES");
    return 0;
}