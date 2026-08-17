#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter first number A : ");
    scanf("%f",&a);
    printf("Enter second number B : ");
    scanf("%f",&b);
    printf("Enter third number C : ");
    scanf("%f",&c);
    if(a>b&&a>c){
        printf("A = %f is the largest number ",a);

    }
    else if(b>a&&b>c){
        printf("B = %f is the largest number ", b);
    }
    else {
    printf("C = %f is the largest number ", c );
    }
        return 0;
}