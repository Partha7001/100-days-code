#include <stdio.h>
int main(){
    int n , orignal,reverse=0,digit;
    printf("Enter a number :  ");
    scanf("%d",&n);
    orignal=n;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if (reverse==orignal ){
        printf("its a palindrome number ");
    }
    else{
        printf("it is not a palindrome number ");
    }
    return 0;
}