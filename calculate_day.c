

bool es_bisiesto (int ano){
  
  
  
  
 return false; 
}


int dias_transcurridos (int dia, int mes, int ano){
    int total_dias=dia;
  
    while (ano >=1978){
      while (mes>=1){
        if (mes==4 || mes==6 || mes==9 || mes==11)
          total_dias+=30;
        
        if (mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
          total_dias+=31;
        
        if (mes==2 && es_bisiesto(ano)==true)
          total_dias+=29;
        
        if (mes==2 && es_bisiesto(ano)==false)
          total_dias+=28;
        
        if (mes==1)
          total_dias -=1;
        
        mes--
      }
      ano--;
    }
    
}


void dia_final (int n, char cad[]){
  
    switch (n%7){
    case 0:
      cad= 'Domingo';
      break;
    case 1:
      cad= 'Lunes';
      break;
    case 2:
      cad= 'Martes';
      break;
    case 3:
      cad= 'Miercoles';
      break;
    case 4:
      cad= 'Jueves';
      break;
    case 5:
      cad= 'Viernes';
      break;
    default:
      cad= 'Sabado';

  
  
  
  
}










int main(void){
  int dia, mes ano;
  
  printf("Introduzca dia: ");
  scanf("%d", &dia);
  
  printf("Introduzca mes: ");
  scanf("%d", &mes);
  
  printf("Introduzca ano: ");
  scanf("%d", &ano);
  
  

    
      
      
      

  
  
  
  
  
  
  
  system("PAUSE");
  return 0;
}
