#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {

int a, b, c;
float r1, r2, r3, r4;

setlocale(LC_ALL,"Portuguese_Brazil");

printf("Resolução de fórmulas \n");

printf("\nInforme o valor de A: ");
scanf("%d",&a);
printf("Informe o valor de B: ");
scanf("%d",&b);
printf("Informa o valor de C: ");
scanf("%d",&c);

//formulas

//#1 

r1 = (a*b)/c;

//#2

r2 = a^2 + b + 5*c;

//#3

r3 = a * b * c + b + c/3 * 5 - 1;

//#4 

r4 = (a*b*c)^3 / 2;

//respostas 

printf("\nA primeira fórmula tem como resposta: %.2f",r1);
printf("\nA segunda fórmula tem como resposta: %.2f",r2);
printf("\nA terceira fórmula tem como resposta: %.2f",r3);
printf("\nA quarta fórmula tem como resposta: %.2f",r4);


}
