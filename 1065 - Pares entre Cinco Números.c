/*Fa�a um programa que leia 5 valores inteiros. Conte quantos destes valores digitados s�o pares e mostre esta informa��o.
--Entrada--
O arquivo de entrada cont�m 5 valores inteiros quaisquer.
--Sa�da---
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.*/

#include <stdio.h>

int main()
{
	int N[5],i,cont=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&N[i]);
		if(N[i]%2==0){
			cont++;
		}
	}
	printf("%d valores pares\n",cont);
	return 0;
}
