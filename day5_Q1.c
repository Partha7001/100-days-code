#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t;
    printf("Enter principle : ");
    scanf("%f",&p);
    printf("Enter rate :");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    float s;
    s=(p*r*t)/100;
    float a;
    a=p*pow((1+r/100),t);
    float c;
    c=a-p;
    printf("The simple intrest is %f and coumpund intrest is %f",s,c);
    return 0;


    
}

