#include<stdio.h>
#include<stdlib>

char desordenar (char cadena[]){
	//definitions
	char aux; 
	int aleatorio = rand()%strlen(cadena);

	// first change
	aux  = cadena[aleatorio];
	cadena[aleatorio ] =cadena[0];
	cadena[0] = aux;
	
	//second change
	aleatorio = rand()%strlen(cadena);
	aux = cadena[aleatorio];
	cadena[aleatorio] = cadena[1];
	cadena[1] = aux;
	
	
	
}


int main{

	int num=2;
	while(num<5){
		printf("Numero de caracteres que necesitas: ");
		scanf(&num, %d);
	}


	char password[num];
	
	
	
}
