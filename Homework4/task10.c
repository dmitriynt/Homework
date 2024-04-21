// Ввести номер месяца и вывести название времени года.
// Данные на входе: Целое число от 1 до 12 - номер месяца.
// Данные на выходе: Время года на английском: winter, spring, summer, 
// autumn

#include <stdio.h>

int main(){
    int month_number;
    scanf ("%d", &month_number);

    if(month_number < 3 || month_number > 11) printf("winter");
    else if(month_number < 6 ) printf("spring");
    else if(month_number < 9 ) printf("summer");
    else printf("autumn");
    
    return 0;
}