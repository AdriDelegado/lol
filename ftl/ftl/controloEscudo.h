#pragma once
#ifndef	ControloEscudo_H
#define ControloEscudo_H
#include <iostream>
#include <string>
#include <vector>

#include "Sala.h"
using namespace std;

class ControloEscudo : public Sala{
	int nivelEscudo;
	int nivelEscudoActual;
	
public:
	ControloEscudo(int id, string nome, int posicao, int x, int y);		//contrutor
	~ControloEscudo(void);								//destrutor

	//------GET---------
	virtual	int getNivelEscudo();
	virtual int getNivelEscudoActual();
	
	//------SET---------
	virtual void setNivelEscudo(int newNivelEscudo);
	virtual void setNivelEscudoActual(int newNivelEscudoActual);
	


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
	void setPosicao(int newPoscao);
};


#endif