#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura, peso, inmc;
	printf("Teste de IMC:\n");
	printf("Digite sua altura(0,00):\n");
	scanf("%f", &altura);
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	
	inmc = (peso/(altura*altura));
	printf("Seu IMC é %f\n", inmc);
	if(inmc<18.5){
		printf("Abaixo do peso ideal\n");
	}else{
		if(inmc>24.9){
			printf("Acima do peso ideal.\n");	
		}else{
			printf("Peso ideal.\n");
	   	}
	}
	return 0;
}