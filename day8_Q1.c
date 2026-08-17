#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("%c is a Uppercase alphabet .",c);

    }
    else if (c>='a'&&c<='z'){
        printf("%c is  a lowercase alphabet .",c);
    }
    else if (c>='0'&&c<='9'){
        printf("%c is a number . ",c);
    }
    else {
    printf(" %c it is special ",c);}
    return 0;


}