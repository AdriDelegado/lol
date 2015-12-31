#include "SpaceShip.h"

SpaceShip::SpaceShip(){

}
SpaceShip::~SpaceShip(void){}


vector <Unidade *> SpaceShip::getTripulacao(){
	return this->tripulacao;
}
vector <Sala *> SpaceShip::getRooms(){
	return this->rooms;
}

void SpaceShip::setTripulacao(Unidade & t){
	this->tripulacao.push_back(&t);
}
void SpaceShip::setRooms(Sala &s){
	this->rooms.push_back(&s);
}
