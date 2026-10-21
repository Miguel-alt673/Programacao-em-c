#include <stdio.h>
#include <locale.h>

    void supermercado(int codigo, float preco, char nome [50]) {
    printf("\n=== PRODUTOS CADASTRADOS NO SUPERMERCADO ===\n");
    printf("codigo: %d\n", codigo);
    printf("preco: R$ %f.2\n", preco);
    printf("nome: %s\n", nome);
}

int main() {
    setlocale(LC_ALL, "");
    int codigo;
    float preco;
    char nome [50];

    printf("Digite o código do produto:  ");
        scanf("%d", &codigo);

    printf("Digite o preço:  ");
        scanf("%f", &preco);

    printf("Digite o nome do produto:  ");
            scanf(" %s", nome);

    while (getchar() != '\n');

     supermercado(codigo, preco, nome);

    return 0;
}

