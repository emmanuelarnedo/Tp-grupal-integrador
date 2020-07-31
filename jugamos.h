#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Maymen();

void Maymen(){
	int numero, nroaleatorio, cont=1, min=1, max=999, puntaje=11;
	printf("\t\t\t\t\tBienvenido a Maymen!\n\n");
	printf("Este juego consiste en adivinar un numero secreto comprendido entre 1 y 999\n\n");
	printf("Reglas: \n\n1. El jugador cuenta con 10 intentos para adivinar este numero secreto\n\n");
	printf("2. Si el jugador adivina el numero entonces gana la partida\n\n");
	printf("3. Se le indicara al jugador que tan cerca esta del numero secreto\n\n");
	printf("Puntaje: \n\nEl puntaje final del jugador sera la cantidad de intentos en la que logro adivinar el numero\n\n");
	printf("Comenzamos?\n\n");
	system("pause");
	system("cls");
	srand(time(NULL));
	nroaleatorio = 1+ rand()%(999);
	
	do{
		printf("Ingrese un numero entre %d y %d\n\n", min, max);
		printf("Intento %d: ", cont);
		scanf("%d", &numero);
			if(numero>nroaleatorio){
			max=numero-1;
			printf("\nEl numero secreto esta comprendido entre %d y %d\n\n", min, max);
			system("pause");
			system("cls");
		}
		if(numero<nroaleatorio){
			min=numero+1;
			printf("\nEL numero secreto esta comprendio entre %d y %d\n\n", min, max);
			system("pause");
			system("cls");
		}
		cont++;
		puntaje=puntaje-1;
	}while(numero != nroaleatorio && cont<11);
	}
	
	
	
