//C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main(){
      int a,b,c,r1=0,r2=0;
      printf("enter the values :");
      scanf("%d%d%d",&a,&b,&c);
      switch(b*b-4*a*c==0){
        case 1:printf("\nROOTS ARE REAL AND EQUAL");
         r1=(-b*sqrt(b*b-4*a*c))/2*a;
         r2=(b*sqrt(b*b-4*a*c))/2*a;
         printf("\nroots are %d & %d",r1,r2);
         break;
         case 0:switch(b*b-4*a*c>0){
            case 1:printf("\nROOTS ARE REAL AND UNEQUAL");
            r1=(-b*sqrt(b*b-4*a*c))/2*a;
            r2=(b*sqrt(b*b-4*a*c))/2*a;
            printf("\nroots are %d & %d",r1,r2);
            break;
            case 0:if(b*b-4*a*c<0){
                printf("\nROOTS ARE imaginary");
                 r1=(-b*sqrt(b*b-4*a*c))/2*a;
                 r2=(b*sqrt(b*b-4*a*c))/2*a;
                 printf("\nroots are %d & %d",r1,r2);
                 break;
            }
                   
             }

      }
}