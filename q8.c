//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement
#include<stdio.h>
int main(){
       float num,num1=0,num2=0;
       printf("enter a number :");
       scanf("%f",&num);
       switch(num>0){
        case 1: num1=-num;
        printf("%.0f",num1);
        break;
        case 0:num2=-num;
        printf("%.0f",num2);
        break;
       }
       return 0;
}