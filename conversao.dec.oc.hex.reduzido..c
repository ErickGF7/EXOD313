#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Escreva qualquer n�mero:\n");
	scanf("%d", &num);
	printf("Decimal: %d.\nOctal: %o\nHexadecimal: %x\n", num, num, num);
	return 0;
}