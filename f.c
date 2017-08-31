#include<stdio.h>
#include<stdlib.h>
  
  
  
  
  int factorial (int n, int total){
    
    do{
      total= n*factorial(n-1);
    }while(n>=2);
    
  }



int main(void){
  
  int factorial=0;
  
  
  
  
  
  
  
  system("PAUSE");
  return 0;  
}
