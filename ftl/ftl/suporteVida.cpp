#include "SuporteVida.h"

SuporteVida::SuporteVida(int id, string nome, int posicao, int x, int y) : Sala(id, nome, posicao, x, y){}		// contrutor
SuporteVida::~SuporteVida(void){}			//destrutor


//------GET---------
int SuporteVida::getId(void){
	return this->id;
}
int SuporteVida::getOxigenio(){
	return this->oxigenio;
}
int SuporteVida::getIntegridade(){
	return this->integridade;
}
int SuporteVida::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool SuporteVida::getBrecha(){
	return this->brecha;
}
bool SuporteVida::getFogo(){
	return this->fogo;
}
bool SuporteVida::getCurtoCircuito(){ 
	return this->curtoCircuito;
}
int SuporteVida::getX() {
	return this->x;
}
int SuporteVida::getY() {
	return this->y;
}
string SuporteVida::getNome() {
	return this->nome;
}
int SuporteVida::getPosicao(){
	return this->posicao;
}
//------SET---------
void SuporteVida::setId(int id){
	this->id = id;
}
void SuporteVida::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void SuporteVida::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void SuporteVida::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void SuporteVida::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void SuporteVida::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void SuporteVida::setCurtoCircuito(bool newValorCurtoCircuito){  // o que é cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void SuporteVida::setX(int x) {
	this->x = x;
}

void SuporteVida::setY(int y) {
	this->y = y;
}
void SuporteVida::setNome(string nome){
	this->nome = nome;
}
void SuporteVida::setPosicao(int newPosicao){
	this->posicao = posicao;
}