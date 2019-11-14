// 손익분기점
#include <stdio.h>

int main(){
    int a, b, c, result = 0;;
    scanf("%d %d %d", &a, &b, &c);

    if(c - b <= 0) result = -1;
    else{
        result = a / (c-b) + 1;
    }
    printf("%d\n", result);
}