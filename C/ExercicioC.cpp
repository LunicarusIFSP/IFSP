#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
void ASCII() {
    //Concluido
    char c;
    int ascii;
    printf("informe um caractere: ");
    scanf_s("%c", &c);
    ascii = (int)c + 1;
    printf("%c tem o valor de %d\n", c, (int)c);
    printf("e o valor de teu sucessor(%c): %d",(char)(int)c + 1, (int)c + 1);

}

void aumento() {
    //concluido
    float salario;
    char nome[50];
    printf("informe seu nome");
    gets_s(nome);
    printf("informe teu salario");
    scanf_s("%f", &salario);
    printf("Ola %s teu salario com aumento é:%.2f ",nome , salario * 1.2); //1 = 100% 1.2 = 120%
}
void encanador() {
    //concluido
    float diaria;
    printf("informe os dias trabalhados pelo encanador: ");
    scanf_s("%f", &diaria);
    printf("O teu salario com aumento é: %.2f ", diaria * 20 * 0.92);
}

void concurso() {
    //concluido
    float first, second, third;
    printf("informe a pontuação dos 3 concorrentes em ordem decrescente ");
    scanf_s("%f%f%f", &first, &second, &third);
    printf("%f são os pontos totais\n", first + second + third);
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n", first, (780000.00 / (first + second + third)) * first); // (1000 / (55) ) *30
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n", second, (780000.00 / (first + second + third)) * second); // ((1000 / 55) *15
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n", third, (780000.00 / (first + second + third)) * third); // (1000/55) * 10
}
void latao() {
    float latao;
    printf("informe a quantidade de latão a ser fundida");
    scanf_s("%f",&latao);
    printf("voce precisara de %.2f de zinco e %.2f de cobre", latao * 0.3, latao * 0.7);

}
void ZincoCobre() {
    int cobre, zinco;
    float total,restoCobre, restoZinco;
    printf("informe a quantidade de zinco e cobre que tem para fundir");
    scanf_s("%d%d",&zinco,&cobre);
    restoCobre = (cobre % 7);
    restoZinco = (zinco % 3);
    total = ((zinco + cobre) - restoCobre - restoZinco)/10;

    printf("voce conseguira forjar %f de latao, tendo resto de %f de cobre e %f de zinco: ", total, restoCobre,restoZinco);
}
int main() {
    ASCII();
}
