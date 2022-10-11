#include<stdio.h>
#include<locale.h>

int main() {

int m,s;

setlocale(LC_ALL,"Portuguese_Brazil");

printf("Conversor de minutos para segundos \n");
printf("Insira a quantidade de minutos: ");
scanf("%d",&m);

s = m * 60;

printf("\n%d minutos tem %d segundos.",m,s);


return 0;

}
