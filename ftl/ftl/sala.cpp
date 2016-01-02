#include "Sala.h"


Sala::Sala(){

}

Sala::Sala(int id, string nome, int posicao,int x, int y){
	this->id = id;
	this->nome = nome;
	this-> x=x;
	this-> y=y;
	this-> oxigenio=100;
	this->integridade=100;
	this->brecha = false;
	this->fogo = false;
	this->curtoCircuito = false;  // o que é cc ?
	this->numeroOcupantes = 0;

}

Sala::~Sala(void){}


