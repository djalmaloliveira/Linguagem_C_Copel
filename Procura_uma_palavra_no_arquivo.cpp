/*
Procura uma palavra no arquivo
Site: https://www.youtube.com/watch?v=vK5j8O8xT8c
*/
#include<stdio.h>
#include<string.h>


bool ExistArquivo(const char *namefile){

    char linha[81];
    int l = 0;
    
    FILE *p;    
    p = fopen(namefile,"rt");
        
    if (p == NULL){
        
        printf("Nao encontrei o arquivo2 (%s)",namefile);
        return false;
    }

     fclose(p);     
    
    printf("\nEncontrou o arquivo: (%s) \n", namefile);
    return true;
}

int pesquisa(const char *namefile,const char *texto){

    char linha[81];
    int l = 0;
    
    FILE *p;    
    p = fopen(namefile,"rt");
        
    if (p == NULL){
        
        printf("Nao encontrei o arquivo");
        return 1;
    }
        while(fgets(linha,81,p)!=NULL){
            l++;
            printf("\t367-Linha %d - Pes.%s - %s. \n", l,texto,linha);

     }
     fclose(p);     
    
    printf("\n342-Entrou na pesquisa, Arquivo: (%s) texto da pesquisa: (%s)\n", namefile, texto);
    return 0;
}

int main () 

{
    char palavra[81];
    char arquivo[81];
    
    printf("Digite o nome do arquivo: ");
    scanf("%80s",&arquivo);
    printf("Digite a palavra: ");
    scanf("%80s", &palavra);
    
    if (ExistArquivo(arquivo))  pesquisa(arquivo, palavra);

	return 0;
 }

