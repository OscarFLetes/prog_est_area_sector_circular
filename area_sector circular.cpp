/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 04/02/2022
	Programa que pide datos para calcular el area de un sector circular
	
	Progama en c que calcula el area de un setor circular, con el uso de la libreria math.h para las constantes
	matematicas, uso del scanf y operaciones aritméticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso de scanf
		* Uso de la libreria math.h 
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo float (medida de R, medida de n)
	El programa pide datos para calcular el area de un sector circular
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include<math.h>//libreria para constantes matematicas

int main(){
	//Variables 
	float R, n, area;//Variables con decimal
	//Entrada
	printf("Introduce la medida de R: ");//imprime mensaje
	scanf("%f", &R);//lee el numero insertado por el teclado
	printf("Introduce la medida de n: ");//imprime mensaje
	scanf("%f", &n);//lee el numero insertado por el teclado
	//Proceso
	area=M_PI*pow(R,2)*n/360;//calcula el area
	//M_PI es el valor de pi
	//pow es para elevar un numero a la potencia n
	//Salida
	printf("EL area del sector circular es %f", area);//imprime la salida del area 
	
	return 0;
}
