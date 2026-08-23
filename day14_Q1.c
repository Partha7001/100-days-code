#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the value of n " );
    scanf("%d",&n);
    for(i=1;i<=n ; i++){
        sum=sum+(2*i-1);
    }
    printf("sum of first %d odd numbers ARE =%d ",n,sum);
    return 0;
}