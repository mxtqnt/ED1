
//arquivo Poligono.h

typedef struct poligono Poligono;

//Cria um novo poligono
Poligono* poligono_cria(float *a, int qtdl);

//libera poligono
void poligono_libera(Poligono* c);

//calcula o perimetro de um poligono
float poligono_perimetro(Poligono* c);

