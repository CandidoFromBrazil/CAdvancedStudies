#include <stdio.h>
#include <stdlib.h>

struct departamento { //struct 1
	int cod;
	char descricao[30];
};

struct cargo { //struct 2
       int cod;
       char descricao[30];
};
 
struct funcionario { //struct 3 (aninhada)
       int cod;
       char nome[30];
       float salario;
       struct departamento depto;
       struct cargo cargo;
};

int main(void)
{
	struct funcionario Funcionario;  //struct aninhada ligada a variável Funcionario 
	Funcionario.nome[0] = "Matheus";
	Funcionario.nome[1] = "Willians";
	Funcionario.nome[2] = "Fernandes";
	Funcionario.nome[3] = "Candido";
	Funcionario.depto.cod = 1209;
    printf("%d\n", Funcionario.depto.cod);
}

//Nas linhas 4 e 7, foi declarada a estrutura departamento.
//Nas linhas 9 e 12, foi declarada a estrutura cargo.
//Nas linhas 14 e 20, foi declarada a estrutura funcionário.
//Na linha 18, o campo depto é do tipo struct departamento.
//Na linha 19, o campo cargo, da mesma forma que o campo depto, é do tipo struct cargo.
