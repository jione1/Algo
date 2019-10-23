// 더하기 사이클
# include <stdio.h>
int main(){
    int a, result = 0, cycle = 0, ten, one, temp;
    scanf ("%d", &a);
    
    temp = a;
    while(1){
        if(temp < 10){
            result = temp * 10 + temp;
        }else{
            ten = temp / 10;
            one = temp % 10;
            result = ten + one;
        }
        temp = (temp % 10) * 10 + (result % 10);
        cycle++;
        if (temp == a){
            break;
        }
    }
    printf("%d", cycle);
}