#pragma once
#ifndef SpaceShip_H
#define SpaceShip_H
#include "Sala.h"
#include "tripulante.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SpaceShip
{
	string nomeSpaceShip;
	vector <Sala *> rooms;
	vector <Unidade *> tripulacao;
public:
	SpaceShip();
	~SpaceShip(void);
	vector <Unidade *> getTripulacao();
	vector <Sala *> getRooms();
	string getNome(){ return this->nomeSpaceShip; }
	void setTripulacao(Unidade & t);
	void setRooms(Sala &s);
	void setNome(string nome){ this->nomeSpaceShip = nome; }


};


#endif