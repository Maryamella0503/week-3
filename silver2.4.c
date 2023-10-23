#include<stdio.h>

float operationfunc(float num1, float num2, char operation){
    float result;

    switch(operation){
        case '+':
        result = num1 +num2;
        break;
        case '-':
        result = num1-num2;
        break;
        case '*':
        result = num1* num2;
        break;
        case '/':
        if (num2 !=0){
        result = num1/num2;
        } else {
            printf("ZeroDivisionError");
        }
            break;
        default:
        printf("invalid operator\n");
        return 0; 
    }
        return result;
    
}

int main(){
    float num1;
    float num2;
    char operation;

    printf("enter a number:\n");
    scanf("%f", &num1);

    printf("enter another number:\n");
    scanf("%f", &num2);

    printf("choose an operator\n");
    scanf(" %c", &operation);

    float result= operationfunc(num1, num2, operation);
    printf("the result of the operation is: %.2f\n", result);
    return 0;
}