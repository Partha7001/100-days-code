#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first  number A:");
    scanf("%d",&a);
    printf("Enter second number B:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping the numbers , A=%d,B=%d",a,b);
    return 0;
    

}  