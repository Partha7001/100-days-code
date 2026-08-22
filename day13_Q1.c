#include <stdio.h>
int main(){
   int a,b;
   char o;
   
    printf("Enter first numbers ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("Enter a operator '+-*/ %%'");
    scanf(" %c",&o);
    switch (o){
        case '+':
        printf("The sum of %d and %d is %d",a,b,a+b);
        break;
        case '-':
        printf("result : %d ", a-b);
        break;
        case '*':
        printf("Result :  %d", a*b);
        break;
        case '/':
        if (b!=0){
            printf("Result : %d ",a/b);

        }
        else 
        {
            printf("can't be dibisible by zero ");
        }
        break;
        case '%':
        if (b!=0){
            printf("Result : %d ",a  % b);

        }
        else 
        {
            printf("modulus by zero is not allowed ");
        }
        break;
        defult:
        printf("Ivalid operater ");
    }  
    return 0;   

}