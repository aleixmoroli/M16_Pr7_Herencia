#include "Personaje.h"
#include <iostream>


std::string Heroe::getNombre()
{
	return nombre;
}

void Heroe::setNombre(string NombreHeroe)
{
	nombre = NombreHeroe;
}

int Heroe::getVida()
{
	return vida;
}

void Heroe::setVida(int VidaHeroe)
{
	vida = VidaHeroe;
}

int Heroe::getAtaque()
{
	return ataque;
}

void Heroe::setAtaque(int AtaqueHeroe)
{
	ataque = AtaqueHeroe;
}

int Heroe::getPosicionX()
{
	return posicionX;
}

void Heroe::setPosicionX(int PosicionXHeroe)
{
	posicionX = PosicionXHeroe;
}

int Heroe::getPosicionY()
{
	return posicionY;
}

void Heroe::setPosicionY(int PosicionYHeroe)
{
	posicionY = PosicionYHeroe;
}

std::string Enemigo::getNombre()
{
	return nombre;
}

void Enemigo::setNombre(string NombreEnemigo)
{
	nombre = NombreEnemigo;
}

int Enemigo::getVida()
{
	return vida;
}

void Enemigo::setVida(int VidaEnemigo)
{
	vida = VidaEnemigo;
}

int Enemigo::getAtaqueEnemigo()
{
	return ataque;
}

void Enemigo::getAtaque(int AtaqueEnemigo)
{
	ataque = AtaqueEnemigo;
}

int Enemigo::getPosicionX()
{
	return posicionX;
}

void Enemigo::setPosicionX(int PosicionXEnemigo)
{
	posicionX = PosicionXEnemigo;
}

int Enemigo::getPosicionY()
{
	return posicionY;
}

void Enemigo::setPosicionY(int PosicionYEnemigo)
{
	posicionY = PosicionYEnemigo;
}
