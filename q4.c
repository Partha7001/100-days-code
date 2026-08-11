#include <stdio.h>
int main (){
    float a ,b;
    printf("Enter the length of the rectangle:");
    scanf("%f",&a);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&b);
    printf("The area of the reactangle is %f and the perimeter is %f ",a*b,2*(a*b));
    return 0;
}