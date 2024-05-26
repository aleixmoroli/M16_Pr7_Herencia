#pragma once

#include <iostream>

using namespace std;

class Personaje
{
public:
	std::string nombre;
	int vida;
	int ataque;
	int posicionX;
	int posicionY;
};

class Heroe : public Personaje {
public:
	Heroe(std::string NombreHeroe, int VidaHeroe, int AtaqueHeroe, int PosicionXHeroe, int PosicionYHeroe)
		: Personaje(){
		nombre = NombreHeroe;
		vida = VidaHeroe;
		ataque = AtaqueHeroe;
		posicionX = PosicionXHeroe;
		posicionY = PosicionYHeroe;
	}
	std::string getNombre();
	void setNombre(string NombreHeroe);
	int getVida();
	void setVida(int VidaHeroe);
	int getAtaque();
	void setAtaque(int AtaqueHeroe);
	int getPosicionX();
	void setPosicionX(int PosicionXHeroe);
	int getPosicionY();
	void setPosicionY(int PosicionYHeroe);
};

class Enemigo : public Personaje {
public:
	Enemigo(std::string NombreEnemigo, int VidaEnemigo, int AtaqueEnemigo, int PosicionXEnemigo, int PosicionYEnemigo)
		: Personaje() {
		nombre = NombreEnemigo;
		vida = VidaEnemigo;
		ataque = AtaqueEnemigo;
		posicionX = PosicionXEnemigo;
		posicionY = PosicionYEnemigo;
	}
	std::string getNombre();
	void setNombre(string NombreEnemigo);
	int getVida();
	void setVida(int VidaEnemigo);
	int getAtaqueEnemigo();
	void getAtaque(int AtaqueEnemigo);
	int getPosicionX();
	void setPosicionX(int PosicionXEnemigo);
	int getPosicionY();
	void setPosicionY(int PosicionYEnemigo);
};