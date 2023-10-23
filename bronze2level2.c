#include<stdio.h>
#include<math.h>

float volumesphere(float radius){
    float volume;
    volume = M_PI * pow(radius,3)*(4/3);
    return volume;
}

int main(){
    float radius = 11.68;
    float a = volumesphere(radius);
    printf("here's the circles volume %g\n", a);
    
}

