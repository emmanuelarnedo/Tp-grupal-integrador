#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void Maymen();
void Ahorcado();
void Adivinum();

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
	printf("\t\t\t\t\tBienvenido a el Ahorcado!\n\n");
	printf("Este juego de a dos jugadores consiste en que el jugador 1 ingresa la palabra y el jugador 2 debera adivinar esa palabra\n\n");
	printf("Reglas: \n\n1. El jugador 1 ingresa la palabra al incio del juego\n\n");
	printf("2. El jugador 2 debera adivinar la palabra ingresando letras al azar\n\n");
	printf("3. Se le indicara al jugador 2 las letras adivinadas que contenga la palabra\n\n");
	printf("4. Se le indicara al jugador 2 las partes descubiertas e intentos restantes\n\n");	
	printf("Puntaje: \n\nEl puntaje final del jugador 2 sera la cantidad de partes del cuerpo descubiertas al fallar intentos menos 50\n\n");
	printf("Ejemplos de palabras a ingresar: \n\nCompilador-Entorno-Computadora-Estructura-Seleccion-Repeticion-Directiva-Algoritmo-Program-Ejecucion\n\n");
	printf("Int-Float-Char-Double-Long-If-Else-For-While-Return-Break-Switch-Case-Main-Include-Define-Struct-Cin-Cout-Endl\n\n");
	printf("Comenzamos?\n\n");
	system("pause");
	system("cls");
	
