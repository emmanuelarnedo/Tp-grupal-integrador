#include "jugamos.h"


main(){
	int num, juego;
	int opc;
	
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
				case 1: Maymen ();
				break;
				case 2: Adivinum ();
				break;
				case 3: printf("\t\t\t\t\tBienvenido a Warcoin!");
				break;
				default: printf ("Opcion ingresada no valida");
			}
		break;
		case 2: printf ("\t\t\tUsted ha seleccionado la categoria de Juegos de Letras \n");
			printf("\n\t\t\t"); printf("Ingrese 1 si desea jugar a el ahorcado y 0 si no\n\n");
			printf("\n\t\t\t"); scanf("%d", &opc);
			printf("\n\t\t\t\t"); system("pause");
			system("cls");	
			switch(opc){
				case 0: getch();
				break;
				case 1: Ahorcado ();
				break;
				default: printf ("Opcion ingresada no valida");
			}
		break;
		default:  printf ("Opcion ingresada no valida \n");	
	}
	
}
