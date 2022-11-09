#include <stdio.h>
 
int main(){
	
	int cont=0, i=0,j=0,matriz[5][5] = {
								{1,2,3,5,8},
								{10,11,7,2,1},
								{10,5,6,1,2},
								{9,1,14,11,20},
								{1,2,3,4,5}
							  };
 
	printf("MATRIZ: \n");
	for(cont=0;cont<6-1;cont++){
		printf("%d ", matriz[i][j]);
		i++,j++;
	}
	
	int soma = 0, numero = 0;
	cont=0, i = 0, j= 0;
	for(cont=0;cont<6-1;cont++){
		numero = matriz[i][j];
		soma = soma + numero;
		i++,j++;
	}
	
	printf("\n Soma da diagonal principal: %d", soma);
 
	return 0;
}


