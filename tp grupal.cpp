#include <stdio.h>
#include <stdlib.h>
//esto es una modificacion mia de ejemplo
main(){
	int num, juego;
	printf("\t\t\t\t\t\tBIENVENIDOS\n\n");
	printf("\t\t\t\tSeleccione la categoria de juego que desea\n\n");	
	printf("\t\t\t1. Juegos Numericos, 2. Juegos de letras y 0 por si desea salir\n\n");
	printf("\t\t\t\t"); scanf ("%d", &num);
	printf("\n\t\t\t\t"); system("pause");
	system("cls");
	
	
	switch (num){
		case 0: printf("\t\t\t\t\t\tUsted desea salir"); exit(-1);
		break;
		case 1: printf ("\t\t\t\tUsted ha seleccionado la categoria de Juegos Numericos\n\n");
			printf("\t\t\tSeleccione el juego que desea ejecutar:");
			printf("\n\n\t\t\t1. Maymen \n\n\t\t\t2. Adivinum\n\n\t\t\t3. Warcoin");
			printf("\n\n\t\t\t"); scanf("%d", &juego);
			printf("\n\t\t\t\t"); system("pause");
			system("cls");
			switch (juego){
				case 1: printf("\t\t\t\t\tBienvenido a Maymen!");
				break;
				case 2: printf("\t\t\t\t\tBienvenido a Adivinum!");
				break;
				case 3: printf("\t\t\t\t\tBienvenido a Warcoin!");
				break;
				default: printf ("Opcion ingresada no valida");
			}
		break;
		case 2: printf ("\t\t\tUsted ha seleccionado la categoria de Juegos de Letras \n");
		printf("\n\t\t\t\t"); system("pause");
		system("cls");
			printf("\t\t\t\t\tBienvenido a El ahorcado!");
		break;
		default:  printf ("Opcion ingresada no valida \n");	
	}
	
}
