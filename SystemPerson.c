#include <stdio.h>
#include <stdlib.h>

/* types of dados:
char,float,double,long,enum,void,pointer,int

*/
int main(){
    system("chcp 65001");
    system("cls");
    
    char sexo[2], nome[30];
    int idade = 0;
    float altura,salario;
    
 printf("CADASTRO DE PESSOA FÍSICA PARA INSCRIÇÃO DO INSS\n");
 system("pause");
 system("cls");
 printf("Qual é seu nome?\n");
 scanf("%29s", nome);
 printf("Qual sua idade?\n");
 scanf("%d",&idade);
 printf("Qual seu sexo?(M or F)\n");
 scanf("%1s",sexo);
 printf("Qual sua altura?\n");
 scanf("%f",&altura);
 printf("Qual é o seu sálario?\n");
 scanf("%f", &salario);

 printf("\e[1;1H\e[2J");
 

    printf("Fala comigo %s tudo bom, enfim, vamos direto ao assunto.\n", nome); 
    printf("Sua idade é %i.\n",idade);
    printf("Seu é sexo é %s.\n",sexo); 
    printf("Sua altura é %f.\n",altura); 
    printf("Seu sálario é %.2f (Ganha bem viu!>).\n",salario);
    system("pause");
    return 0;
}
