#include "Personaje.h"
#include "EnemigoFinal.h"
#include <iostream>

int main() {
	//Creamos una variable integer que se llama filas
	const int filas = 10;

	//Creamos otra variable integer que se llama columnas
	const int columnas = 5;

	//Creamos un char
	char tablero[filas][columnas] = {
		{'.', '.', 'S', '.', '.'},
		{'.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', 'E'},
		{'E', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.'},
		{'.', '.', '.', 'E', '.'},
		{'.', '.', '.', '.', '.'},
		{'.', 'E', '.', '.', '.'},
		{'.', '.', '.', '.', '.'},
		{'G', '.', '.', '.', '.'}
	};

	//Creamos personaje del heroe
	Heroe luke("Luke Skywalker", 100, 50, 90, 60);

	//Creamos personaje del enemigo
	Enemigo asalto("Tropas de Asalto", 200, 60, 80, 50);

	//Creamos el enemigo final
	EnemigoFinal darthvader("Darth Vader",500,200,83,50,400);

	// Posición inicial del héroe
	int fila_heroe = 0;
	int columna_heroe = 0;

	//Creamos el bucle for para que el héroe se mueva
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++)
		{
			if (fila == fila_heroe && columna == columna_heroe)
			{
				std::cout << "H ";
			}
			else {
				std::cout << tablero[fila][columna] << ' ';
			}
		}
		std::cout << std::endl;
	}

	std::cout << "Héroe: " << luke.nombre << ", Vida: " << luke.vida << std::endl;
	std::cout << "Enemigo: " << asalto.nombre << ", Vida: " << asalto.vida << std::endl;
	std::cout << "Enemigo Final: " << darthvader.nombre << ", Vida: " << darthvader.vida << std::endl;

	return 0;
}