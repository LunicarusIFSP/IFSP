#include <iostream>

void Exercicio1() {
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

void Exercicio3() {
	float F, C;
	printf("informe a temperatura em Celcius");
	scanf_s("%f", &C);
	F = (C * 1.8F) + 32;
	printf("temperatura convertida em Fahenheit: %.2f\F",F);
}

void Exercicio7() {
		int a = 0, b = 1, total = 0;
		printf("1 ");
		for (int i = 0; i < 29; i++) {
			total = a + b;
			printf(" %d ", total);
			a = b;
			b = total;
		}
}

void Desafio1() {
	float matriz[4][5];
	float maior = 0;
	float menor;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("informe o valor da posicao matriz[%d][%d]:", i, j);
			scanf_s("%f",&matriz[i][j]);
			if (matriz[i][j] > maior) {
				maior = matriz[i][j];
			 }
		}

	}

	printf("%f", maior);
}
int main() {
	Desafio1();
	return 0;
}
