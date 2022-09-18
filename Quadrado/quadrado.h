#include "Quadrado.h"
#include <stdlib.h>

struct quadrado {
float a;
};

Quadrado* quadrado_cria(float a){
  // * depois do quadrado informa que é uma variavel de ponteiro
  Quadrado* c = (Quadrado*)malloc(sizeof(Quadrado));
  if (c!=NULL){
    c -> a = a; // atribuindo algo para o valor a da struct c 
  } 
return c; 
  }

void quadrado_libera(Quadrado*c){
  free(c);
}

float quadrado_acessa(Quadrado*c){
  return c->a;
}

void quadrado_atribui(Quadrado*c, float a){
  c->a=a;
}

float quadrado_area(Quadrado*c){
  return c->a*c->a;
}

float quadrado_perimetro(Quadrado*c){
   return c->a*4;
}

