// 설탕 배달
#include <stdio.h>

int main() {
    int sugar, bag5, bag3, ans;
    scanf("%d", &sugar);

    bag5 = sugar / 5;
    bag3 = 0;
    sugar = sugar % 5;

    while(bag5 >= 0){
        if(sugar % 3 == 0){
            bag3 = sugar / 3;
            sugar = sugar % 3;
            break;
        }
        bag5--;
        sugar+=5;
    }
    if(sugar == 0)
        ans = bag3 + bag5;
    else
        ans = -1;
    printf("%d\n", ans);
}