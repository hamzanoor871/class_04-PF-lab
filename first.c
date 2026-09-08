//    EVEN ODD

#include<stdio.h>
int main(){
     int num;
     printf("enter your number: ");
     scanf("%d",&num);
     if(num%2==0){
      printf("%d is even",num);
     }
     else if(num%2!=0){
      printf("%d is odd",num);

     }
     else
     printf("please enter a num");
     
    return 0;
}