#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[50], nome_referencia[50], iniciais[50];
    int i, j, primeiro_espaco = 0, ultimo_espaco= 0;

    printf("Nome: ");
    scanf("%[^\n]s", &nome);

    for(i=0;i<strlen(nome);i++){
		//printf("%c ",tolower(nome[i]));
		nome[i] = tolower(nome[i]);
	}

    nome[0] = toupper(nome[0]);

    for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
			nome[i+1] = toupper(nome[i+1]);
		}
	}


    strcpy(nome_referencia,"");

    for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
			ultimo_espaco = i;
		}
	}	

    for(i=strlen(nome)-1;i>=0;i--){
		if(nome[i]==' '){
			primeiro_espaco = i;
		}
	}

    j=0;
	for(i=ultimo_espaco+1;i<strlen(nome);i++,j++){
		nome_referencia[j]=toupper(nome[i]);
	}
    nome_referencia[j] = '\0';
    printf("\n%s\n", nome_referencia);
    strcat(nome_referencia,", ");

    
    int k=0;
    iniciais[0]=nome[0];
    iniciais[k+1] = '.';
    iniciais[k+2] = ' ';
    k+=2;
    for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
            if(i == ultimo_espaco){
                iniciais[k] = '\0';
                break;
            }else{
                iniciais[k] = nome[i+1];
                iniciais[k+1] = '.';
                iniciais[k+2] = ' ';
                k+=2;
            }
		}
	}

    strcat(nome_referencia, iniciais);

    printf(nome_referencia);

    return 0;
}
