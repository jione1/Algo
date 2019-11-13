// 평균
# include <stdio.h>
int main(){
    int num;
    float arr[1000];
    int i, max = 0; 
    float total = 0;

    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%f", &arr[i]);
        if(max < arr[i])
            max = arr[i];
    }

    for(i = 0; i < num; i++){
        arr[i] = arr[i]/max*100;
        total += arr[i];
    }
    printf("%f\n", total / num);
}