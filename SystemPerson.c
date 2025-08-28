#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* types of dados:
char,float,double,long,enum,void,pointer,int

*/
void validSex(char sexo)

{

    sexo = toupper((unsigned char)sexo);

    if (sexo == 'M' || sexo == 'F')
    {
    }
    else
    {
        printf("sex invalid try again later!\n");
        exit(1);
    }
}
void validConfirm(char confirm)
{
    confirm = toupper((unsigned char)confirm);

    if (confirm == 'S')
    {
        exit(1);
    }
    else if

        (confirm == 'N')
    {
        system("cls");
        printf("Vamos refazer o cadastro...\n\n");
    }
    else
    {
        printf("Opção inválida! Encerrando.\n");
        exit(1);
    }
}

int main()
{

    system("chcp 65001"); // set UTF-8 in terminall.
    system("cls");        // clear terminal.

    // declations

    char sexo, confirm, nome[30];
    int idade = 0;
    float altura, salario;

    printf("TABELA DE CADASTRO DE PESSOA FÍSICA\n");
    system("pause");
    system("cls");

    // TABLE OF SING UP
    do
    {
        printf("Qual é seu nome?\n");
        scanf(" %29s", nome);

        printf("Qual sua idade?\n");
        scanf(" %d", &idade);

        printf("Qual seu sexo? (M ou F)\n");
        scanf(" %c", &sexo);
        validSex(sexo);

        printf("Qual sua altura?\n");
        scanf(" %f", &altura);

        printf("Qual é o seu sálario?\n");
        scanf(" %f", &salario);

        printf("\e[1;1H\e[2J"); // CLEAN TO TERMINAL

        // PRINT OUTPUT DATA
        printf("Fala comigo %s tudo bom.\n", nome);
        printf("Sua idade é %d.\n", idade);
        printf("Seu é sexo é %c.\n", sexo);
        printf("Sua altura é %.2f.\n", altura);
        printf("Seu sálario é %.2f.\n", salario);

        printf("todos os seu dados estão correto?\n");
        printf("digite S para confirmar e N para refazer!\n");
        scanf(" %c", &confirm);

        validConfirm(confirm);

    } while (toupper((unsigned char)confirm) == 'N');
    printf("\nCadastro concluído com sucesso!\n");
    // system("pause");
    return 0;
}
