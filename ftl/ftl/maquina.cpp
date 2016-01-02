#include "Maquina.h"

Maquina::Maquina(int id, string nome, int posicao, int x, int y) : Sala(id, nome, posicao, x, y){	}	//contrutor


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
int Maquina::getPosicao(){
	return this->posicao;
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
void Maquina::setPosicao(int newPosicao){
	this->posicao = newPosicao;

}