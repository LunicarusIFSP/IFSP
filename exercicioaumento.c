#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{ //começo do programa, abre chaves
    
    float salario; //variavel salario, é float porque um salario pode ter centavos, valor quebrado (ex: 1000.50)
    
    char nome[10]; //variavel nome[10], precisa de colchete [], porque vai mais de um caractere dentro da variavel. nome[10] cabe 10 caracteres
    
    printf("informe teu salario "); //imprime uma mensagem de texto
    
    scanf("%f", &salario); //esse & serve para indicar ao scanf aonde ele tem que puxar o valor.
    
    printf("informe teu nome "); //pergunta o nome do usuario
    
    scanf("%s", nome); //aqui você salva o nome do usuario, não precisa de & porque variaveis com colchete [] são endereços com direção já
    
    printf("Ola %s teu salario com aumento é:%.4f", nome,salario * 1.2); //numeros decimais em C utilizando ponto (2.1), não virgula (2,1 ERRADO)
    
    return 0;
} //fecha as chaves
