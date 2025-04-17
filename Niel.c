#include <stdio.h>
#include <windows.h>
#include <ctype.h>


int main(){
	/* Usei o "SetConsole" para puxar da API do windows a funcionalidade de reconhercer acentuação gráfica no cosole(CMD) do windows
	Só uma observação que acaso o windows esteja inglês ou outra língua, pode dá errado já que estou usando como base o Windows PT-BR para puxar a acentuação
	direto da API */
	
	SetConsoleOutputCP(1252);
	printf("Olá Jogador: Elion!!\n");
	
	int resp_asa, resp_garra, resp_som;
	
	// A Função  da API do Windows também Sleep recebe um parametro (x) que é em milisegundos que no caso 1000 milisegundos representa 1 segundo.
	Sleep(500);
	printf("Vamos explorar um pouco dese incriível mundo cheio de perigos...\n");
	
	Sleep(1000);
	printf("CUIDADO!!!! Criatura não identificada à frente, vamos se aproximar dele...\n");
	Sleep(1000);
	
	printf("OBSERVAÇÃO AS PERGUNTAS DEVEM SER RESPONDIDAS COM '0' PARA NÃO OU '1' para SIM");
	printf("Esse Monstro Possui ASAS ?");
	scanf("%d", &resp_asa);
	
	printf("\nEsse Monstro Possui Garras ? ");
	scanf("%d", &resp_garra);

	
	
	// Serve para acaso o programa tenha algum erro ele retorna "1" e se funcionar tudo normalmente ele retornará "0".
	return 0;
}