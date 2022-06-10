#include <iostream>
#include <conio.h>


void somaTodosDivideUltimos() {
	float numeros[10],divisor = 0,dividendo = 0,resultado = 0;
	for (int i = 0; i < 9; i++) {
		printf("Digite a posicao [%d]",i);
		scanf_s("%f", &numeros[i]);
		dividendo += numeros[i];
	}
	divisor = numeros[7] + numeros[8];
	if (divisor == 0) {
		printf("Divisao por 0 nao é permitida! insira numeros cuja soma é diferente de 0 nas posições 7 e 8");
	}
	else {
		printf("Divisor: %.2f\nDividendo: %.2f\nResultado: %.2f", divisor, dividendo, divisor / dividendo);

	}
}
void Fibbonaci() { //lucas
	int a = 0, b = 1, total = 0;
	printf("1 ");
	for (int i = 0; i < 14; i++) {
		total = a + b;
		printf(" %d ", total);
		a = b;
		b = total;
	}
}
void ordenacao() {
	float numeros[5];
	int caso = 0;
	float aux = 0;
	for (int i = 0; i < 5;i++) {
		printf("informe o numero da posicao [%d]", i);
		scanf_s("%f", &numeros[i]);

	}
	printf("Aperte 1 para crescente e 2 para decrescente");
	scanf_s("%d", &caso);
	switch (caso)
	{
	case 1:
		aux = 0;
		for (int i = 0;i < 4;i++) {
			for (int j = 0; j < 4;j++) {
				if (numeros[j] > numeros[j + 1]) {
					aux = numeros[j];
					numeros[j] = numeros[j + 1];
					numeros[j + 1] = aux;
				}
			}
		}
		for (int i = 0;i < 5;i++) {
			printf("%f ", numeros[i]);
		}
		break;
	case 2:
		aux = 0;
		for (int i = 0;i < 4;i++) {
			for (int j = 0; j < 4;j++) {
				if (numeros[j] < numeros[j + 1]) {
					aux = numeros[j];
					numeros[j] = numeros[j + 1];
					numeros[j + 1] = aux;
				}
			}
		}
		for (int i = 0;i < 5;i++) {
			printf("%f ", numeros[i]);
		}
		break;
	default:
		printf("Opção invalida!");
		break;
		}
}
void soma() {
	float numeros[5],total = 0;
	for (int i = 0;i < 5;i++) {
		scanf_s("%f", &numeros[i]);
		total += numeros[i];
	}
	printf("a soma dos numeros eh igual a: %.2f", total);
}
void reajustes() {
	for (int i = 0;i < 3;i++) {
		char nome[3][30];
		int caso;
		float assistente = 3500, analista = 4500, diretor = 8000, faturamento = 0;
		int idade;
		printf("\ninforme a idade do funcionario numero %d: ", i+1);
		scanf_s("%d", &idade);
		fflush(stdin);
		printf("\ninforme o nome do funcionario numero %d: ", i + 1);
		gets_s(nome[i]);
		if (idade < 16) {
			printf("Idade nao aceita para estes cargos!");
				i--;
				continue;
		}
		printf("\nDigite 1 para Assistente administrativo, 2 para Analista de TI e 3 para Diretor");
		scanf_s("%d", &caso);
		switch (caso) {
		case 1:
			assistente = assistente * 1.1F;
			printf("\n %s, que atua na área de Assistente Administrativo e tem %d anos,teve o seu salário reajustado de R$3500.00 para %.2f .", nome[i], idade, assistente);
			fflush(stdin);
			break;
		case 2:
			analista = analista * 1.2F;
			printf("\n %s, que atua na área de Diretor e tem %d anos,teve o seu salário reajustado de R$4500.00 para %.2f .", nome[i], idade, analista);
			fflush(stdin);
			break;
		case 3:
			printf("\nInforme o faturamento do mes");
			scanf_s("%f", &faturamento);
			if (faturamento < 0) {
				printf("\nfaturamento negativo! Redigite as informacoes, por favor");
				i--;
				fflush(stdin);
				continue;
			}
			else {
				diretor = diretor*1.8F + faturamento*0.1F;
				printf("\n %s, que atua na área de Diretor e tem %d anos,teve o seu salário reajustado de R$8000.00 para %.2f .", nome[i], idade, diretor);
				fflush(stdin);
				break;
			}

		default:
			printf("Valor Invalido! Redigite as informações.\n");
			i--;
			fflush(stdin);
			break;
		}
		
	}
}
int main() {
	//somaTodosDivideUltimos();
	//Fibbonaci();
	//ordenacao();
	//soma();
	reajustes();
}
