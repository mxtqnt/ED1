//arquivo Quadrado.h

typedef struct quadrado Quadrado;

//Cria um novo quadrado
Quadrado* quadrado_cria(float a);

//libera quadrado
void quadrado_libera(Quadrado* c);

//Acessa o valor "a" de quadrado
float quadrado_acessa(Quadrado* c);

// Atribui o valor a de um quadrado
void quadrado_atribui(Quadrado* c, float a);

// calucla area do quadrado
float quadrado_area(Quadrado* c);

//calcula o perimetro de um quadrado
float quadrado_perimetro(Quadrado* c);

