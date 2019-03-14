/*Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre: 
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura. 
b) a �rea do c�rculo de raio C. (pi = 3.14159) 
c) a �rea do trap�zio que tem A e B por bases e C por altura. 
d) a �rea do quadrado que tem lado B. 
e) a �rea do ret�ngulo que tem lados A e B. 
---Entrada---
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.
---Sa�da---
O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, sempre com mensagem correspondente e um 
espa�o entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.*/

#include <stdio.h>
int main()
{
	double A,B,C;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	
	printf("TRIANGULO: %.3lf\n",(A*C)/2);
	printf("CIRCULO: %.3lf\n",(C*C* 3.14159));
	printf("TRAPEZIO: %.3lf\n",((A+B)*C)/2);
	printf("QUADRADO: %.3lf\n",(B*B));
	printf("RETANGULO: %.3lf\n",(A*B));
	return 0;
}
