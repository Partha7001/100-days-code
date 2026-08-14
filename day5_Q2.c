#include <stdio.h>
int main (){
    int s,h,m,sec;
    printf("enter time in seconds :");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    sec=s;
    printf("Time = ,%02d:%02d:%02d",h,m,sec);
    return 0;
    
}