#include <stdio.h>
#include <string.h>

#define TAM_CIDADE 16
#define MAX_JOGOS 32

typedef struct{
		char nome[50];
        int idade;
		char nacionalidade[50];
}Presidente;
Presidente presidente;
Presidente dados_presidente();

typedef struct{
	int id[9];
	char nome[TAM_CIDADE];
    int tam_struct;
}Cidade;
Cidade cidade[9];
void cadastrar_cidade(void);

typedef struct{
	int id_jogo;
	float valor;
    int id_cidade;
    int tam_struct;
    int jogos_ordenados[MAX_JOGOS];
}Jogo;
Jogo jogos[MAX_JOGOS];
void cadastrar_jogo(void);

void listar_jogos(void);

void exibir_por_cidade(void);

void ordenar_id_jogo(void);

int main() {

    char choice;
	
    printf("---- PROGRAMA DA COPA 2022 ----\n");

    printf("- (a) Presidente -\n");
    printf("- (b) Cadastrar cidade -\n");
    printf("- (c) Cadastrar jogo -\n");
    printf("- (d) Listar jogos -\n");
    printf("- (e) Exibir jogos por cidade -\n");
    printf("- (f) Encerrar -\n");
    scanf(" %c", &choice);

    switch(choice){
        case 'a': dados_presidente();printf("- (a) Presidente -\n");
                                    printf("- (b) Cadastrar cidade -\n");
                                    printf("- (c) Cadastrar jogo -\n");
                                    printf("- (d) Listar jogos -\n");
                                    printf("- (e) Exibir jogos por cidade -\n");
                                    printf("- (f) Encerrar -\n");
                                    scanf(" %c", &choice);

        case 'b': cadastrar_cidade();printf("- (a) Presidente -\n");
                                    printf("- (b) Cadastrar cidade -\n");
                                    printf("- (c) Cadastrar jogo -\n");
                                    printf("- (d) Listar jogos -\n");
                                    printf("- (e) Exibir jogos por cidade -\n");
                                    printf("- (f) Encerrar -\n");
                                    scanf(" %c", &choice);

        case 'c': cadastrar_jogo();printf("- (a) Presidente -\n");
                                    printf("- (b) Cadastrar cidade -\n");
                                    printf("- (c) Cadastrar jogo -\n");
                                    printf("- (d) Listar jogos -\n");
                                    printf("- (e) Exibir jogos por cidade -\n");
                                    printf("- (f) Encerrar -\n");
                                    scanf(" %c", &choice);

        case 'd': listar_jogos();printf("- (a) Presidente -\n");
                                    printf("- (b) Cadastrar cidade -\n");
                                    printf("- (c) Cadastrar jogo -\n");
                                    printf("- (d) Listar jogos -\n");
                                    printf("- (e) Exibir jogos por cidade -\n");
                                    printf("- (f) Encerrar -\n");
                                    scanf(" %c", &choice);

        case 'e': exibir_por_cidade();printf("- (a) Presidente -\n");
                                    printf("- (b) Cadastrar cidade -\n");
                                    printf("- (c) Cadastrar jogo -\n");
                                    printf("- (d) Listar jogos -\n");
                                    printf("- (e) Exibir jogos por cidade -\n");
                                    printf("- (f) Encerrar -\n");
                                    scanf(" %c", &choice);

        case 'f': break;
        default: break;
    }

	return 0;
}

void listar_jogos(void){
    int i;
    printf("\tFIFA - Relatorio de Arrecadacao\n");
    printf("\t    Presidente: %s\n", presidente.nome);
    printf("------------------------------------------------------------\n");
    printf("COD CIDADE    CIDADE    COD JOGO    ARRECADACAO\n");
    printf("------------------------------------------------------------\n");
    for(i=0; i<jogos[0].tam_struct; i++){
        printf("%d    \t%s    \t%d    \t%.2f\n", jogos[i].id_cidade+1, cidade[jogos[i].id_cidade].nome, jogos[i].id_jogo, jogos[i].valor);
    }
    printf("------------------------------------------------------------\n");
}

void ordenar_id_jogo(void){
    int i, j, aux, jogos_ordenados[MAX_JOGOS];

    for(i=0; i<=jogos[0].tam_struct;i++){
        jogos_ordenados[i] = jogos[i].id_jogo;
    }
        for(i=0;i<jogos[0].tam_struct;i++){
    		for(j=0;j<jogos[0].tam_struct-1;j++){
    			if(jogos_ordenados[j]>jogos_ordenados[j+1]){
    				aux = jogos_ordenados[j];
    				jogos_ordenados[j] = jogos_ordenados[j+1];
    				jogos_ordenados[j+1] = aux;
    			}
    		}
    	}

    for(i=0; i<=jogos[0].tam_struct;i++){
        jogos[0].jogos_ordenados[i] = jogos_ordenados[i];
    }
}

