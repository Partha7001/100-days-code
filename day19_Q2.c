#include <stdio.h>
int main(){
    int a ,digit, sum=0;
    printf("Enter a number :  ");
    scanf("%d",&a);
    while(a!=0){
        digit=a%10;
        sum=sum+digit;
        a= a/10;
    }
    printf("Sum of all the digits are %d ", sum);
    return 0;
}