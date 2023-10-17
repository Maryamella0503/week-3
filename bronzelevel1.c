#include<stdio.h>

int main(){
    int num;
    printf("write a number:");
    scanf("%d", &num);

    if (num == 0){
        printf("the number you wrote is 0\n");
    }
    else if (num > 0){
        printf("the number you wrote is a positive integer\n");
    }
    else {
        printf("the number you selected is negative\n");
    }
    return 0;
}