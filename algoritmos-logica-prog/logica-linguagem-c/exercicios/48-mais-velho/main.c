#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, maisVelho, posicao;
    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);
    
    char nomes[N][50];
    int idades[N];
    
    for(int i = 0; i < N; i++){
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }
    
    maisVelho = 0;
    for(int i = 0; i < N; i++){
        if(idades[i] > maisVelho){
            maisVelho = idades[i];
            posicao = i;
        }
    }
    
    printf("\nPessoa mais velha: %s", nomes[posicao]);

    return 0;
}
