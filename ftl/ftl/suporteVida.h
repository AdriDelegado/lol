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

	SuporteVida(int id, string nome, int posicao, int x, int y);				//contrutor por defeito
	~SuporteVida(void);			//destrutor
	SuporteVida();
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
	int getPosicao();
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
	void setPosicao(int newPosicao);
};


#endif