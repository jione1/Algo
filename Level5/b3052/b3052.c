# include <stdio.h>
int main() {
    int input[10];
    int result = 0;
    int mod[10] = {0};
    int temp;
    int i, j, check = 0, index = 0;

    for(i = 0; i < 10; i++)
        scanf("%d\n", &input[i]);
    
    for(i = 0; i < 10; i++){
        temp = input[i] % 42;
        for(j = 0; j < index; j++){
            if(temp == mod[j]){
                check = 1;
                break;
            }
        }
        if(check == 0){
            mod[index++] = temp;
            result++;
        }
        check = 0;
    }

    printf("%d\n", result);
}