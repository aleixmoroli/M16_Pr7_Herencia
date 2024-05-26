#pragma once
#include "Personaje.h"
#include <iostream>

using namespace std;

class EnemigoFinal : public Personaje
{
private:
	int FuerteAtaque;

public:
	EnemigoFinal(std::string NombreEnemigoFinal, int VidaEnemigoFinal, int AtaqueEnemigoFinal, int PosicionXEnemigoFinal, int PosicionYEnemigoFinal,
		int FuerteAtaqueEnemigoFinal)
		: Personaje() {
		nombre = NombreEnemigoFinal;
		vida = VidaEnemigoFinal;
		ataque = AtaqueEnemigoFinal;
		posicionX = PosicionXEnemigoFinal;
		posicionY = PosicionYEnemigoFinal;
		FuerteAtaque = FuerteAtaqueEnemigoFinal;
	}

	int getFuerteAtaque();

	void setFuerteAtaque(int FuerteAtaqueEnemigoFinal);
};