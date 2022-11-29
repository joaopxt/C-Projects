#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define TAMANHO_TEXTO 20
#define QTD_LETRAS 26

int main() {

    char *alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *alfabeto_minusculo = "abcdefghijklmnopqrstuvwxyz";

    int i = 0, rotacao = 0;
    char nome[TAMANHO_TEXTO];

    strcpy(nome,"");

    printf("Digite o nome: ");
    scanf("%[^\n]s", &nome);

    printf("Digite a rotacao: ");
    scanf("%d", &rotacao);
    
    for (i = 0; i < strlen(nome); i++) {
        if(nome[i] == ' '){
            i = i+1;
        }
        if(nome[i] >= 'A' && nome[i] <= 'Z'){
            nome[i] = alfabeto[(nome[i] - 'A' + rotacao % QTD_LETRAS)];
        }else if(nome[i] >= 'a' && nome[i] <= 'z'){
            nome[i] = alfabeto_minusculo[(nome[i] - 'a' + rotacao % QTD_LETRAS)];
        }
        
    }

    printf("%s", nome);

    return 0;
}