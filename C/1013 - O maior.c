/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:
MaiorAB = (a+b+abs(a-b))/2
---Entrada---
O arquivo de entrada cont�m tr�s valores inteiros.
---Sa�da---
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".
Sacada do exerc�cio: Calcular duas vezes o maior valor uma vez com A e B e o resultado com o valor de C*/
#include <stdio.h>
#include <math.h>

int main()
{	
	int a,b,c;
	int MaiorAB;
	scanf("%d %d %d",&a,&b,&c);
	
	MaiorAB = (a+b+abs(a-b))/2;
	MaiorAB = (MaiorAB+c+abs(MaiorAB-c))/2;
	
	printf("%d eh o maior\n",MaiorAB);
	
	return 0;
}
