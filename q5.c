/*
 Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid")*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int var;
    printf("ente the value :\n");
    scanf("%d",&var);
    switch(var){
        case 1:printf("good");
        break;
        case 2:printf("better");
        break;
        case 3:printf("best");
        break;
        case 4:exit(0);
    }
}