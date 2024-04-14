#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    char str[3];
    int sum = 0;
    scanf ("%s", str);
    for (int i=0; i < 3; ++i) {
        char c = str[i];
        sum += c - '0';
    }
    printf("%d", sum);
    scanf ("%s", str);
    return 0;
}