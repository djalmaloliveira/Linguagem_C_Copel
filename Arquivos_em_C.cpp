/*
	Name: Djalma L Oliveira
	Date: 28/03/19
	Descricao: Arquivos
	Site: http://linguagemc.com.br/arquivos-em-c-categoria-usando-arquivos/
*/
#include <stdio.h>
#include <stdlib.h>
void createlistmachine(char strfile[]){
	

  	FILE *pont_arq;	pont_arq = fopen(strfile, "w+");  	
	
	if (pont_arq == NULL)
	{
	    printf("\n\nERRO! O arquivo não Existe!\n");
	}
	else
	   {
	    
  		fprintf(pont_arq, "%s", "P438351");  
		printf("\nO arquivo foi criado e com sucesso!\n\n");
	  	fclose(pont_arq);  
  	   }
}

//===

int existefile(char strfile[]){		
  	FILE *pont_arq; 
  	 char ch;
  	
	pont_arq = fopen(strfile, "r");  	
	
	if (pont_arq == NULL) return 0;	
	else {
		
		
		while( (ch=fgetc(pont_arq))!= EOF )
  		putchar(ch);
   
 		fclose(pont_arq);
 	
	 	return 1;  	
 	
	}
	
	   
}


//==

int main(){

	char strfile[] = "listamaquinas.txt";

	
	if (existefile(strfile)==1) {
		
		printf("\n\nSim o arquivo (%s) realmente existe\n\n",strfile);

 
		
	}else createlistmachine(strfile);

  
  	system("pause");
  	printf("\n\n");
  	return(0);
}


