// 평균은 넘겠지 
#include <stdio.h>
int main(){
    int test;
    int num;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        scanf("%d", &num);
        int score[1000];
        int sum = 0;
        double avg = 0.0;
        int high = 0;

        for(int j = 0; j < num; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (double)sum / num;

        for(int j = 0; j < num; j++){
            if(score[j] > avg){
                high++;
            }
        }
        printf("%.3lf%%\n", (double)high*100/num);
    }

}