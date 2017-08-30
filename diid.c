bool DNI_correcto (int n){
	
	if (n>= 10000000 && n<= 99999999)
		return true;
	
	return false;	
}

char calcular_letra (int n){
	char letra;
	switch (n%23){
		
	    case 0:
	      letra=''
	      break;
	    case 1:
	      letra=''
	      break;
	    case 2:
	      letra=''
	      break;
	    case 3:
	       letra=''
	      break;
	    case 4:
	      letra=''
	      break;
	    case 5:
	      letra=''
	      break;
	    case 6:
	      letra=''
	      break;
	    case 7:
	      letra=''
	      break;
	    case 8:
 	     letra=''
 	     break;
 	    case 9:
	      letra=''
	      break;
	    case 10:
	      letra=''
	      break;
	    case 11:
	      letra=''
	      break;
	    case 12:
	      letra=''
	      break;
 	    case 13:
	      letra=''
	      break;
	    case 14:
 	     letra=''
 	     break;
	    case 15:
  	     letra=''
  	     break;
	    case 16:
	     letra=''
      	     break;
	    case 17:
	     letra=''
	      break;
	    case 18:
	      letra=''
	      break;
	    case 19:
	      letra=''
	      break;
	    case 20:
	      letra=''
	      break;
	    case 21:
	      letra=''
	      break;
	    case 22:
	      letra=''
	      break;
	    case 23:
	      letra=''
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























