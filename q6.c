//Program to check whether a year is a leap year or not. Using switch
//statement
#include<stdio.h>
int main(){
    int year;
    while(1){
         printf("\nenter the year : ");
    scanf("%d",&year);
    switch(year%100==0){
          case 0: switch(year%4==0){
            case 1:printf("leap year");
            break;
            case 0:printf("non leap year");
            break;
          }
          break;
          case 1:switch(year%400==0){
            case 1:printf("leap year ");
                   break;
            case 0:printf("non leap year");
                   break;       
          }
    }
    }
    
}