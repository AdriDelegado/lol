#include"Ponte.h"

Ponte::Ponte(int id, string nome, int posicao, int x, int y) :Sala(id, nome, posicao, x, y){}			//contrutor
Ponte::~Ponte(void){}			//destrutor
Ponte::Ponte(){}
//------GET---------
int Ponte::getId(void){
	return id;
}
int Ponte::getOxigenio(){
	return this->oxigenio;
}
int Ponte::getIntegridade(){
	return this->integridade;
}
int Ponte::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool Ponte::getBrecha(){
	return this->brecha;
}
bool Ponte::getFogo(){
	return this->fogo;
}
bool Ponte::getCurtoCircuito(){  // o que � cc ?
	return this->curtoCircuito;
}
int Ponte::getX() {
	return this->x;
}

int Ponte::getY() {
	return this->y;
}
string Ponte::getNome() {
	return this->nome;
}
int Ponte::getPosicao(){
	return this->posicao;
}
//------SET---------
void Ponte::setId(int id){
	this->id = id;
}
void Ponte::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void Ponte::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void Ponte::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void Ponte::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void Ponte::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void Ponte::setCurtoCircuito(bool newValorCurtoCircuito){  // o que � cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void Ponte::setX(int x) {
	this->x = x;
}

void Ponte::setY(int y) {
	this->y = y;
}
void Ponte::setNome(string nome){
	this->nome = nome;
}
void Ponte::setPosicao(int newPosicao){
	this->posicao = posicao;
}