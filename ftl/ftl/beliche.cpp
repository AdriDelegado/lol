#include "Beliche.h"

Beliche::Beliche(int id,string nome,int posicao,int x,int y) : Sala(id, nome, posicao, x, y){			//contrutor
	this->numeroBeliches = 0;
	
}
Beliche::Beliche(){}
Beliche::~Beliche(void){}				//destrutor

//------GET---------
int Beliche::getNumeroBeliches(){
	return this->numeroBeliches;
}


//------SET---------
void Beliche::setNumeroBeliches(int newValorBeliches){
	this->numeroBeliches = newValorBeliches;
}



//------GET---------
int Beliche::getId(void){
	return id;
}
int Beliche::getOxigenio(){
	return this->oxigenio;
}
int Beliche::getIntegridade(){
	return this->integridade;
}
int Beliche::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool Beliche::getBrecha(){
	return this->brecha;
}
bool Beliche::getFogo(){
	return this->fogo;
}
bool Beliche::getCurtoCircuito(){  // o que é cc ?
	return this->curtoCircuito;
}
int Beliche::getX() {
	return this->x;
}

int Beliche::getY() {
	return this->y;
}
string Beliche::getNome() {
	return this->nome;
}
int Beliche::getPosicao(){
	return this->posicao;
}
//------SET---------
void Beliche::setId(int id){
	this->id = id;
}
void Beliche::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void Beliche::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void Beliche::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void Beliche::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void Beliche::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void Beliche::setCurtoCircuito(bool newValorCurtoCircuito){  // o que é cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void Beliche::setX(int x) {
	this->x = x;
}

void Beliche::setY(int y) {
	this->y = y;
}
void Beliche::setNome(string nome){
	this->nome = nome;
}
void Beliche::setPosicao(int newPosicao){
	this->posicao = newPosicao;
}