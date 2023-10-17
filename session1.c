#include<stdio.h>

int main(){
    float temp;
    printf("what is the current temperature in degrees?");
    scanf("%f", &temp);

    if (temp>10)
        printf("no need for a jacket\n");
    if (temp > 20)
        printf("it's not cold. There is no need for a jacket");   
    else 
        printf("wear a heavy jacket");
    return 0;
}