#include "Sala.h"


Sala::Sala(){

}

Sala::Sala(int id, string nome){
	this->id = id;
	this->nome = nome;
	this-> x=0;
	this-> y=0;
	this-> oxigenio=100;
	this->integridade=100;
	this->brecha = false;
	this->fogo = false;
	this->curtoCircuito = false;  // o que é cc ?
	this->numeroOcupantes;

}

Sala::~Sala(void){}


