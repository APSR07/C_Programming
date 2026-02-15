#include<stdio.h>
int main(){
    int a, b;
    printf("enter the value of first variable = ");
    scanf("%d", &a);
    printf("enter the value of second variable = ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now the first variable is = %d", a);
    printf("\nNow the second variable is = %d", b);
    return 0;
}