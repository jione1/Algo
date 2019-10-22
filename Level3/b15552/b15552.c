// 빠른 A + B 
// b10950 A + B -3 와 동일 코드
#include <stdio.h>
int main() {
    int i, t, a, b;
    scanf("%d\n", &t);

    for(i = 0; i < t; i++){
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a + b);
    }
}