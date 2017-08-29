#include<stdio.h>
#include<stdlib>

void desordenar (char cadena[]){
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


void generar (char cadena[], int maximo){
	
	cadena[0] = 48 + rand()%10;
	
	switch(rand()%3){
		case 0:
		 cadena[1] = rand()%15 + 33;
		 break;
		case 1:
		 cadena[1] = rand()%6 + 91;
		 break;
		default:
		 cadena[1] = rand()%5 + 58;
	}
	for(i=2;i<=maximo;i++){
		cadena[i] = 65 + rand()%57;
	}
}




int main{

	int num=2;
	while(num<5){
		printf("Numero de caracteres que necesitas: ");
		scanf(&num, %d);
	}

	char password[num];
	
	generar(passowrd);
	desordenar(password);
	
	
	
system("PAUSE");
return 0;
}
---
	
#include<stdio.h>
#include<stdlib>

int nota (int a, int b, int final)
	
	if (0.2*(a+b) + 0.6*final > final)
		return 0.2*(a+b) + 0.6*final;
	return final;
	
}




int main{
	
	printf("Nota 1er parcial: ");
	scanf("%d", &primero);

	printf("Nota 2o parcial: ");

	scanf("%d", &segundo);
	printf("Nota examen final: ");
	scanf("%d", &final);

	

	printf("La nota final es: %d." nota(primero, segundo, final));
	

	
	
system("PAUSE");
return 0;
}
