#include<stdio.h>
#include<stdlib.h>

int opcao;

int main(){
    printf("Bem vindo a sua agenda!\n");
    printf("1- Cadastrar tarefa/compromisso\n");
    printf("2- Checar tarefa/compromisso\n");
    printf("3- Excluir tarefa/compromisso\n");
    printf("\nEscolha a opcao desejada: \n");
    scanf("%d", &opcao);
    while(opcao != 0){
        switch(opcao)
    {
    case 1:
        system("cls");
        printf("Qual tarefa/compromisso deseja cadastrar?\n");
        break;

    case 2:
        system("cls");



    case 3:
        system("cls");
    }
    }
    system("pause");

    return 0;
}
