#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter first side : ");
    scanf("%f",&a);
    printf("Enter second side : ");
    scanf("%f",&b);
    printf("Enter third side : ");
    scanf("%f",&c);
    if(a+b<= c||a+c<=b||b+c<= a){
        printf("invalid Triangle ");
    }
    else if (a==b||a==c){
        printf("Equilatrall triangle ");
    }
    else if (a==b||b==c||a==c){
        printf("isoceles triangle ");

    }
    else {
        printf("scalene triangle ");
    }
    return 0;
    



}