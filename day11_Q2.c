#include <stdio.h>
int main(){
    float c,s;
    printf("Enter cost price :  ");
    scanf("%f",&c);
    printf("Enter selling price : ");
    scanf("%f",&s);
    if(s>c){
        printf("you are in %f%% profit ", ((s-c)/c)*100);


    }
    else if (c<s){
        printf("you are %f%% loss   ",((s-c)/c)*100);
    }
    else 
    {
        printf("NO prifit no loss ");
    }
return 0;


}