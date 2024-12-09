/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c,choice;
    while(1){
           printf("enter your choice : \n");
    printf("1: To check equilateral \n");
    printf("2: To check isosceles \n");
    printf("3: To check right angle\n");
    printf("4: To exit :\n");
    scanf("%d",&choice);
    printf("enter the three lengths of the triangle :");
    scanf("%d%d%d",&a,&b,&c);
    switch(choice){
        case 1: if(a==b&&a==c){
            printf("yes:), it is an equilateral triangle");
        }
        else{
             printf("No:(, it is not an equilateral triangle");
        }
        break;
        case 2: if(a==b||a==c||b==c){
            printf("yes:), it is a isosceles triangle");
        }
        else{
             printf("No:(, it is not a isosceles triangle");
        }
        break;
        case 3: if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b){
            printf("yes:), it is a right angled triangle");
        }
        else{
             printf("No:(, it is not a  right angled triangle");
        }
        break;
        case 4:exit(0);
        
    }    
    }
    
}