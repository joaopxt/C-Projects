#include <stdio.h>
 
int le_valida_ano();
 
int main() {
    
    char nome[69], endereco[51], comp[51], bairro[51], estado[51], cidade[50], cpf[12], cnpj[19], insc[16], insc1[12], cnae[11], datanasc[11], boleto[4], email[35], contrsp[16], data[11], placa[8], modelo[41], cor[20];
    int numcasa, cep, ddd, telefixo, celular, ano, telecome, anocarro;
    
    


    
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\tDADOS DO CREDENCIADO\t\t\t\t\t\t");
    printf("\n\n");
    
    printf("Qual seu Nome Completo: \n");
    scanf("%[^\n]s",nome);
    fflush(stdin);
    
    
    printf("Endereco: \n");
    scanf("%[^\n]s",endereco);
    fflush(stdin);
    
    
    printf("Numero da Casa ou Apt: \n");
    scanf("%d", &numcasa);
    fflush(stdin);
    
    
    printf("Complemento do Endereco: \n");
    scanf("%[^\n]s",comp);
    fflush(stdin);
    
    
    printf("Bairro do seu Endereco: \n");
    scanf("%[^\n]s",bairro);
    fflush(stdin);

    
    printf("CEP: \n");
    scanf("%d", &cep);
    fflush(stdin);
    
    
    printf("Estado: \n");
    scanf("%[^\n]s",estado); 
    fflush(stdin);
  
    
    printf("Cidade: \n");
    scanf("%[^\n]s",cidade);
    fflush(stdin);
    
    
    printf("DDD: \n");
    scanf("%d", &ddd);
    
    
    printf("Telefone Residencial ou Comercial: \n (Caso nao deseje digite 0 ) \n");
    scanf("%d", &telefixo);
    
        if(telefixo > 1){
        
        }
        else{
            
            }
    
    
    printf("Celular: \n (Caso nao deseje digite 0 ) \n");
    scanf("%d", &celular);
    
        if(telefixo > 1){
        
        }
        else{
        }
    
    fflush(stdin);
    
    printf("CPF: \n");
    scanf("%[^\n]s",cpf);
    fflush(stdin);
    
    
    printf("CNPJ: \n");
    scanf("%[^\n]s",cnpj);
    fflush(stdin);
    
    
    printf("Insc.Estadual: (Preenchimento exclusivo PJ.)\n");
    scanf("%[^\n]s",insc);
    fflush(stdin);
   
    
    printf("Insc.Municipal: (Preenchimento exclusivo PJ.)\n");
    scanf("%[^\n]s",insc1);
    fflush(stdin);
    
    
    printf("CNAE: (Preenchimento exclusivo PJ.) \n");
    scanf("%[^\n]s",cnae);
    fflush(stdin);
    
    
    printf("Data de Nascimento: (05/05/22) \n");
    scanf("%[^\n]s",datanasc);
    fflush(stdin);
    
    
    
    printf("Deseja receber os proximos boletos por e-mail ?(Sim ou Nao) \n");
    scanf("%[^\n]s",boleto);
    fflush(stdin);
    
    
    printf("E-mail: \n");
    scanf("%[^\n]s",email);
    fflush(stdin);
    
    
    printf("Contato do Responsavel: (Preenchimento exclusivo PJ.) \n");
    scanf("%[^\n]s",contrsp);
    fflush(stdin);
    
    
    printf("Telefone Comercial: \n (Caso nao deseje digite 0 ) \n");
    scanf("%d", &telecome);
    
        
    fflush(stdin);
    
    printf("Data de Hoje: (05/05/22)\n");
    scanf("%[^\n]s",data);
    fflush(stdin);

    
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\tDADOS DO VEICULO\t\t\t\t\t\t");
    printf("\n\n");
    
    
    printf("Placa do veiculo: \n");
    scanf("%[^\n]s",placa);
    fflush(stdin);
    
    
    printf("Modelo: \n");
    scanf("%[^\n]s",modelo);
    fflush(stdin);
    
    
    printf("Ano: \n");
    le_valida_ano();
    
    scanf("%d", &ano);
    fflush(stdin);
    
    
    printf("Cor: \n");
    scanf("%[^\n]s",cor);
    
    
    
    
    
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\tCADASTRO\t\t\t\t\t\t");
    printf("\n\n");
    
    printf("  |Nome: %s | \n", nome);
    printf("  |Endereco: %s| \n", endereco);
    printf("  |O numero da Casa ou Apt: %d | Complemento do Endereco: %s | Bairro do seu Endereco: %s |\n", numcasa, comp, bairro);
    printf("  |CEP: %d | Estado: %s | Cidade: %s | \n", cep, estado, cidade);
    printf("  |DDD: %d |Telefone Fixo ou Comercial: %d | Celular: %d | \n", ddd, telefixo, celular);
    printf("  |CPF: %s |CNPJ: %s| \n", cpf, cnpj);
    printf("  |Insc.Estadual: %s |Insc.Municipal: %s | \n", insc, insc1);
    printf("  |CNAE: %s | Data de Nascimento: %s | Manda Boleto por Email: %s | \n", cnae, datanasc, boleto);
    printf("  |E-mail: %s | \n", email);
    printf("  |Contato do Responsavel: %s | Telefone Comercial: %d | \n", contrsp, telecome);
    printf("  |Data de Hoje: %s |\n", data);
    
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\tDADOS DO VEICULO\t\t\t\t\t\t");
    printf("\n\n");
    printf("  |Placa do veiculo: %s |Modelo: %s |Ano: %d |Cor: %s | \n\n\n\n\n", placa, modelo, ano, cor);
     
    
    return 0;
}

int le_valida_ano(){
	int ano;

    scanf("%d", &ano);
		
	while(ano < 1903 || ano > 2003){
        printf("Ano invalido, insira novamente: ");
        scanf("%d", &ano);
    }
              	
	return ano;
}