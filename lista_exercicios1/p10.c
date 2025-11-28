#include <stdio.h>
#include <math.h>


int main(void)
{
    double a, b, c;
    printf("Digite três valores reais inteiros, separados por espaço, para calcularmos Bhaskara: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta;
    double raiz1, raiz2; 
    delta = (b * b) - 4 * a * c;

    if ( a == 0 || delta < 0  )
    {
        printf("Impossível calcular! \n");
    }
    else
    {
        raiz1 = (-b + sqrt(delta) ) / (double) (2 * a);
        raiz2 = (-b  - sqrt(delta)) / (double) (2 * a);

        printf("As raízes reais dos coeficientes fornecidos é X1 = %.1lf e X2 = %.1lf \n",  raiz1, raiz2);
    }
    
    return 0;
}


