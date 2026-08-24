#include <stdio.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
    float peso;
}PESSOA;
PESSOA jose;

int main()
{
    printf("-------------------------------\n");
    printf("1: Cadastro de pessoa\n");
    printf("2: Imprime o cadastro de pessoa\n");
    printf("3: Para Sair\n");
    printf("--------------------------------\n");

    printf("Digite a opção desejada: ");
    int opcao;
    scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Digite o nome: ");
                scanf("%s", jose.nome);
                printf("Digite a idade: ");
                scanf("%d", &jose.idade);
                printf("Digite a altura: ");
                scanf("%f", &jose.altura);
                printf("Digite o peso: ");
                scanf("%f", &jose.peso);
                break;
            case 2:
                printf("Nome: %s\n", jose.nome);
                printf("Idade: %d\n", jose.idade);
                printf("Altura: %.2f\n", jose.altura);
                printf("Peso: %.2f\n", jose.peso);
                break;
            case 3:
            printf("Saindo do programa...\n");
            break;
            default:
                printf("Opção Inválida!\n");
        }
        while(1)
        {
            if(opcao == 3)
                break;
            main();
            
        }
    return 0;
}
