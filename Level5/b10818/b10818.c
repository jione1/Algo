// 최소, 최대
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
    int n;
    scanf("%d", &n);
    int *num = malloc(sizeof(int)*n);
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), compare);

    printf("%d %d\n", num[0], num[n-1]);

    free(num);
}