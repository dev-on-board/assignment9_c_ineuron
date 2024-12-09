//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
#include<stdlib.h>
int main(){
    int month_no ;
    while(1){
    printf("#############################\n");
    printf("enter the month number (1-12):");
    scanf("%d",&month_no);
    
    switch(month_no){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:   
        case 10:
        case 12: printf("number of days in this month is 31\n");
                 break;
        case 2: printf("number of days in this month is 28 or 29\n");
                 break;

        case 4:
        case 6:
        case 9:
        case 11: printf("number of days in this month is 30\n");
        case 13: exit(0);
       default : printf("invalid input") ;         
    }
 }
 
 return 0;
} 
