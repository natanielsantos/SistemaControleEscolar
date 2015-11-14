#include "estruturas.c"
#include <stdio.h>
#include <stdlib.h>

/* MENU DE AUTENTICACAO */

int menuLogin(){

	int op;
	printf("SEJA BEM VINDO:\n");
	printf("1 - Fazer Cadastro\n"); /*cadastraLogin()*/
	printf("2 - Fazer Login\n"); /* verificaLogin()*/
	printf("0 - Sair\n"); /* fecha o sistema*/
	printf("Opcao: ");
	scanf("%d",&op);

   return op;
}
 /* CADASTRA USUARIO */

 void cadastraLogin(Usuario user[]){

     int i=0;
     char saida[2];

     do{

      printf("CADASTRA UM USUARIO AGORA: \n");
		printf("Login: ");
		scanf("%s",user[i].login);
		printf("Senha (somente numeros): ");
		scanf("%d",&user[i].senha);
		fflush(stdin);
      i++;


      printf("Deseja cadastrar outro? (s/n)\n");
      scanf("%c",saida);

     }while(strcmp(saida,"s")==0);

		system("cls");
 }

/* VERIFICA USUARIO */
int verificaLogin(Usuario user[]){

   char login[100];
   int senha,i,aux=0;
	printf("INFORME OS DADOS PARA LOGAR\n\n");

	printf("Digite o login: ");
	scanf("%s",login);
	printf("Digite a senha: ");
	scanf("%d",&senha);

	for(i=0;i<2;i++){
	if( (strcmp(user[i].login,login) == 0) && (user[i].senha == senha) )
	{
      aux=1;
	}
	}

	if(aux>0){
		printf("Nataniel e um genio!!\n ");
	}

	return aux;
}



/* MENU PRINCIPAL */
int menuPrincipal(){

   int op;
	printf("ESCOLHA UMA OPCAO:\n");
	printf("1 - Cadastro\n");
	printf("2 - Consulta\n");
	printf("3 - Suporte\n");
	printf("0 - Sair\n");
	printf("opcao: ");
	scanf("%d",&op);

   return op;
}
