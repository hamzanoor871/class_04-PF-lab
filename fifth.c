#include<stdio.h>
int main(){
    char symbol;
    int num1,num2,add,sub,mul;
    float div;
    printf("Enter the Operands : ");
    scanf("%d %d",&num1,&num2);
    printf("enter the chracters (+,-,*,/)  :  ");
    scanf(" %c",&symbol);
    
    switch(symbol){
     case '+': 
       add = num1+num2;
       printf("your answer after addition is",add);
       break;
    
       case '-': 
       sub = num1+num2;
       printf("your answer after addition is %d",sub);
       break;
    
       case '*': 
      mul = num1*num2;
      printf("your answer after addition is %d",mul);
      break;
      
     case '/': 
     if(num2>0){
      div = num1/num2;
      printf("your answer after addition is %f",div);
      break;
     }
     else
     printf("Eror make sure your denominator is non 0");
   
     default :
     printf("variable not recognized");
    }

} 