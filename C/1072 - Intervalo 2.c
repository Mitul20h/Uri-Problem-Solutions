/*Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.
---Entrada---
A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
---Sa�da---
Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *X,i,dentro_intervalo=0,fora_intervalo=0;
	int N;
	scanf("%d",&N);
	X = (int*)malloc(N*sizeof(int));
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&X[i]);
		if(X[i]>=10 && X[i]<=20)
		{
			dentro_intervalo++;	
		}else{
			fora_intervalo++;
		}
	}
	printf("%d in\n%d out\n",dentro_intervalo,fora_intervalo);
	return 0;
}
