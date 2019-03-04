/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na pr�xima linha, deve-se mostrar a 
m�dia de todos os valores positivos digitados, com um d�gito ap�s o ponto decimal.
---Entrada---
A entrada cont�m 6 n�meros que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes n�meros ser� positivo.
---Sa�da----
O primeiro valor de sa�da � a quantidade de valores positivos. A pr�xima linha deve mostrar a m�dia dos valores positivos 
digitados*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	float vetor[6];
	int i,cont=0;
	float media=0,soma=0;
	float *guarda_valor;
	
	for(i=0;i<6;i++){
		scanf("%f",&vetor[i]);
		if(vetor[i]>0.0){
			cont++;
		}
	}
	guarda_valor = (float*)malloc(cont * sizeof(float));
	
	for(i=0;i<6;i++)
	{
		if(vetor[i]>0.0){
			guarda_valor[i] = vetor[i];
			soma+=guarda_valor[i];
		}
	}
	media = soma/cont;
	
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",media);
	return 0;
}

