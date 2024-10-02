#include <stdio.h>

struct cliente
{
    char nome[50];
    char email[50];
    char telefone[50];
    char dataNasc[50];
    int cadastro;
};

struct cliente cadastro();
void consultar();

int main()
{
    struct cliente cliente;
    printf("Armazenamento de dados em C\n\n");
    cliente = cadastro(cliente);
    consultar(cliente);
    printf("\n Por Pedro Henrique. ");
    return 0;
}

struct cliente cadastro(struct cliente novo_cliente)
{
    printf("-------------Cadastro de dados-----------\n");
    printf("Nome: ");
    scanf("%s", novo_cliente.nome);
    printf("Email: ");
    scanf("%s", novo_cliente.email);
    printf("Telefone: ");
    scanf("%s", novo_cliente.telefone);
    printf("Data de nascimento: ");
    scanf("%s", novo_cliente.dataNasc);
    printf("Numero de cadastro: ");
    scanf("%d", &novo_cliente.cadastro);

    return novo_cliente;
}

void consultar(struct cliente cliente)
{
    printf("\n-------------------consulta de dados--------------------\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Email: %s\n", cliente.email);
    printf("Telefone: %s\n", cliente.telefone);
    printf("Data de nascimento: %s\n", cliente.dataNasc);
    printf("Numero de cadastro: %d\n", cliente.cadastro);
}