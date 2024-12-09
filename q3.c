//Write a program which takes the day number of a week 
//and displays a unique greeting message for the day
#include<stdio.h>
#include<stdlib.h>
int main(){
    int day;
    printf("#############################\n");
    while(1){
       printf("enter the day number (1-7):\n");
       scanf("%d",&day);
       printf("enter 8 to exit\n");
       switch(day){
        case 1:printf("hello , today is sunday\n");
               break;
        case 2:printf("hello , today is monday\n");
               break;
        case 3:printf("hello , today is tuesday\n");
                break;
        case 4:printf("hello , today is wednesday\n");
                break;
        case 5:printf("hello , today is thrusday\n");
                break;
        case 6:printf("hello , today is friday\n");
                break;
        case 7:printf("hello , today is saturday\n");
                break;
        case 8: exit(0);

       }
}
}