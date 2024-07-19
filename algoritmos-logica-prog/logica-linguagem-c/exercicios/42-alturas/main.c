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
    int N, i;
    
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double vet[N];
    char nomes[N][50];
    int idades[N];
    double alturas[N];
    
    for(i = 0; i < N; i++){
        printf("Digite os dados da %da pessoa\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    
    double soma = 0;
    for(i = 0; i < N; i++){
        soma = soma + alturas[i];
    }
    double media = (double) soma / N;
    printf("\nAltura media: %.2lf\n", media);
    
    int cont = 0;
    for(i = 0; i < N; i++){
        if(idades[i] < 16){
            cont = cont + 1;
        }
    }
    double menores = (double) cont / N;
    printf("Pessoas com menos de 16 anos: %.1lf\n %%", menores*100);
   
   for(i = 0; i < N; i++){
        if(idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
