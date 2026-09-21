#include <stdio.h>

int main()
{
    char nome[] = "Joana da Silva";
    FILE *fp;
    fp = fopen("nome.txt", "w");
    fwrite(nome, sizeof(char), sizeof(nome), fp);
    fclose(fp);

    fp = fopen("nome.txt", "r");
    char letra;
    fseek(fp, 9 * sizeof(char), SEEK_SET);
    fread(&letra, sizeof(char), 1, fp);
    printf("%c\n", letra);

    return 0;
}
