#include<stdio.h>

int main(){
    int num;
    printf("write a number:");
    scanf("%d", &num);

    if (num % 4 ==0 && num %5 ==0) {
        printf("this number is divisible by 4 and 5");
    }
    else {
        printf("the number is not divisible by 4 and 5");
    }
    return 0;
}