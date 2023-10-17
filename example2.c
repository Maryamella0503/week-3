#include<stdio.h>

int main(){
    int mark;
    printf("what was ur overall mark for this module?:");
    scanf("%d", &mark);

    if (mark>=0 && mark<=100){
        if (mark >=40 && mark<=100){
        printf("you have passed the this module with this mark: %d\n", mark);
        } 
        } else if(mark >=0 && mark<40 ) {
            printf("you have failed this module with this mark: %d\n", mark);
        }
        else {
            printf("this mark is not valid\n");
        }   
        return 0;
}