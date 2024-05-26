#include "Personaje.h"
#include "EnemigoFinal.h"
#include <iostream>

int main() {
	//Creamos personaje del heroe
	Heroe luke("Luke Skywalker", 100, 50, 90, 60);

	//Creamos personaje del enemigo
	Enemigo asalto("Tropas de Asalto", 200, 60, 80, 50);

	//Creamos el enemigo final
	EnemigoFinal darthvader("Darth Vader",500,200,83,50,400);

	std::cout << "Héroe: " << luke.nombre << ", Vida: " << luke.vida << std::endl;
	std::cout << "Enemigo: " << asalto.nombre << ", Vida: " << asalto.vida << std::endl;
	std::cout << "Enemigo Final: " << darthvader.nombre << ", Vida: " << darthvader.vida << std::endl;

	return 0;
}