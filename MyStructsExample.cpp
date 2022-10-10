#include <stdio.h>
#include <stdlib.h>

struct endereco{
	char rua[50];
	int zip[8];
	int number[5];
};

int main(){
	struct endereco Matheus;
	Matheus.rua=[0]"Rua Presidente Joao Goulart";
	Matheus.zip=[0]06422010;
	Matheus.number=[0]10;
	
	printf("Endereco do Matheus: Rua: %s,numero: %d, zip: %d",Matheus.rua,Matheus.number=10,Matheus.zip);
	return 0;
}
