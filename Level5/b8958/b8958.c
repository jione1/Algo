// OX퀴즈
#include <stdio.h>
#include <string.h>
int main(){
    int num;
    char OX[80];
    int score = 1, sum = 0;

    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        sum = 0; 
        score = 1;
        scanf("%s", &OX);
        for(int j = 0; j < strlen(OX); j++){
            if(OX[j] == 'O'){
                sum += score;
                score++;
            }else{
                score = 1;
            }
        }
        printf("%d\n", sum);
    }
}