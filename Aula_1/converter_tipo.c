#include <stdio.h>

//exemplificr com o erro

int main() {
    int num1 = 7, num2 = 2;
    float resultado;
    
	//resultado = num1 / num2;
	
	 // Conversão de tipo explícita
    resultado = (float) num1 / num2;
	
    printf("Resultado da divisao: %.2f\n", resultado);
    return 0;
}

