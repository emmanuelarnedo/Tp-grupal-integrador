#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void Maymen();
void Ahorcado();
void Adivinum();
void Warcoin();

void Maymen(){
	int numero, nroaleatorio, cont=10, min=1, max=999, inten=1;
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
	}while(numero != nroaleatorio && cont!= 0);
	
	if (numero == nroaleatorio) {
		printf("\nFELICIDADES! Adivinaste el numero\n\n");
		printf("%d\n", nroaleatorio);
		printf("\nPuntaje obtenido: %d\n\n", cont+1);
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t<V-A-M>\n");
		system("pause");
		}
	else{
		printf("Lo sentimos, no adivinaste el numero\n\n");
		printf("El numero aleatorio era %d\n\n", nroaleatorio);
		printf("\nPuntaje obtenido %d\n\n", cont);
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t<V-A-M>\n");
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
	

	char palabra[50], adivina[50], original[50];
	int puntaje;
	int indice=0;
	int intentos=10;
	char caracter;
	int encontroLetra;
	int letrasAdivinadas=0;
	
	printf("Jugador 1, ingrese la palabra y presione enter para finalizar\n");
 
	do{   
	caracter = getch();
	putchar('*');
  
	if (caracter==13)
	break;
	palabra[indice]=toupper(caracter);
	original[indice]=toupper(caracter);
  
	adivina[indice]='-';
  
	indice++;
	}while(1);
	printf("\n");

	palabra[indice]='\x0';
	original[indice]='\x0';
	adivina[indice]='\x0';	
 
	do{
  
	printf("La palabra a adivinar es de %d letras y esta asi:\n",strlen(palabra));
	printf("%s", adivina);
	printf("\nIngrese una letra: ");
	
  
	caracter = toupper(getche());
	printf("\n");
  
	encontroLetra=0;
  
	for(indice=0; indice<strlen(palabra); indice++){
   
		if (palabra[indice]!='*'){
    
			if (palabra[indice]==caracter){
     
    		encontroLetra=1;
     
    		letrasAdivinadas++;
     
     adivina[indice]=palabra[indice];
     
     palabra[indice]='*';
			}
		}
	}
  
	if (encontroLetra==1){
		printf("\nLa letra es correcta\n\n");
		if (letrasAdivinadas == strlen(palabra)){
    	printf("\nHas adivinado la palabra !\n\n");
    	printf("%s", adivina);
    	break;
   		}
  	}
	else{
		if (intentos == 1){
    	printf("\nHas Fallado !");
    	printf("\nLa palabra correcta era: %s\n\n",original);
    	printf("\nEstado del muñeco: Cabeza-Tronco-Brazo Izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda-Mano Derecha-Pie izquierdo-Pie derecho\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n    ");
		printf(" O   / \\   O"); printf("\n      ");
		  printf("  /   \\"); printf("\n    ");
		printf("  n       n"); printf("\n     ");
    	break;
   		}
    	else{
			printf("\nError en letra");
    
        	intentos--;         
    		printf("\nTe quedan %d intentos\n",intentos);
   			}
		if(intentos == 9){
			printf("\nEstado del muñeco: Cabeza\n\n\t");
			printf(" ___");printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|");printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|");printf("\n\n");}
		if(intentos == 8){
			printf("\nEstado del muñeco: Cabeza-Tronco\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n\t");
			printf(" ||| "); printf("\n\t");
			printf(" ||| "); printf("\n\t"); }
		if(intentos == 7){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo Izquierdo\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("  ||| \\"); printf("\n      ");
		  printf("   |||  \\"); printf("\n\t");	}
		if(intentos == 6){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo Izquierdo-Brazo Derecho\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n"); }	
		if(intentos == 5){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo Izquierdo-Brazo Derecho-Pierna Izquierda\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n      ");
		  printf("     \\"); printf("\n      ");
		  printf("      \\"); printf("\n     "); }
		if(intentos == 4){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n      ");
		  printf("   / \\"); printf("\n      ");
		  printf("  /   \\"); printf("\n     ");
			}
		if(intentos == 3){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n     ");
		 printf("    / \\   O"); printf("\n      ");
		  printf("  /   \\"); printf("\n     ");	} 
		if(intentos == 2){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda-Mano Derecha\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n    ");
		printf(" O   / \\   O"); printf("\n      ");
		  printf("  /   \\"); printf("\n     ");	}
		if(intentos == 1){
			printf("\nEstado del muñeco: Cabeza-Tronco-Brazo izquierdo-Brazo Derecho-Pierna Izquierda-Pierna Derecha-Mano Izquierda-Mano Derecha-Pie izquierdo\n\n\t");
			printf(" ___");  printf("\n\t");
			printf("|   |"); printf("\n\t");
			printf("|x x|"); printf("\n\t");
			printf("| ~ |"); printf("\n\t");
			printf("|___|"); printf("\n\t");			
			printf(" ||| "); printf("\n       ");
		   printf("/ ||| \\"); printf("\n      ");
		  printf("/  |||  \\"); printf("\n    ");
		printf(" O   / \\   O"); printf("\n      ");
		  printf("  /   \\"); printf("\n    ");
		printf("         n"); printf("\n     ");	}
		}
	printf("\n");
	system ("pause"); system("cls");
	}while(1);
	if(intentos == 1){
	puntaje =0; }
	else{ puntaje= 50+2*(intentos-10);;
	}
	printf("\n\nPuntaje final obtenido: %d", puntaje);
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t<V-A-M>\n");
	system("pause");
}
void Adivinum(){
	printf("\t\t\t\t\tBienvenido a Adivinum!\n\n");
	printf("Este juego consiste en adivinar un numero de 4 cifras\n\n");
	printf("Reglas: \n\n1. El jugador cuenta con 10 intentos para adivinar este numero secreto\n\n");
	printf("2. Si el jugador adivina el numero entonces gana la partida\n\n");
	printf("3. Se le indicara al jugador las posiciones que ocupan los digitos ingresados, misma posicion u otra posicion \n(1 vez como maximo)\n\n");
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
			system("cls"); 
			printf("***********************************\n");
			printf(" El numero que ingreso es ->  %d\n",comparar);
			printf("***********************************\n\n");
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
				
				
				
				if(d1==i1 && d2==i2 && d3==i3 && d4==i4){
				printf("\n\nFelicidades! Adivinaste el numero de cuatro cifras\n\n");	
				puntaje = 11-i;
				printf("Puntaje final: %d", puntaje);	
				printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t<V-A-M>");	abort();	}
				}
				
				printf("\n\nLo sentimos, no adivinaste el numero de 4 cifras\n\n");
				printf("El numero era: %d%d%d%d\n\n", d1, d2, d3, d4);
				puntaje = 11-i;
				printf("Puntaje final: %d\n\n", puntaje);
				printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t<V-A-M>");
				system("pause");
}
void Warcoin(){
	printf("\t\t\t\t\tBienvenido a Warcoin!\n\n");
	printf("Este juego consiste en retirar monedas de una pila compitiendo contra la computadora\n\n");
	printf("Reglas: \n\n1. El jugador, al inicio, indica la cantidad de monedas minimas y maximas que se pueden sacar\n\n");
	printf("2. La computadora indicara cuantas monedas hay en la pila\n\n");
	printf("3. El juego empieza de manera aleatoria, empieza el jugador o la computadora\n\n");
	printf("4. El juego finaliza cuando la pila de monedas quede vacia o cuando ya no se pueda quitar mas monedas de la pila\n\n");
	printf("Puntaje: \n\n Si el jugador gana, obtendra 5 puntos. Caso contrario obtendra 0 puntos\n\n");
	printf("Comenzamos?\n\n");
	system("pause");
	system("cls");
	
	int min, max, monedas, turno, jug, comp, contjug=0, contcomp=0;
	srand(time(NULL));
	
	printf("~> Ingrese la cantidad Minima de monedas a retirar por turno: ");
	scanf("%d", &min);
	printf("\n~> Ingrese la cantidad Maxima de monedas a retirar por turno: ");
	scanf("%d", &max);
	
	monedas = 10+rand()%(40);
	printf("\nLa cantidad de monedas en la pila es: %d\n\n", monedas);
	system("pause");
	system("cls");
		
	turno = 1+rand()%(7);

	if(turno<=4){
		while(monedas!=0 || min<=monedas){
			printf("Tu turno:\n\n");
			printf("Ingrese la cantidad de monedas a retirar entre %d y %d\n\n", min, max);
			scanf("%d", &jug);
			if(jug<min || jug>max){
				printf("\nError, el numero debe estar comprendido entre %d y %d. Por favor ingrese otra vez un numero\n\n", min, max);
				scanf("%d", &jug);	}

		printf("\nRetiraste %d monedas de la pila\n\n", jug);

		monedas = monedas-jug;
		printf("Cantidad de monedas en la pila: %d\n\n", monedas);
		contjug++;
		system("pause");
		system("cls");
	
		if(monedas>=min){
			printf("Turno de la computadora\n\n");
			comp=min+rand()%(max-1);
			if(monedas-comp<0){
				printf("\nError. Computadora ingresara otra vez un numero\n\n", min, max);
				comp=min+rand()%(max-1);
			}
			printf("La computadora retira %d monedas de la pila\n\n", comp);
			monedas = monedas-comp;
			printf("Cantidad de monedas en la pila: %d\n\n", monedas);
			contcomp++;
			system("pause");
			system("cls");
				}
			}
		
		if(contcomp>=contjug){
			printf("Lo lamentamos, la computadora gano el juego\n\nPuntaje final obtenido: 0\n\n");
			system("pause");
			getch();	}
		if(contjug>contcomp){
			printf("Felicidades, tu ganaste el juego\n\nPuntaje final obtenido: 5\n\n"),
			system("pause");
			getch();	}
		}	
 
 
 }

	
