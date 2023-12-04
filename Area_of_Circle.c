#include<stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The radius of the circle is %f \n", pi * radius * radius);
    return 0;
}