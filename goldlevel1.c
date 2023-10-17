#include<stdio.h>

int main(){
    int label;
    printf("enter a number from 1 to 5:\n");
    scanf("%d", &label);
    switch (label) {
        case 0:
            printf("0 was selected\n");
            break;
        case 1:
            printf("1 was selected\n");
            break;
        case 2:
            printf("2 was selected\n");    
            break;
        case 3:
            printf("3 was selected\n");
            break;
        case 4:
            printf("4 was selected\n");
            break;
        case 5:
            printf("5 was selected\n");
            break;
        default:
            printf("invalid selection\n");
    }

return 0;
}