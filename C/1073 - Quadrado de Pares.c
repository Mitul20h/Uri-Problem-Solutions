/*Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.
---Entrada---
A entrada cont�m um valor inteiro N (5 < N < 2000).
---Sa�da---
Imprima o quadrado de cada um dos valores pares, de 1 at� N, conforme o exemplo abaixo.
Tome cuidado! Algumas linguagens tem por padr�o apresentarem como sa�da 1e+006 ao inv�s de 1000000 o que ocasionar� resposta errada. 
Neste caso, configure a precis�o adequadamente para que isso n�o ocorra.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N,i,auxiliar_um;
	scanf("%d",&N);
	int cont=0;
	
	
	for(i=1;i<=N;i++)
	{
		if(i%2==0){
			printf("%d^2 = %.0f\n",i,pow(i,2));
		}
	}

}
