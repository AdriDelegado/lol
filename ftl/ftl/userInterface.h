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
#include "camisaVermelha.h"
#include "robo.h"
#include "jogo.h"
#include<random>
using namespace std;

class UserInterface{
	//nave SpaceShip;
	int x, y; // para desenhas as merdas ?
	static int cor; // para a cor de algo ??
	Consola c;
	Comando comObj;
	int cache;
	SpaceShip apolo1;
	jogo jogo;
	int turno;
	int cache2;
public:
	UserInterface(void);
	~UserInterface(void);
	int getCache(){ return this->cache; };
	void setCache(int cache){ this->cache = cache; };
	int getCache2(){ return this->cache2; };
	void setCache2(int cache2){ this->cache2 = cache2; };
	void setX(int x){ this->x = x; };
	void setY(int y){ this->y = y; };
	int getX() { return this->x; };
	int getY() { return this->y; };
	void novoJogo(int dificuldade);
	void setSalasComuns();
	void setSalasUtilizador();
	void setTripulantesUtilizador();
	void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
	//void escreveComando();								//funcao para pedir comandos
	void limpaComando(int v);								//limpa comandos ??
	void separaComando(string & comando, Comando & comObj);
	void verificaComando(Comando &comObj, SpaceShip &apolo1);
	int getCodeComando(Comando &comObj);
	void cursorSetTripulante();
	void cursorSetSala();
	int veirifaPosica(int x,int y);
	void limpaCampoInformacao();
	int getTurno(){ return this->turno; };
	void setTurno(int nT){ this->turno = nT; };
	void showID(SpaceShip &apolo1);
	/*void separaComando(string & comando, Comando & comObj);
	void trataComando(Comando & comObj, Territorio & m, vector <Populacao*> & pop);*/
};

#endif