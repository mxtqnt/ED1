#include <stdio.h>
#include <stdlib.h>
#include "Quadrado.h"

int main(){
    float area, perimetro;
    Quadrado* c1;
    c1=quadrado_cria(2.0);
    area = quadrado_area(c1);
    printf("A area do quadrado eh: %f\n", area);
    perimetro=quadrado_perimetro(c1);
    printf("O perimetro do quadrado eh: %f\n", perimetro);
    
    return 0;

}


