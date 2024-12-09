//Program to Convert even number into its upper nearest odd number
//Switch Statement.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    switch(num%2==0){
        case 1:printf("the nearest odd number is %d",num+1);
        break;
        case 0:printf("the odd number you have inserted is %d",num);
        break;
    }
    return 0;
}