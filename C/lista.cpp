#include <iostream>

void Exercicio1() {
  //salva nota de 3 provas e 4 trabalhos e depois apresenta a media
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
  //converte temperatura em celcius em Faenheit
	float F, C;
	printf("informe a temperatura em Celcius");
	scanf_s("%f", &C);
	F = (C * 1.8F) + 32;
	printf("temperatura convertida em Fahenheit: %.2f\F",F);
}

void Exercicio7() {
  //imprime os 30 primeiros numeros da sequencia fibbonaci
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
	Exercicio3();
	return 0;
}
