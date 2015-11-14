/* Arquivo que guarda as estruturas utilizadas no programa */


/* CONTROLE DE DATAS ****************************/
typedef struct
{
	int id;
	int dia;
	int mes;
	int ano;
}Data;

/* CONTROLE DE ENDEREÇOS ************************/
typedef struct
{
	int id;
	char cidade[50];
	int cep;
	char bairro[100];
	int numero;
	char estado[50];
}Endereco;

/* CONTROLE DE ALUNOS ***************************/
typedef struct
{
	int matricula;
	int cpfAluno;
	int rgAluno;
	int foneAluno;
	int emailAluno;
	char nome[100];
	char sexo[2];
	char estadoCivil[15];
   Data data;
   char nomeMae[100];
   char nomePai[100];
   Endereco endereco[100];
}Aluno;

/* CONTROLE DE PROFESSORES **********************/
typedef struct
{
	int codigo;
	int cpfProfessor;
	int rgProfessor;
	int foneProfessor;
	int emailProfessor;
	int ctps;
	char nome[100];
	char sexo[2];
	char estadoCivil[15];
   Data data;
   char nomeMae[100];
   char nomePai[100];
   Endereco endereco[100];
}Professor;

/* CONTROLE DE DISCIPLINAS **********************/
typedef struct
{
	int cod;
	char nomeDisciplina[50];
	int cargaHoraria;
	char ementa[100];
}Disciplina;

/* CONTROLE DE TURMAS ***************************/
typedef struct
{
	int cod;
	char nomeTurma[50];
	Aluno alunos[50];
	Professor professores[10];
}Turma;

/* CONTROLE DE USUARIOS **************************/
typedef struct
{
	int id;
	char login[50];
	int senha;
}Usuario;
