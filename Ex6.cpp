#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {

int base, altura, area;

setlocale(LC_ALL,"Portuguese_Brazil");

printf("Calculadora de �rea do tri�ngulo \n");

printf("Insira o valor da base: ");
scanf("%d",&base);
printf("Insira o valor da altura: ");
scanf("%d",&altura);

area = (base * altura)/2;

printf("A area do triangulo � %d",area);

}
