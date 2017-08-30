#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

setlocale(LC_ALL, "spanish");


bool DNI_correcto (int n){
	
	if (n>= 10000000 && n<= 99999999)
		return true;
	
	return false;	
}

char calcular_letra (int n){
	char letra;
	switch (n%23){
		
	    case 0:
	      letra='T'
	      break;
	    case 1:
	      letra='R'
	      break;
	    case 2:
	      letra='W'
	      break;
	    case 3:
	      letra='A'
	      break;
	    case 4:
	      letra='G'
	      break;
	    case 5:
	      letra='M'
	      break;
	    case 6:
	      letra='Y'
	      break;
	    case 7:
	      letra='F'
	      break;
	    case 8:
 	     letra='P'
 	     break;
 	    case 9:
	     letra='D'
	     break;
	    case 10:
	     letra='X'
	     break;
	    case 11:
	     letra='B'
	     break;
	    case 12:
	     letra='N'
	     break;
 	    case 13:
	     letra='J'
	     break;
	    case 14:
 	     letra='Z'
 	     break;
	    case 15:
  	     letra='S'
  	     break;
	    case 16:
	     letra='Q'
      	     break;
	    case 17:
	     letra='V'
	     break;
	    case 18:
	     Letra='H'
	     break;
	    case 19:
	     letra='L'
	     break;
	    case 20:
	     letra='C'
	     break;
	    case 21:
	     letra='K'
	     break;
	    default:
	     letra='E'
	     break;

		
	return letra;
		
	}
	
	
	
}




int main (void){
	int dni;
	
	
	
	
	do{
	
		do{
			printf("Introduzca numero de DNI (8 cifras, sin letra): ");
			scanf("%d",&dni);
		
		
		}while(DNI_correcto =='false');
	
	
			printf("Letra: ");
			scanf("%c", &letra);
		
			if (toupper(letra) != calcular_letra(dni)){
				printf("Por favor, introduzca una letra, no son validos carcateres especiales ni numeros.");
			}
	
	}while(toupper(letra) != calcular_letra(dni))
	
	
	printf("Su DNI es %d%c",dni, letra);
	
	
	
	
	
	
system("PAUSE");
return 0;

}
