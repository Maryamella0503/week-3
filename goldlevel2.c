#include<stdio.h>

int main(){
    int num1;

while (1) {
        printf("Enter a number:\n");
        scanf("%d", &num1);

        if (num1 == -1) {
            printf("Termination value entered\n");
            break;
        } 
        else if (num1 >= 0 && num1 <= 100) {
            printf("Number within the range, yet termination not reached\n");
        } 
        else {
            printf("Number out of range, try again\n");
        }
    }
    return 0;
}