#pragma once
#ifndef Sala_H
#define Sala_H

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Sala
{
protected:
	int x;
	int y;
	string nome;
	int id;
	int posicao;
	int oxigenio;
	int integridade;
	bool brecha;
	bool fogo;
	bool curtoCircuito; 
	int numeroOcupantes;



public:
	Sala(int id, string nome, int posicao, int x, int y);
	
	virtual ~Sala(void);


	//------GET---------
	virtual int getId() = 0;
	virtual int getOxigenio() = 0;
	virtual int getIntegridade() = 0;
	virtual bool getBrecha() = 0;
	virtual bool getFogo() = 0;
	virtual bool getCurtoCircuito() = 0;  
	virtual int getNumeroOcupantes() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual string getNome() = 0;
	virtual int getPosicao() = 0;
	//------SET---------
	virtual void setId(int id) = 0;
	virtual void setOxigenio(int newOxigenio) = 0;
	virtual void setIntegridade(int newIntegridade) = 0;
	virtual void setBrecha(bool newValorBrecha) = 0;
	virtual void setFogo(bool newValorFogo) = 0;
	virtual void setCurtoCircuito(bool newValorCC) = 0; 
	virtual void setNumeroOcupantes(int newValorOcupantes) = 0;
	virtual void setX(int x) = 0;
	virtual void setY(int y) = 0;
	virtual void setNome(string nome) = 0;
	virtual void setPosicao(int newPosicao) = 0;
	
};


#endif