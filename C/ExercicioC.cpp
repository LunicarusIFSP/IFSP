#include <stdlib.h>
#include <stdio.h>
#include <iostream>
void ASCII() {
    //Concluido
	char c;
	int ascii;
	printf("informe um caractere");
	scanf("%c", &c);
	ascii = (int)c + 1;
	printf("%d é o valor do caractere %c\n", (int)c, c);
	printf("%d é o valor ASCII do caractere sucessor:%c", (int)c + 1, (char)(int)c + 1);

}

void aumento(){
    //concluido
    float salario;
    printf("informe teu salario");
    scanf("%f",&salario);
    printf("O teu salario com aumento é:%.2f ",salario*1.2);
}
void encanador(){
        //concluido
    float diaria;
    printf("informe os dias trabalhados pelo encanador: ");
    scanf("%f",&diaria);
    printf("O teu salario com aumento é: %.2f ",diaria*20*0.92);
}

void concurso(){
    //concluido
    float first, second, third;
    printf("informe a pontuação dos 3 concorrentes em ordem decrescente ");
    scanf("%f%f%f",&first,&second,&third);
    printf("%f são os pontos totais\n",first+second+third);
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n",first,(780000.00/(first+second+third))*first);
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n",second,(780000.00/(first+second+third))*second);
    printf("primeiro lugar: %.0f pontos - R$%.0f de premio\n",third,(780000.00/(first+second+third))*third);
}


int main() {
	concurso();
}
