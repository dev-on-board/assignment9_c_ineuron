/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a,b;
    while(1){
    printf("\n1.Addition\n2.subtraction\n3.multiplication\n4.division\n5.Exit");
    printf("\nenter your choice : ");
    scanf("%d",&x);
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    switch(x){
           case 1: printf("%d",a+b);
                   break;
           case 2: printf("%d",a-b);
                   break;
           case 3: printf("%d",a*b);
                   break;
           case 4: printf("%d",a/b);
                   break;
           case 5: exit(0);
           default: printf("invalid choice");
    }
    printf("\n");
    return 0;
}
    }
    