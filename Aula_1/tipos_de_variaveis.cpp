#include <stdio.h>

//Nosso objetivo será demonstrar os varios tipos de variaveis

int main(){
	int inteiro = 2;
	float decimal = 3.14159;
	double decimal_maior = 3.14159648;
	char caracter = 'A';
	char caracter_m[20] = "JOAO MARIA";
	
	printf("tipo inteiro -> %d\n",inteiro);
	printf("tipo float   -> %f\n", decimal);
	printf("tipo double  -> %lf\n", decimal_maior);
	printf("tipo char    -> %c\n", caracter);
	printf("tipo char    -> %s\n", caracter_m);	
	
	return 0;
}
