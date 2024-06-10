#include <stdio.h>
float CalcularMax ( float x, float y);
float CalcularNota ( float p1, float p2, float p3);

int main(void){
    char c;
    do
    {
        float parcial1, parcial2, examen, final;
        /*leer valores*/
        printf("Introduzca la nota parcial 1 [0, 10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca la nota parcial 2 [0, 10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca la nota examen final [0, 10]: ");
        scanf("%f", &examen );
        /*Calcular nota final*/
        final = CalcularNota(parcial1, parcial2, examen);

        /*Imprimir resultado*/
        printf("La nota final %f", final);

        /*Continuar?*/
        printf("\n\n Salir? (s/n): ");

        /*Para evitar conflictos con el salto de linea y evitar un bucle infinito recurre al siguiente truco*/
        do
        {
            scanf("%c", &c);
        } while (c == '\n');
        printf("\n");
        
    } while (c != 's');
    
    return 0;
}

float CalcularNota( float p1, float p2, float nonatexamen){
    float notaEc, final;
    notaEc = p1*0.2+p2*0.2+nonatexamen*0.6;
    final = CalcularMax(notaEc, nonatexamen);
    return final;
}

float CalcularMax(float x, float y){
    float max;
    if (x >= y){
        max = x;
    }
    else{
        max = y;
    }
    return max;
}