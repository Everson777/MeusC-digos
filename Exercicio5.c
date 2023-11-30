#include <stdio.h>
#include <string.h>

struct dados_usuario
{
    char nome[300];
    int idade;
    float notas[2];
    float media;
  float soma;
};
int main()
{
    struct dados_usuario pessoa[3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do %dº aluno:", i + 1);
        gets(pessoa[i].nome);

        printf("\nDigite sua idade:", i + 1);
        scanf("%d", &pessoa[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite sua %dº nota:", j + 1);
            scanf("%f", &pessoa[i].notas[j]);
        
        pessoa[i].media = pessoa[i].soma / 3;
        
        }
        system("cls");

        fflush(stdin);
    }
     pessoa[i].soma += pessoa[i].notas;
    printf("\nExibindo dados do aluno...");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome:%s", pessoa[i].nome);
        printf("\n\nIdade:%d", pessoa[i].idade);

        for (j = 0; j < 2; j ++)
        {
            printf("\n\nNotas:%.2f", pessoa[i].notas[j]);
        }
            printf("\n\n Media:%.2f", pessoa[i].media);
    }


  return 0;

}