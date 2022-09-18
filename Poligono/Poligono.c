#include <stdio.h>
#include <stdlib.h>
#include "Poligono.h"

Poligono* poligono_cria(float *a, int qtdl){
  Poligono* c = (Poligono *)malloc(sizeof(Poligono)) 
  if(c!= NULL){
    c->a=a;
    c->qtdl=qtdl;
  };
return c;  
};

