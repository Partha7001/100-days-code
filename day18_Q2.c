#include <stdio.h>
int main(){
    int a,b,i,hcf;
    printf("Enter a number A : ");
    scanf("%d",&a);
    printf("Enter a number B : ");
    scanf("%d",&b);
    for(i=1;i<=b&&i<=b;i++){
        if(a%i==0&&b%i==0){
            hcf=i;
        }
        printf("hcf = %d ",hcf);
    }
    return 0;

}