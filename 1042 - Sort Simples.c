/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores 
em ordem crescente, uma linha em branco e em seguida,os valores na sequ�ncia como 
foram lidos.
---Entrada--
A entrada contem tr�s n�meros inteiros.
---Sa�da---
Imprima a sa�da conforme foi especificado.*/

#include <stdio.h>

int main()
{
	int vetor[3];
	int aux[3],auxiliar;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&vetor[i]);
		aux[i] = vetor[i];	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			 if ( vetor[i] > vetor[j] )
     		 {
         		auxiliar = vetor[i]; //Recebe o valor anterior que ser� trocado, pois ele � maior ---> Anterior| Pr�ximo
         		vetor[i] = vetor[j]; //Colocando o valor pr�ximo, na posi��o do anterior, pois ele � menor
         		vetor[j] = auxiliar; //Colocando o valor anterior no lugar do pr�ximo, troca efetuada 
      		 }
    	}
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",vetor[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",aux[i]);	
	}
	return 0;	
}
