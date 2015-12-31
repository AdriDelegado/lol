#include "Maquina.h"

Maquina::Maquina(string nome, int id) : Sala(id, nome){	}	//contrutor

Maquina::Maquina(){}						//contrutor por defeito
Maquina::~Maquina(void){}					//destrutor

//------GET---------
int Maquina::getId(void){
	return id;
}
int Maquina::getOxigenio(){
	return this->oxigenio;
}
int Maquina::getIntegridade(){
	return this->integridade;
}
int Maquina::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool Maquina::getBrecha(){
	return this->brecha;
}
bool Maquina::getFogo(){
	return this->fogo;
}
bool Maquina::getCurtoCircuito(){  // o que é cc ?
	return this->curtoCircuito;
}
int Maquina::getX() {
	return this->x;
}

int Maquina::getY() {
	return this->y;
}
string Maquina::getNome() {
	return this->nome;
}
//------SET---------
void Maquina::setId(int id){
	this->id = id;
}
void Maquina::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void Maquina::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void Maquina::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void Maquina::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void Maquina::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void Maquina::setCurtoCircuito(bool newValorCurtoCircuito){  // o que é cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void Maquina::setX(int x) {
	this->x = x;
}

void Maquina::setY(int y) {
	this->y = y;
}
void Maquina::setNome(string nome){
	this->nome = nome;
}