/*Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, mostre a mensagem 
correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.
---Entrada---
Leia tr�s valores de ponto flutuante (double) A, B e C.
---Sa�da---
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima o resultado das ra�zes com 5 
d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.*/
#include <stdio.h>
#include <math.h>

int main()
{
	double A,B,C;
	scanf("%lf %lf %lf",&A,&B,&C);
	double raiz1,raiz2;
	double delta;
	double zero;
	delta = ((pow(B,2)-(4*A*C)));
	zero = 2.00* A;
	
	if(delta<0.00 || zero==0.00)
	{
		printf("Impossivel calcular\n");
	}else{
	
	raiz1 = (-B + (sqrt((pow(B,2)-4*A*C))))/(2*A);
	raiz2 = (-B- (sqrt((pow(B,2)-4*A*C))))/(2*A);
	
	printf("R1 = %.5lf\nR2 = %.5lf\n",raiz1,raiz2);
	
	}
	
}
