#include <stdio.h>
#include<stdlib.h>

struct ponto{
    float x;
    float y;
};

typedef struct ponto Ponto;

int main()
{
    
    Ponto *p = (Ponto*) malloc(sizeof(Ponto)); /* Um ponteiro apontando para um estrutura dinamicamente */
    p->x = 1; /* Atribuição da variavel */
    p->y = 5;

    printf("Ponto = (%.1f, %.1f)", p->x, p->y);
    return 0;
}
