#include <stdio.h>


int main() {
    int numero[10], impar[10], i = 0, vezes=1, j=0, x=0;
    char resposta;

    
    for(i = 0; i<vezes; i++){
		printf("\nInsira o %d.numero: ", i+1);
        scanf("%d", &numero[i]);

        printf("Deseja inserir um novo numero? ");
        scanf(" %c", &resposta);

        if(resposta != 'S' || vezes >=10){
            i = i + 10;
        }else{
            vezes++;
        }
	}

    i=0;
    for(i = 0; i<vezes-1; i++){
        if(numero[i] %2 != 0){
            impar[x] = numero[i];
            printf("\n%d",impar[x]);
            x++;
        }
    }
    
    for(i = 0; i<vezes; i++){
        printf("\nPrintar vetor numero: %d", numero[i]);
    }   
    
    
    for(j = x-1; j>=0; j--){
	    printf("\nContando ao contrario: %d ", impar[j]);
	}
    
	return 0;
}