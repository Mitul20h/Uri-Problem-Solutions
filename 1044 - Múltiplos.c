/*Leia 2 valores inteiros (A e B). Ap�s, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", 
indicando se os valores lidos s�o m�ltiplos entre si.
---Entrada---
A entrada cont�m valores inteiros.
---Sa�da---
A sa�da deve conter uma das mensagens conforme descrito acima.*/

#include <stdio.h>

int main()
{
	int A,B;
	
	scanf("%d %d",&A,&B);
	
	if(A%B==0 || B%A==0)
	{
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
