#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {

float peso, altura, imc;

setlocale(LC_ALL,"Portuguese_Brazil");

printf("Calculadora de IMC \n");
printf("\nA altura deve ser dada em cm e o peso em kg\n");

printf("\nInsira seu peso: ");
scanf("%f",&peso);
printf("Insira sua altura: ");
scanf("%f",&altura);

imc = peso/ altura * altura ;

printf("\nSeu IMC é de %.3f",imc);


}
