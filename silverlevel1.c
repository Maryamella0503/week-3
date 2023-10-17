#include<stdio.h>

int main(){
    int mark;
    printf("what was ur overall mark for this module?:");
    scanf("%d", &mark);


    if (mark >=70 && mark<=100){
        printf("you have passed the this module with a distinction\n", mark);
    } 
    else (mark >=0 && mark<50);{
        printf("you have failed this module", mark);
    }
    return 0;
}