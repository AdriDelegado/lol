#include "UserInterface.h"

UserInterface::UserInterface(void){}
UserInterface::~UserInterface(void){}

void UserInterface::novoJogo(){
	//comando ordem; //verificar se vamos ter comandos para alem de andar de Sala em Sala 
	
	
	int flag = 0;
	//	nave SpaceShip;		//aqui ja tem as Salas
	Desenho treeOfLife;
	c.setBackgroundColor(c.PRETO);
	//c.setTextSize(10, 10);
	c.setScreenSize(600, 600);
	treeOfLife.DesenhoLimitesComandos();
	treeOfLife.DesenhoLimitesInfo();
	treeOfLife.DesenhoLimitesNave();
	treeOfLife.DesenhoPortas();
	treeOfLife.DesenhoSala();
	setSalasComuns(apolo1); // as Salas iniciasi da nave
	c.gotoxy(6, 25); // posicçao da introduçao dos camndos
	
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
	
	setSalasUtilizador(apolo1);  // funçao para o utilizador por as Salas
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
	c.gotoxy(6, 25); // posicçao da introduçao dos camndos
	cout << "                                                               ";
	c.gotoxy(6, 25); // posicçao da introduçao dos camndos

	setTripulantesUtilizador(apolo1);
	


	
	
	/*c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);*/
	
	
	//setNivelDificuldade(); // função para por os parametros do Jogo
 	

	//this->x = 0;
	//this->y = 0;
	//while (1)
	//{
	//	/*limpaComando();
	//	escreveComando();
	//	string comando;

	//	getline(cin, comando);*/

	//	/*separaComando(comando, comObj);
	//	trataComando(comObj, Mapa, pop);*/

	////	desenhaSpaceShip(SpaceShip);

	//	//if(flag==0)
	//	//PlaySound(TEXT("..\\SOUNDS\\GOT.WAV"), NULL, SND_ASYNC | SND_LOOP);


	//	flag++;

	//}
}

void UserInterface::setSalasComuns(SpaceShip &apolo1){
	

	
	Propulsor *SalaPropE = new Propulsor("Porpulsor E", 100, 1);
	
	apolo1.setRooms(*SalaPropE);

	Maquina *SalaMaquinas = new Maquina("Maquinas", 5);
	apolo1.setRooms(*SalaMaquinas);

	SuporteVida *SalaSuportVida = new SuporteVida("Suporte de Vida", 6);
	apolo1.setRooms(*SalaSuportVida);
	
	ControloEscudo *SalaControlo = new ControloEscudo("Controlo de Escudos", 100, 100, 7);
	apolo1.setRooms(*SalaControlo);
	
	Ponte *SalaPonte = new Ponte("Ponte", 8);
	apolo1.setRooms(*SalaPonte);

	Propulsor *SalaPropD = new Propulsor("Propulsor D", 100, 9);
	apolo1.setRooms(*SalaPropD);


	
}
void  UserInterface::setSalasUtilizador(SpaceShip &apolo1){
	string comando;
	c.gotoxy(6, 23); // posicçao da info para introzur
	cout << "Introduza Salas";
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
	getline(cin, comando);
	separaComando(comando, comObj);
	verificaComando(comObj,apolo1,0);


}
void UserInterface::setTripulantesUtilizador(SpaceShip &apolo1){
	string comando;
	c.gotoxy(6, 23); // posicçao da info para introzur
	cout << "Introduza um tripulante";
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
	getline(cin, comando);
	separaComando(comando, comObj);
	verificaComando(comObj, apolo1, 1);
}
//void desenhaFundo(int x, int y);
//void desenhaSpaceShip(nave &n);                             //vai iniciar o Desenho da nave
//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
//void escreveComando();								//funcao para pedir comandos
//void desenhaInterfaceInit();						//desenha uma intercafe
//void limpaComando();								//limpa comandos ??

void UserInterface::separaComando(string & comando, Comando & comObj)
{
	int i = 0;
	istringstream iss(comando);

	do
	{
		string sub;
		iss >> sub;

		if (i == 0)
			comObj.setArg1(sub);
		else if (i == 1)
			comObj.setArg2(sub);
		else if (i == 2)
			comObj.setArg3(sub);
		else if (i == 3)
			comObj.setArg4(sub);
	
		i++;
	} while (iss);


}


void UserInterface::verificaComando(Comando &comObj, SpaceShip &apolo1, int verifica)
{
	Desenho escreve;
	if (verifica == 0){		//o camndo vem da funcao setSalasUtilizador()
		if (comObj.getArg3() == "beliche"){
		
			Beliche *salaBeliche = new Beliche(comObj.getArg3(), atoi(comObj.getArg4().c_str()));
				apolo1.setRooms(*salaBeliche);

				escreve.escreveNomeSala(comObj.getArg3(), atoi(comObj.getArg4().c_str()));

			}
	}
	else if (verifica == 1){
		if (comObj.getArg3() == "Capitao"){
			Capitao *newCapitao = new Capitao();
			apolo1.setTripulacao(*newCapitao);
			
			escreve.desenhaTripulante(comObj.getArg3(), atoi(comObj.getArg4().c_str()));
		}
	}
	

}
