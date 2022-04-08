#include <stdlib.h>
#include <stdio.h>
#include <iostream>
//*concluido

void ASCII() {
	char c;
	int ascii;
	printf("informe um caractere");
	scanf("%c", &c);
	ascii = (int)c + 1;
	printf("%d é o valor do caractere %c\n", (int)c, c);
	printf("%d é o valor ASCII do caractere sucessor:%c", (int)c + 1, (char)(int)c + 1);

}

int main() {
	ASCII();
}
