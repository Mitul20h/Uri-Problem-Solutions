/*Com base na tabela abaixo, escreva um programa que leia o c�digo de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
#define CACHORRO_QUENTE 4.00
#define X_SALADA 4.50
#define X_BACON 5.00
#define TORRADA_SIMPLES 2.00
#define REFRIGERANTE 1.50
---Entrada---
O arquivo de entrada cont�m dois valores inteiros correspondentes ao c�digo e � quantidade de um item conforme tabela acima.
---Sa�da---
O arquivo de sa�da deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas ap�s o ponto decimal.
Observa��o feita nesta submiss�o: O Uri n�o aceita "#define"*/

#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float total;
	scanf("%d",&codigo);
	scanf("%d",&quantidade);
	if(codigo==1)
	{
		total = 4.00*quantidade;	
	}else if(codigo==2){
		total = 4.50*quantidade;
	}else if(codigo==3){
		total = 5.00*quantidade;
	}else if(codigo==4)
	{
		total = 2.00*quantidade;
	}else if(codigo==5)
	{
		total = 1.50*quantidade;
	}
	
	printf("Total: R$ %.2f\n",total);
	
	return 0;
}
