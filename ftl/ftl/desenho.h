#pragma once
#ifndef DesenhoMAPA_H
#define DesenhoMAPA_H
#include "consola.h"
#include <iostream>

using namespace std;

class Desenho
{
	int x;
	int y;

public:
	Desenho(int x, int y);
	Desenho();
	~Desenho();

	void DesenhoLimitesNave();
	void DesenhoLimitesInfo();
	void DesenhoLimitesComandos();
	void DesenhoPortas();
	void DesenhoSala();
	void escreveNomeSala(string nome, int posicao);
	void desenhaTripulante(string nome, int posicao);
};

#endif