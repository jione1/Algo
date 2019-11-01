// 숫자의 개수
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(){
    int a, b, c, i;
    int result[10] = {0};
    int mul;
    char mul_c[500];

    scanf("%d %d %d", &a, &b, &c);

    mul = a * b * c;
    sprintf(mul_c, "%d", mul);

    for (i = 0; mul_c[i] != '\0'; i++){
        result[(int)mul_c[i] - '0']++;
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", result[i]);
    }
}