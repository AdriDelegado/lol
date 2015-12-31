#include "UserInterface.h"

UserInterface::UserInterface(void){}
UserInterface::~UserInterface(void){}

void UserInterface::cursor()
{
	char tecla;

	int x = 12, y = 5;
	c.gotoxy(x, y);
	cout << '>';
	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER)
			c.gotoxy(6, 25);
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.gotoxy(x, y);
		cout << (char)219;

		if (tecla == c.CIMA)
		{
			if (x == 72)
			{
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (x == 12 && y == 17)
			{
				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (y == 5){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 17;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				y = y - 6;
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.BAIXO)
		{
			if (x == 72)
			{
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (x == 12 && y == 5)
			{
				y = 17;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (y == 17){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				y = y + 6;
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.ESQUERDA)
		{
			if (x == 27 && y == 11)
			{
				x = 72;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (x == 12){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				x = 57;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				x = x - 15;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

		if (tecla == c.DIREITA)
		{
			if (x == 72 && y == 11)
			{
				x = 27;;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (x == 57 && y != 11){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				x = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				x = x + 15;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

	}
}

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
	cursor();
	setSalasComuns(apolo1); // as Salas iniciasi da nave
	//c.gotoxy(6, 25); // posicçao da introduçao dos camndos
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
	
	setSalasUtilizador(apolo1);  // funçao para o utilizador por as Salas
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
	//c.gotoxy(6, 25); // posicçao da introduçao dos camndos
	//cout << "                                                               ";
	//c.gotoxy(6, 25); // posicçao da introduçao dos camndos

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
