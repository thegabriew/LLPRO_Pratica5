#include<stdio.h>
#include<locale.h>

int main() {

int a,b, so,sub,div,mul;

setlocale(LC_ALL,"Portuguese_Brazil");

printf("Calculadora das opera��es b�sicas \n");
printf("\nInsira um n�mero: ");
scanf("%d",&a);
printf("Insira outro n�mero: ");
scanf("%d",&b);

so = a + b;
sub = a - b;
div = a / b;
mul = a * b;

printf("\n%d + %d = %d\n",a,b,so);
printf("%d - %d = %d\n",a,b,sub);
printf("%d x %d = %d\n",a,b,mul);
printf("%d / %d = %d\n",a,b,div);


return 0;

}
