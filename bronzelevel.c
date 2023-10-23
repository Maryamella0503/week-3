#include<stdio.h>
#include<math.h>

float circleArea(float radius){
    float area;
    area = M_PI * pow(radius,2);
    return area;
}

int main(){
    float radius = 10.76;
    float a = circleArea(radius);
    printf("here's the circles area %g\n", a);
}

