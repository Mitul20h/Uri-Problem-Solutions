/*Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o 
caso.
---Entrada---
A entrada ser� um valor inteiro positivo.
---Sa�da---
A sa�da ser� uma sequ�ncia de seis n�meros �mpares.*/

#include <stdio.h>

int main()
{
	int X,i,cont;
	scanf("%d",&X);
	
	i = X;
	cont =0;
	while(cont<6)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			cont++;	
		}
		i++;
	}
	return 0;
}