// Variable para leer el Nombre
	char palabra[50], adivina[50], original[50];
	
	int puntaje;
	
 // Indice
	int indice=0;
 // Control de Intentos
	int intentos=10;
 // Para leer el Caracter
	char caracter;
 // Encontro
	int encontroLetra;
 // Cuenta letras encontradas
	int letrasAdivinadas=0;
	
 // Solicita la Palabra
	puts("Jugador 1, ingrese la palabra y presione enter para finalizar\n\t");

 // Ciclo para leer la Palabra Letra por letra
	do{   // Lee el caracter
	caracter = getch();
	putchar('*');
  // Coloca el Caracter
	if (caracter==13)
	break;
// Coloca el Caracter en la palabra en mayúsculas
	palabra[indice]=toupper(caracter);
	original[indice]=toupper(caracter);
  // Colocamos _ en la palabra visible
	adivina[indice]='-';
  // Incrementamos el indice
	indice++;
	}while(1);
	printf("\n");
 // Coloca el fin de CAdena
	palabra[indice]='\x0';
	original[indice]='\x0';
	adivina[indice]='\x0';	
 // Ciclo para capturar letra
	do{
  // Mensaje
	printf("\n\tLa palabra a adivinar es de %d letras y esta asi:\n",strlen(palabra));
	puts(adivina);
	puts("\n\tIngrese una letra: ");
	
  // Lee el caracter
	caracter = toupper(getche());
	printf("\n");
  // Inicializa la bandera de que encontró palabra
	encontroLetra=0;
  // Ciclo para buscar el caracter en la palabra
	for(indice=0; indice<strlen(palabra); indice++){
   // Verifica que no sea una letra encontrada
		if (palabra[indice]!='*'){
    // Verifica que sea la letra
			if (palabra[indice]==caracter){
     // Activa la bandera de que encontró
    		encontroLetra=1;
     // Incrementa el Contador de Letras Encontradas
    		letrasAdivinadas++;
     // Cooloca la letra en el vector de adivina
     adivina[indice]=palabra[indice];
     // La marca como encontrada
     palabra[indice]='*';
			}
		}
	}
  // Verifica si encontró
	if (encontroLetra==1){
   // Mensaje de que es correcta la letra
		puts("\nLa letra es correcta\n\n");
		if (letrasAdivinadas == strlen(palabra)){
    	puts("\nHas adivinado la palabra !\n\n");
    	puts(adivina);
    	break;
   		}
  	}
	else{
		if (intentos == 1){
    	puts("\nHas Fallado !");
    	printf("\nLa palabra correcta era: %s\n\n",original);
    	break;
   		}
    	else{
			puts("\nError en letra");
    // Decrementa intentos
        	intentos--;         
    		printf("\nTe quedan %d intentos\n",intentos);
   			}
		if(intentos == 9){
			char estado[500]= "Cabeza\n"; 
			printf("\nEstado del muñeco: %s", estado); printf("\t");
			printf(" ___");printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|");printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|");printf("\n\n");}
		if(intentos == 8){
		 	char estado[500]= "Cabeza-Tronco\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 7){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 6){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho\n\n";
			printf("\nEstado del muñeco: %s", estado);}	
		if(intentos == 5){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 4){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 3){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 2){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda-Mano Derecha\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		if(intentos == 1){
			char estado[500]= "Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda-Mano Derecha-Pie izquierdo\n\n";
			printf("\nEstado del muñeco: %s", estado);}
		}
	system ("pause"); system("cls");
	}while(1);

	system("pause");
}
void Adivinum(){
	printf("\t\t\t\t\tBienvenido a Adivinum!\n\n");
	printf("Este juego consiste en adivinar un numero de 4 cifras\n\n");
	printf("Reglas: \n\n1. El jugador cuenta con 10 intentos para adivinar este numero secreto\n\n");
	printf("2. Si el jugador adivina el numero entonces gana la partida\n\n");
	printf("3. Se le indicara al jugador las posiciones que ocupan los digitos ingresados, misma posicion u otra posicion (1 vez como maximo)\n\n");
	printf("Puntaje: \n\n El puntaje obtenido depende de la cantidad de intentos: si lo adivina en el primer intento, obtiene 10 puntos\n\n");
	printf("Comenzamos?\n\n");
	system("pause");
	system("cls");
	
	int n, d1, d2, d3, d4;
	int comparar, i1, i2, i3, i4;
	int puntaje;
	srand(time(NULL));
	
	do{
	n = (rand() % 9000)+1000;

	d4 = n % 10;
	n = (n - d4) / 10;
	d3 = n % 10;
	n = (n - d3) / 10;
	d2 = n % 10;
	n = (n - d2) / 10;
	d1 = n; 

	} while (d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4 || d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0);
	
	int i=1; 
	
	for(i=1; i<11 || d1==i1 && d2==i2 && d3==i3 && d4==i4 ; i++){
		do{	printf("Intento :%d\n", i);
			printf("\nIngrese un numero para comparar posiciones: \n\n");
			scanf("%d", &comparar);
			}while(comparar<1000 || comparar>9999);
	
			i4 = comparar % 10;
			comparar = (comparar - i4) / 10;
			i3 = comparar % 10;
			comparar = (comparar - i3) / 10;
			i2 = comparar % 10;
			comparar = (comparar - i2) / 10;
			i1 = comparar; 
			
				if(i1 == d2 || i1 == d3 || i1 == d4 ){	printf("Cant. otra posicion: 1\n");	}
				
				if(i2 == d1 || i2 == d3 || i2 == d4 ){	printf("Cant. otra posicion: 2\n");	}
					
				if(i3 == d1 || i3 == d2 || i3 == d4 ){	printf("Cant. otra posicion: 3\n");	}	
				
				if(i4 == d1 || i4 == d2 || i4 == d3 ){	printf("Cant. otra posicion: 4\n");	}
				
				if(d1 == i1){	printf("Cant. misma posicion: 1\n");	}
				
				if(d2 == i2){	printf("Cant. misma posicion: 2\n");	}
				
				if(d3 == i3){	printf("Cant. misma posicion: 3\n");	}
				
				if(d4 == i4){	printf("Cant. misma posicion: 4\n");	}
				
				if(d1==i1 && d2==i2 && d3==i3 && d4==i4){	printf("Felicidades! Adivinaste el numero de cuatro cifras\n\n");		puntaje = 11-i; 
															printf("Puntaje final: %d", puntaje);		abort();	}
				}

}

	
