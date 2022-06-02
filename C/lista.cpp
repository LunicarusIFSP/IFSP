#include <iostream>
#include <conio.h>
#include <math.h>
	/*Nome dos Integrantes:
		- Lays Lopes Pereira
		- Lucas da Silva Cruz
		- Lucas Moreira Sturchio
		- Rafael de Souza Lima
		- Thais de Jesus Silva Rocha */

//Exercicios 1,3,5,7
void Exercicio1() { //lucas
	//
	float provas[3], trabalhos[4], totalNotas = 0, totalTrabalhos = 0;
	printf("digite as notas das provas");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%f", &provas[i]);
	}
	printf("digite as notas dos trabalhos");
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%f", &trabalhos[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		totalNotas += provas[i];
	}
	for (int i = 0; i < 4; i++)
	{
		totalTrabalhos += trabalhos[i];
	}
	printf("a media do aluno eh: %.2f", ((totalNotas + totalTrabalhos) / 7));
}

void Exercicio3() { //lucas
	float F, C;
	printf("informe a temperatura em Celcius");
	scanf_s("%f", &C);
	F = (C * 1.8F) + 32;
	printf("temperatura convertida em Fahenheit: %.2f\F",F);
}
void Exercicio5() { //Thais
    int mes;
    
    printf("digite um numero de 1 a 12:");
    scanf("%d",&mes);
    
    if(mes==1)
        printf("janeiro\n");
    else
    if(mes==2)
        printf("fevereiro\n");
    else
    if(mes==3)
        printf("março\n");
    else    
    if (mes==4)
        printf("abril\n");
    else    
    if (mes==5) 
        printf("maio\n");
    else
    if (mes==6)
        printf("junho\n");
    else
    if (mes==7)
        printf("julho\n");
    else    
    if (mes==8)
        printf("agosto\n");
    else
    if (mes==9)
        printf("setembro\n");
    else
    if (mes==10)
        printf("outubro\n");
    else    
    if (mes==11)
        printf("novembro\n");
    else    
    if (mes==12)
        printf("dezembro\n");
    else
        printf("mes invalido");
        
    getch();
    system("pause");
}
void Exercicio7() { //lucas
		int a = 0, b = 1, total = 0;
		printf("1 ");
		for (int i = 0; i < 29; i++) {
			total = a + b;
			printf(" %d ", total);
			a = b;
			b = total;
		}
}

int main() {

	return 0;
}
