#include<stdio.h>
int main(){
     int year,month;
     printf("enter the month (1-12): ");
     scanf("%d",&month);
    printf("enter the year: \n");
     scanf("%d",&year);
     if((year%4==0 && year%100!=0)|| year%400==0){
      printf("%d is a leap year",year);
      switch(month){
        case 2 : 
        printf("months have 29");
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          printf("Your month have 31 days\n"); 
          break;
        default:
        printf("your month have 30 days\n");

      }

     }
     else{
     printf("not a leap year");
          switch(month){
        case 2 : 
        printf("\nmonths have 28 ");
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          printf("\nYour month have 31 days"); 
          break;
        default:
        printf("\nyour month have 30 days");
   
      }
    }  
    return 0;
}