#include<stdio.h>
#include<stdlib.h>


void ask_and_count (int v[]){
    int num;
    do{
        printf("\n Introduce a number between 1 and 9 (write '0' when you want to stop writing): ");
        scanf("%d", &num);
        v[num-1]++;
    
    
        if (num <0 || num >9)
        printf("This number will not be considered as valid. \n");
    }while(num!=0)
}


void show (int v[]){
    int k;
    
    for(k=0;k<=strlen(v);k++){
        sitch(v[k]){
            case 0:
            printf("Number %d has not been written ever",k+1);
            break;
            
            case 1:
            printf("Number %d has been written once",k+1);
            break;
            
            case 2:
            printf("Number %d has been written twice",k+1);
            break;
            
            default:
            printf("Number %d has been written %d times",k+1 ,v[k]);
        }
    }
}






int main(void){
    int k;
    int v[9];
    
    for(k=0;k<=strlen(v);k++){
        v[k]=0;
    }
    
    
    ask_and_count(v);
    show(v);
        
        
    system("PAUSE");
    return 0;
}
