// X보다 작은 수
#include <stdio.h>
int main(){
    int x, n, i, t;
    scanf("%d %d", &x, &n);

    for (i = 0; i < x; i++){
        scanf("%d", &t);
        if(t < n){
            printf("%d ", t);
        }
    }
}