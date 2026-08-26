#include <stdio.h>
#include <math.h>
int main(){
    int n,temp ,orignal,digit,digits=0 ;
    int sum=0;
    printf("Enter a number :  ");
    scanf("%d",&n);
    orignal = n;

    temp =n;
    while(temp!=0){
        digits++;
        temp=temp/10;

    }
    temp =n;
    while(temp!=0){
        digit=temp%10;
        sum=sum+pow(digit,digits);
        temp=temp/10;

    }
    if(sum==orignal){
        printf("it is a armstorng number ");
    }
    else{
        printf("it is not a armstrong number ");
    }
    return 0;


}