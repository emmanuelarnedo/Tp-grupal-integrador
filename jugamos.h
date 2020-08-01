#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void Maymen();
void Ahorcado();

void Maymen(){
	int numero, nroaleatorio, cont=11, min=1, max=999, inten=1;
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
		printf("Intento %d: ", inten);
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
		cont=cont-1;
		inten++;
	}while(numero != nroaleatorio && cont<11);
	
	if (numero == nroaleatorio) {
		printf("\nFELICIDADES! Adivinaste el numero\n\n");
		printf("%d\n", nroaleatorio);
		printf("\nPuntaje obtenido: %d\n\n", cont);
		system("pause");
		}
	else{
		printf("Lo sentimos, no adivinaste el numero\n\n");
		printf("El numero aleatorio era %d\n\n", nroaleatorio);
		printf("\nPuntaje obtenido %d\n\n", cont);
	}
}
	
void Ahorcado(){
	
	char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=9;
    int repetido=0,gano=0;
    printf("  *  JUEGO DEL AHORCADO  *\n\n");
    printf("  Introduzca la palabra a adivinar: ");
    gets(frase);
    system("pause");
    system("cls");
    longitud = 0;
    inicial = 0;
    j = 0;
    rep[0] = ' ';
    rep[1] = '\0';
    do
    {
        system("cls");
        temp=0;
        if(inicial == 0)
        {
            for(i=0;i<strlen(frase);i++)
            {
                if(frase[i] == ' ')
                {
                    temporal[i] = ' ';
                    longitud++;
                }
                else
                {
                    temporal[i] = '_';
                    longitud++;
                }
            }
        }
        inicial = 1;
        temporal[longitud] = '\0';
        for(i=0;i<strlen(rep);i++)
        {
            if(rep[i] == pal)
            {
                repetido = 1;
                break;
            }
            else
           {
               repetido = 0;
           }
        }
