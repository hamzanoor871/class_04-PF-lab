//    Grade Calculator
#include<stdio.h>
int main(){
     int marks;
     printf("enter your marks: ");
     scanf("%d",&marks);
     if( marks >= 80) {
      printf("You got an A");
     }
     else if(marks<=79 && marks>=70){
      printf("You got a B");

     }
     else if(marks<=69 && marks>=60){
      printf("You got a C");
     }
     else if(marks<=59 && marks>=50){
      printf("You got a D");
     }    
     else{
        printf("You got a F");
     }
     
    return 0;
}