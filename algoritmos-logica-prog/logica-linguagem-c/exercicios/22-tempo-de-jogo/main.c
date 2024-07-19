#include <stdio.h>

int main()
{
    int h1, h2, horas;
    
    printf("Hora inicial: ");
    scanf("%d", &h1);
    printf("Hora Final: ");
    scanf("%d", &h2);
    
    if(h1 == h2){
        printf("O jogo durou 24 hora(s).");
    }else if(h1 < h2){
        horas = h2 - h1;
        printf("O jogo durou %d hora(s).", horas);
    }else{
        horas = h1 - h2 - 4;
        printf("O jogo durou %d hora(s).", horas);
    }
    return 0;
}
