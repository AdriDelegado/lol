#pragma once
#ifndef SuporteVida_H
#define SuporteVida_H
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SuporteVida : public Sala
{
public:
	SuporteVida(string nome, int id);		// contrutor
	SuporteVida();				//contrutor por defeito
	~SuporteVida(void);			//destrutor

	//------GET---------
	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCurtoCircuito();
	int getNumeroOcupantes();
	int getX();
	int getY();
	string getNome();
	//------SET---------
	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCurtoCircuito(bool newValorCC);
	void setNumeroOcupantes(int newValorOcupantes);
	void setX(int x);
	void setY(int y);
	void setNome(string nome);
};


#endif