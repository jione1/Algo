// 달팽이는 올라가고 싶다
#include <stdio.h>

int main() {
    int a, b, v;
    int meter = 0, day = 0;

    scanf("%d %d %d", &a, &b, &v);

    day = (v - a) / (a - b);

    if(day * (a - b) >= (v - a))
        day += 1;
    else
        day += 2;

    printf("%d", day);
}