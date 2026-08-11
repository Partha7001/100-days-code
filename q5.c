#include <stdio.h>
int main(){
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    printf("The area of the circle is %f and the circumference is %f", (3.14*r*r),(2*3.14*r));
    return 0;
}