// A + B -8
#include <stdio.h>
int main() {
    int i, num, a, b;
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
}