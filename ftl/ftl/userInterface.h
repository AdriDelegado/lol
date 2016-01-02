#pragma once
#ifndef UserInterface_H
#define UserInterface_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
// falta add mais includes das restantes classes
#include "SpaceShip.h"
#include "Beliche.h"
#include "ControloEscudo.h"
#include "Maquina.h"
#include "Ponte.h"
#include "Propulsor.h"
#include "SuporteVida.h"
#include "consola.h"
#include "comando.h"
#include "Desenho.h"
#include "unidade.h"
#include "capitao.h"


using namespace std;

class UserInterface{
	//nave SpaceShip;
	int x, y; // para desenhas as merdas ?
	static int cor; // para a cor de algo ??
	Consola c;
	Comando comObj;

	SpaceShip apolo1;
public:
	UserInterface(void);
	~UserInterface(void);

	
	void novoJogo();
	void setSalasComuns(SpaceShip &apolo1);
	void setSalasUtilizador(SpaceShip &apolo1);
	void setTripulantesUtilizador(SpaceShip &apolo1);
	void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
	void escreveComando();								//funcao para pedir comandos
	void limpaComando();								//limpa comandos ??
	void separaComando(string & comando, Comando & comObj);
	void verificaComando(Comando &comObj, SpaceShip &apolo1, int verifica);
	int getCodeComando(Comando &comObj);
	void cursorSetTripulante();
	void cursorSetSala();
	/*void separaComando(string & comando, Comando & comObj);
	void trataComando(Comando & comObj, Territorio & m, vector <Populacao*> & pop);*/
};

#endif