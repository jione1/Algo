// гу
#include <stdio.h>
int main(){
    int n, result = 0, i;
    
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        result += i;
    }
    printf("%d\n", result);
}