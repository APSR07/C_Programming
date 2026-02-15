#include<stdio.h>
int main(){
    float a, b; // initialize two float variable.
    printf("enter first value = "); // print a string for taking a input first value
    scanf("%f", &a); // taking input first value
    printf("enter second value = "); // second value
    scanf("%f", &b); 
    printf("ADDITION %f %f", a + b);
    printf("\nsubtraction %f %f", a - b);
    printf("\nmultiplication %f %f", a * b);
    printf("\ndivision %f %f", a / b);
    return 0;
}