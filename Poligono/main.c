#include <stdio.h>
#include <stdlib.h>
#include "Poligono.h"

int main(){
    float  perimetro;
    Poligono* c1;
    float lados[]={3.1,4.4,5.3,6.3};
    //float *lados;
    //lados=malloc(4*sizeof(float));
    //lados[0]=3.1; lados[1]=4.4; lados[2]=5.3; lados[3]=6.3;
    c1=poligono_cria(lados, 4);

    perimetro=poligono_perimetro(c1);
    printf("O perimetro do poligono eh: %f\n", perimetro);
    poligono_libera(c1);    
    return 0;

}

