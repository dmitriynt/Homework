#include <stdio.h>
#include <math.h>

int main(){
    char str[3];
    int res = 1;
    scanf ("%s", str);
    for (int i=0; i < 3; ++i) {
        char c = str[i];
        res *= c - '0';
    }
    printf("%d", res);
    return 0;
}