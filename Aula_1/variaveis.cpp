#include <stdio.h>

//n�o h� necessidade de definir um tipo 
#define PI 3.141596


const double pi = 3.141596;

int main(){
	int raio;
	float area;
	
	printf("O raio do circulo �:\n");
	scanf("%d", &raio);
	
	area = PI * raio * raio;
	printf("A area do circulo e %.2f", area);
	
	
}
