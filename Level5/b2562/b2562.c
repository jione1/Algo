// 최댓값
# include <stdio.h>
int main(){
    int num[9], i, max = -100, index;
    for(i = 0; i < 9; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 9; i++){
        if(num[i] > max){
            index = i + 1;
            max = num[i];
        }
    }
    printf("%d\n", max);
    printf("%d\n", index);
}