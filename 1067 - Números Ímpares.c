/*Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.
---Entrada---
O arquivo de entrada cont�m 1 valor inteiro qualquer.
---Sa�da---
Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.*/

#include <stdio.h>

int main()
{
	int X,i;
	scanf("%d",&X);
	for(i=0;i<=X;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
}