void exibir_por_cidade(void){
    int id_busca=0, i=0;

    printf("Digite o ID da cidade desejada: ");
    scanf("%d", id_busca);

    for(i=0; i<=cidade[0].tam_struct; i++){
        if(cidade[i].id[i] == id_busca-1){
            printf("Jogos na cidade %s\n", cidade[i].nome);
            printf("------------------------------------------------------------\n");
            printf("COD JOGO    ARRECADACAO\n");
            for(i=0; i<cidade[0].tam_struct; i++){
                printf("\t%d    \t%.2f\n", jogos[i].jogos_ordenados, jogos[i].valor);
            }
            printf("------------------------------------------------------------\n");
        }
    }
}

void cadastrar_jogo(void){
    int i =0, j=0, k=0, y=0;

    for(i=0;i<MAX_JOGOS;i++){
		printf("Cadastre o ID do jogo (300 - 999): ");
        scanf("%d", &jogos[i].id_jogo);
        while(jogos[i].id_jogo < 300 || jogos[i].id_jogo > 999 ){
            printf("ID invalido, insira novamente: ");
            scanf("%d", &jogos[i].id_jogo);
        }
        y++;

        if(i>=1){
            for (j = 0; j <= y; j++) {
                for (k = j + 1; k <= y; k++) {
                    if (jogos[k].id_jogo == jogos[j].id_jogo) {
                        while(jogos[k].id_jogo == jogos[j].id_jogo ){
                            printf("ID %d ja utilizado, insira novamente: ", k+1);
                            scanf("%d", &jogos[k].id_jogo);
                        }    
                    }
                }
            }
        }

        printf("Cadastre o valor arrecadado no jogo (1000 - 1000000): ");
        scanf("%f", &jogos[i].valor);
        while(jogos[i].valor < 1000 || jogos[i].valor > 1000000 ){
            printf("Valor invalido, insira novamente: ");
            scanf("%f", &jogos[i].valor);
        }
        
        printf("Cadastre o ID da cidade onde o jogo foi realizado: ");
        scanf("%d", &jogos[i].id_cidade);
        jogos[i].id_cidade -=1;
        
        char resposta;
        printf("Deseja cadastrar outro jogo? (S ou N) ");
        scanf(" %c", &resposta);
        while(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
        printf("Resposta invalida, insira novamente: ");
        scanf(" %c", &resposta);
        }

        if(resposta == 'N' || resposta == 'n'){
            i =+ 33;
        }
	}

    i = 0;
    for(i=0;i<y;i++){
        j = i;
		printf("ID %d: %d\n\n", j+1, jogos[i].id_jogo);		
		printf("Valor %d: %f\n\n", j+1, jogos[i].valor);		
		printf("Cidade %d: %s\n\n", j+1, cidade[jogos[i].id_cidade].nome );		
	}

    jogos[0].tam_struct =  y;

    ordenar_id_jogo();
}

void cadastrar_cidade(void){
    int i=0, tam_id = 0, j = 1;
    
    for(i=0;i<9;i++, j++){
		printf("Cadastre a cidade: ");
		fflush(stdin);
		scanf("%[^\n]s",&cidade[i].nome);
        while(strlen(cidade[i].nome) > TAM_CIDADE){
        printf("Nome muito grande, insira novamente: ");
        fflush(stdin);
		scanf("%[^\n]s",&cidade[i].nome);
        }
		
        cidade[i].id[i] = j;

        char resposta;
        do{
            printf("Deseja cadastrar outra cidade? (S ou N) ");
        scanf(" %c", &resposta);

        int cont = 0;
        if(cont>=1){
            printf("Resposta invalida, insira novamente: ");
        scanf(" %c", &resposta);
        }
        cont++;
        }
        while(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n');

        int k = 0;
        for(k=0;k<strlen(cidade[i].nome);k++){
		cidade[i].nome[k] = toupper(cidade[i].nome[k]);
	}

        tam_id++;

        if(resposta == 'N' || resposta == 'n'){
            i =+ 10;
        }
	}
    
    i = 0;
    for(i=0;i<tam_id;i++){
		printf("nome: %s\n",cidade[i].nome);
		printf("id: %d\n",cidade[i].id[i]);	
    }

    cidade[0].tam_struct = tam_id;
}


Presidente dados_presidente(){
    int i=0;

    printf("Insira os dados do presidente: \n");
    printf("Nome: ");
		fflush(stdin);
		scanf("%[^\n]s",&presidente.nome);

    
    for(i=0;i<strlen(presidente.nome);i++){
			presidente.nome[i] = tolower(presidente.nome[i]);
	}

    presidente.nome[0] = toupper(presidente.nome[0]);
    for(i=0;i<strlen(presidente.nome);i++){
		if(presidente.nome[i]==' '){
			presidente.nome[i+1] = toupper(presidente.nome[i+1]);
		}
	}

    printf("Insira a idade do presidente: ");
    scanf("%d", &presidente.idade);
		
	while(presidente.idade < 30 || presidente.idade > 70){
        printf("Idade invalida, insira novamente: ");
        scanf("%d", &presidente.idade);
    }

    printf("Nacionalidade: ");
		fflush(stdin);
		scanf("%[^\n]s",&presidente.nacionalidade);
    presidente.nacionalidade[0] = toupper(presidente.nacionalidade[0]);

    printf("% s\n", presidente.nome);
    printf("%d\n", presidente.idade);
    printf("% s\n", presidente.nacionalidade);

    return presidente;
}
