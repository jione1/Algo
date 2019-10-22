// °ö¼À
#include <stdio.h>
int main(){
    int a, b;
    int r3, r4, r5, r6;

    scanf("%d\n", &a);
    scanf("%d\n", &b);  

    r5 = b / 100;
    r4 = (b % 100) / 10;
    r3 = b % 10;

    r3 = a * r3;
    r4 = a * r4;
    r5 = a * r5;

    r6 = r3 + (r4 * 10) + (r5 * 100);

    printf("%d\n", r3);
    printf("%d\n", r4);
    printf("%d\n", r5);
    printf("%d\n", r6);
}