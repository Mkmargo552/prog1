#include <stdio.h>

void lista(){

    int lista[5];

    for (int i = 0; i < 5; i++){
        lista[i] = i + 10;
    }
    for (int i = 0; i<5; i++){
        printf("lista[%d] = %d\n", i, lista[i] );
    }
}

void imprimirInverso(char nome[])
{
    int tamanho = 0;

    while (nome[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }

    printf("\n");
}


int main()
{
    char nome[] = "Joao da Silva";
    char primeiroNome[50];

    for(int i = 0; i < sizeof(nome); i++){
        printf("%c", nome[i]);
    }
    printf("\n");

    imprimirInverso(nome);

    lista();

    for(int i = 0; i < sizeof(nome); i++){
        primeiroNome[i] += nome[i]; //primeiroNome[i] = primeiroNome[i] + nome[i] 
        if (nome[i] == ' '){
            break;
        }

    }
    printf("primeiro nome: %s\n", primeiroNome);
    return 0;

}
