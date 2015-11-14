#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{

	int i,op,logar;
	Usuario usuario[50]; /* grava usuarios*/
	Aluno alunos[50]; /* grava alunos*/
	Professor professores[50]; /*grava professores*/

	op=menuLogin();

   switch(op){

	case 1:
		cadastraLogin(usuario);
		break;
	case 2:
		printf("Consulta\n");
		break;
	default :
		printf("Invalido\n");
		break;
   }

   logar = verificaLogin(usuario);

   if(logar){ /* CASO O USUARIO ESTEJA LOGADO */

	op=menuPrincipal();

   switch(op){

	case 1:
		printf("Cadastro\n");
		break;
	case 2:
		printf("Consulta\n");
		break;
	case 3:
		printf("Suporte\n");
		break;
	case 0:
		printf("Sair\n");
		break;
	default :
		printf("Invalido\n");
		break;
   }

    for(i=0;i<2;i++){
		printf("Matricula do Aluno: ");
		scanf("%d",&alunos[i].matricula);
		printf("CPF do Aluno: ");
		scanf("%d",&alunos[i].cpfAluno);
		printf("RG do Aluno: ");
		scanf("%d",&alunos[i].rgAluno);
		printf("Telefone do Aluno: ");
		scanf("%d",&alunos[i].foneAluno);
    }

   }else
      printf("Usuário inválido!\n");
   {
   }


}
