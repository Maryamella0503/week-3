#include<stdio.h>

int isPrime(int n){
    int flag =0;
    int i;
    if (n==0 || n==1){
        flag = 1;
    }
    for (i=2; i<=n/2; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
        
        }
        return flag;
    }

int main(){
    int n;
    printf("write an integer\n");
    scanf("%d", &n);

    int flag_answer = isPrime(n);

    if (flag_answer == 0) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}
