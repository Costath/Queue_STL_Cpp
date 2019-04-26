/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/
#include <iostream>
#include "Fila.hpp"

int main() {
	setlocale(LC_ALL, "");
	
	ClassFila Fila;
	bool sair = false;
	int menu, element;

	while (!sair){

		printf("1 - enqueue\n");
		printf("2 - dequeue\n");
		printf("3 - size\n");
		printf("4 - isEmpty\n");
		printf("5 - front\n");
		printf("6 - sair\n\n");

		scanf("%d", &menu);

		switch(menu){
			case 1:		//enqueue
				printf("\n\nElemento a ser inserido: ");
				scanf("%d", &element);
				Fila.Enqueue(element);

				system("cls");

			break;
			case 2:		//dequeue
				if(!Fila.isEmpty()){
					printf("\n\nO elemento \"%d\" foi retirado\n\n", Fila.Dequeue());

				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 3:		//size
				printf("\n\nTamanho da fila: %d\n\n", Fila.Size());

				system("pause");
				system("cls");

			break;
			case 4:		//isEmpty
				if(Fila.isEmpty()){		//retorna 'true' caso a fila esteja vazia, 'false' caso contrário
					printf("\n\nA fila está vazia.\n\n");
				}else{
					printf("\n\nA fila não está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 5:		//front
				if(!Fila.isEmpty()){		//chama a função front caso a fila não esteja vazia
					printf("\n\nElemento na frente da fila: %d\n\n", Fila.Front());
				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 6:		//sair
				sair = true;
				printf("\nObrigado!\n");

			break;
			default:
				printf("Opção inexistente. Tente de novo.\n\n");
				system("pause");
				system("cls");
				
		}

	}

	return 0;
}
