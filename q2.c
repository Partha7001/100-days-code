#include <stdio.h>
int main(){
    float a,b,s,d,p,q;
    printf("enter first number :");
    scanf("%f",&a);
    printf("enter second number :");
    scanf("%f",&b);
    s=(a+b);
    d=(a-b);
    p=(a*b);
    q=(a/b);
    printf("the sum of the numbers is %f\n",s);
    printf("the differnce of the numbers is %f\n",d);
    printf("the product of the numbers is %f\n",p);
    printf("the quotient of the numbers is %f\n",q);
return 0;
}