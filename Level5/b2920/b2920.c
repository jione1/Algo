// 음계
# include <stdio.h>
# include <string.h>

int main(){
    int a[8];
    int i;
    int as = 0, des = 0;

    for(int i = 0; i < 8; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 8; i++){
        if(a[i] == (i+1)){
            as++;
        }else if(a[i] == (8-i)){
            des++;
        }
    }

    if(as == 8)
        printf("ascending\n");
    else if(des == 8)
        printf("descending\n");
    else
        printf("mixed\n");
}