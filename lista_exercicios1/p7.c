#include <stdio.h>

int main(void)
{
    int valor1, valor2, valor3;
    int maior, menor, intermediario; 

    printf("Digite o valor do primeiro valor: \n");
    scanf("%i", &valor1);

    printf("Digite o valor do segundo valor: \n");
    scanf("%i", &valor2);

    printf("Digite o valor do terceiro valor: \n");
    scanf("%i", &valor3);

    if (valor1 <= valor2 && valor1 <= valor3) {
        menor = valor1;
    }
    else if (valor2 <= valor1 && valor2 <= valor3) {
        menor = valor2;
    }
    else {
        menor = valor3;
    }

    if (valor1 >= valor2 && valor1 >= valor3) {
        maior = valor1;
    }
    else if (valor2 >= valor1 && valor2 >= valor3) {
        maior = valor2;
    }
    else {
        maior = valor3;
    }
    
    intermediario = valor1 + valor2 + valor3 - maior - menor;

    printf("Os três números em ordem crescente são: %d ,  %d , %d \n" , menor, intermediario, maior);
    printf("\n");
    printf("Os três números na ordem inicial é: %d, %d, %d \n" , valor1, valor2, valor3);

    return 0;

}