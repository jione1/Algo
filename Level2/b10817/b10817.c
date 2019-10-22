// ¼¼ ¼ö
#include <stdio.h>
#include <stdlib.h>

int static compare (void *first, void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}

int main(){
    int num[3];
    int i;
    for(i = 0; i < sizeof(num)/sizeof(int); i++){
        scanf("%d", &num[i]);
    }
    qsort(num, sizeof(num)/sizeof(int), sizeof(int), compare);

    printf("%d\n", num[1]);
}