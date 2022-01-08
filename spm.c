//Trabalho feito por Bruno Brocanelli RA: 1430481921007

//Inciializa��o de bibliotecas
#include <string.h>
#include "spm.h"

/*Fun��o responsavel por transformar a string informada*/
char * capitalize(char * s){
	
	int i;
   	/*Para todos os caracteres de s que estiverem entre A e Z maisculos somar 32
	para que os caracteres maiusculos se tornem minusculos*/
    for(i = 0; i < strlen(s); i++){
        if(s[i] >='A' && s[i] <= 'Z'){
            s[i] += 32;
        }

	}
	
	for (i = 0; i < strlen(s) + 1; i++) {
        if (i == 0 || s[i - 1] == ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = s[i];
    }
    //Retorna a string transformada
    return s;
}

/*Transforma e devolve a string s centralizada em uma string
de comprimento width. O preenchimento � feito usando o
caractere especificado por fillchar.*/
char * center(char * s, int width, char fillchar){
	
	int i, n; //Declar��o de variaveis
	char aux[width];//String auxiliar
	int x = strlen(s); //Fun��o strlen para obter o tamanho da string em s
	
	if(x >= width){ //Se x for maior que width passado pela fun��o retorna a string
		return s;
	}
	
	n = (width - x)/2; //n reber� width - tamanho da string s dividido pela metade
	
	//La�o for para preencher a string aux com o fillchar nas n posi�oes calculadas
	for(i = 0; i < n; i++){
		aux[i] = fillchar;
	}
	
	//Finalizar a string 
	aux[i] = '\0';
	
	/*Funcao responsavel por concatenar a string s em aux.
	fun��o strcat se encontra na biblioteca string.h*/
	strcat(aux, s);
	
	//la�o for responsavel por  preencher o restante da string com o fillchar
	for(i = strlen(aux); i < width - 1; i++){
		aux[i] = fillchar;
	}
	
	//Finaliza��o de aux
	aux[width - 1] = '\0';
	
	strcpy(s,aux); //Fun��o que copia o conteudo da string aux para s. Fun��o pertencente a string.h
	return s; // retorna s
}

/*Fun��o responsavel por verificar se existem apenas caracteres minusculos em uma string
se for verdade volta um valor booleano true, caso n�o volta false*/
bool isstrlower(const char * s){
	
	int i;
	bool ts = true;
	
    //La�o de repti��o com a fun��o de acessar cada posicao da string
    for(i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            //Se algum caractere da posicao i for mai�sculo retorna false
            ts = false;
            return ts;
        }
    }    
    //Caso toda a string seja toda minuscula volta true
    return ts;
}

/*Fun��o responsavel por verificar se existem apenas caracteres maiusculos em uma string
se for verdade volta um valor booleano true, caso n�o volta false*/
bool isstrupper(const char * s){
	
	int i;
	bool ts = true;
	
    //La�o de repti��o com a fun��o de acessar cada posicao da string
    for(i = 0; i < strlen(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
		{
            //Se algum caractere na posicao i for minusculo retorna false
            ts = false;
            return ts;
        }
    }    
    //Caso toda a string seja toda maiuscula volta true
    return ts;
	
}


