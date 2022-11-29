#include <stdio.h>

int le_valida();

int main() {
    int numero[10], impar[10], i = 0, vezes=1, j=0, x=0;
    char resposta;

    
    for(i = 0; i<vezes; i++){
		printf("\nInsira o %d.numero: ", i+1);
        numero[i] = le_valida();

        printf("Deseja inserir um novo numero? ");
        scanf(" %c", &resposta);

        if(resposta != 'S' || vezes >=10){
            i = i + 10;
        }
    vezes++;
	}

    int menor_numero = numero[0];
    for(i = 1; i<vezes-1; i++){
        if(numero[i] < menor_numero){
            menor_numero = numero[i];
        }
    }

    int maior_numero = numero[0];
    for(i = 1; i<vezes-1; i++){
        if(numero[i] > maior_numero){
            maior_numero = numero[i];
        }
    }

    printf("Menor numero: %d", menor_numero);
    printf("\nMaior numero: %d", maior_numero);

return 0;
}

int le_valida(){
	int numero_val;

    scanf("%d", &numero_val);
		
	while(numero_val < 0 || numero_val > 50){
        printf("Valor invalido, insira novamente: ");
        scanf("%d", &numero_val);
    }
              	
	return numero_val;
}