/*Leia um valor inteiro correspondente � idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o c�lculo, considere todo ano com 365 dias e todo m�s com 30 dias. 
Nos casos de teste nunca haver� uma situa��o que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este � apenas um exerc�cio com objetivo de testar racioc�nio matem�tico simples.
---Entrada---
O arquivo de entrada cont�m um valor inteiro.
--Sa�da---
Imprima a sa�da conforme exemplo fornecido.*/

#include <stdio.h>

int main()
{
	int idade;
	int ano;
	int dia;
	int mes;
	
	scanf("%d",&idade);
	
	ano = idade/365;
	mes = (idade - (365 * ano))/30;
	dia = (idade - (365*ano) - (30 * mes));
	
	printf("%d ano(s)\n",ano);
	printf("%d mes(es)\n",mes);
	printf("%d dia(s)\n",dia);
	
	return 0;
}
