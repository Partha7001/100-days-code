#include <stdio.h>
int main(){
    float a;
    printf("Enter the temparature in celsius:");
    scanf("%f",&a);
    printf("The temperature in fahrengeight is %f",(a*(9.0/5.0))+32);
    return 0;

}