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
    int N;
    double media, soma;
    printf("Quantos alunos serao digitados: ");
    scanf("%d", &N);
    
    char nomes[N][50];
    double notas1[N];
    double notas2[N];
    
    for(int i = 0; i < N; i++){
        printf("Digite o nome, a primeira e segunda nota do %do aluno: \n", i + 1);
        limpar_entrada();
        ler_texto(nomes[i], 50);
        scanf("%lf", &notas1[i]);
        scanf("%lf", &notas2[i]);
    }
    
    printf("\nAlunos aprovados: \n");
    for(int i = 0; i < N; i++){
        soma = notas1[i] + notas2[i];
        media = soma / 2;
        if(media >= 6){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
