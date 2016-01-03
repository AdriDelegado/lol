#include "UserInterface.h"

UserInterface::UserInterface(void){}
UserInterface::~UserInterface(void){}

void UserInterface::cursorSetTripulante()
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
void UserInterface::cursorSetSala()
{
	c.setTextColor(c.PRETO);
	c.setBackgroundColor(c.BRANCO);
	char tecla;

	int x = 27, y = 5;
	c.gotoxy(x, y);
	cout << '>';
	
	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER){
			c.setTextColor(c.BRANCO);
			c.gotoxy(x, y);
			cout << (char)219;
		
			this->setX(x);
			this->setY(y);
			break;
		}
			
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;
		
		c.setBackgroundColor(c.BRANCO);
		c.setTextColor(c.BRANCO);
		c.gotoxy(x, y);
		cout << (char)219;
		c.setTextColor(c.PRETO);
		
		if (tecla == c.CIMA)
		{
			if (y == 5 ){
				
				y = 17;
				c.gotoxy(x,y);
				cout << '>';
			}
			else if(y==17 ){
				
				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

		if (tecla == c.BAIXO)
		{
			if (y == 5){

				y = 17;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (y == 17){

				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
		}


		if (tecla == c.ESQUERDA)
		{
			if (x == 27)
			{
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
			if (x == 57)
			{
				x = 27;
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
	treeOfLife.DesenhoLimitesComandos();
	treeOfLife.DesenhoLimitesInfo();
	treeOfLife.DesenhoLimitesNave();
	treeOfLife.DesenhoPortas();
	treeOfLife.DesenhoSala();
	
	setSalasComuns(); // as Salas iniciasi da nave
	//c.gotoxy(6, 25); // posicçao da introduçao dos camndos
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
	
	setSalasUtilizador();  // funçao para o utilizador por as Salas
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.PRETO);
			
	//setTripulantesUtilizador();
	
	
	c.gotoxy(6, 23); // posicçao da info para introzur
	cout << "Introduza Comando";
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
	
	
	while (1)
	{
		limpaComando();
		
		string comando;

		getline(cin, comando);

		separaComando(comando, comObj);
		verificaComando(comObj, apolo1, flag);

	

	//	if(flag==0)
		//PlaySound(TEXT("..\\SOUNDS\\GOT.WAV"), NULL, SND_ASYNC | SND_LOOP);


		flag++;

	}
}

void UserInterface::setSalasComuns(){
	

	
	Propulsor *SalaPropE = new Propulsor(1,"Porpulsor E",1,5,3);
	
	apolo1.setRooms(*SalaPropE);

	Maquina *SalaMaquinas = new Maquina(5,"Maquinas",5,20, 9);
	apolo1.setRooms(*SalaMaquinas);

	SuporteVida *SalaSuportVida = new SuporteVida(6,"Suporte de Vida", 6,35,9);
	apolo1.setRooms(*SalaSuportVida);
	
	ControloEscudo *SalaControlo = new ControloEscudo(7,"Controlo de Escudos",7,50,9);
	apolo1.setRooms(*SalaControlo);
	
	Ponte *SalaPonte = new Ponte(8,"Ponte", 8,65,9);
	apolo1.setRooms(*SalaPonte);

	Propulsor *SalaPropD = new Propulsor(9,"Propulsor D", 9,5,15);
	apolo1.setRooms(*SalaPropD);


	
}
void  UserInterface::setSalasUtilizador(){
	int pos;
	string comando;
	
	
	c.gotoxy(6, 23); // posicçao da info para introzur
	cout << "Introduza Salas";
	int flag=0;
int x;
	for (int i = 0; i < 6; i++){
		cursorSetSala();
		c.setBackgroundColor(c.PRETO);
		c.setTextColor(c.AZUL);
		c.gotoxy(6, 25); // posicçao da introduçao dos camandos
		pos = veirifaPosica(this->x, this->y);
		
		for (x = 0; x != apolo1.getRooms().size(); x++){
				if (apolo1.getRooms().at(x)->getPosicao() == pos){
					c.gotoxy(84, 4); // posicçao da introduçao dos camandos
					cout << "esta posicao ja esta preenchida";
					flag = 1;
				}
				
		}
		if (flag == 0){
			getline(cin, comando);
			separaComando(comando, comObj);
			verificaComando(comObj, apolo1, 0);
			limpaComando();
		}
		else{
			i--;
			flag = 0;
		}
	}
}
void UserInterface::setTripulantesUtilizador(){
	string comando;
	c.gotoxy(6, 23); // posicçao da info para introzur
	cout << "Introduza um tripulante";
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
	getline(cin, comando);
	separaComando(comando, comObj);
	verificaComando(comObj, apolo1, 1);
}



void UserInterface::separaComando(string & comando, Comando & comObj)
{
	int i = 0;
	istringstream iss(comando);
	comObj.setX(this->x);
	comObj.setY(this->y);
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
	if (verifica >= 0 || verifica <= 1){
		if (comObj.getArg1() == "set"){
			if (comObj.getArg2() == "sala"){
				if (comObj.getArg3() == "beliche"){
					int pos = veirifaPosica(comObj.getX(), comObj.getY());
					Beliche *salaBeliche = new Beliche(2, "Beliche", pos, comObj.getX(), comObj.getY());
					apolo1.setRooms(*salaBeliche);
					escreve.escreveNomeSala(comObj.getArg3(), pos);
				}
			}

			else if (comObj.getArg2() == "tripulante"){
				if (comObj.getArg3() == "capitao"){
					int pos = veirifaPosica(comObj.getX(), comObj.getY());
					Capitao *novoCapitao = new Capitao();
					apolo1.setTripulacao(*novoCapitao);
					escreve.escreveNomeSala(comObj.getArg3(), pos);
				}
				if (comObj.getArg3() == "camisa_vermelha"){
					int pos = veirifaPosica(comObj.getX(), comObj.getY());
					CamisaVermelha *novoCamisaVermelha = new CamisaVermelha();
					apolo1.setTripulacao(*novoCamisaVermelha);
					escreve.escreveNomeSala(comObj.getArg3(), pos);
				}
				if (comObj.getArg3() == "robo"){
					int pos = veirifaPosica(comObj.getX(), comObj.getY());
					Robo *novoRobo = new Robo();
					apolo1.setTripulacao(*novoRobo);
					escreve.escreveNomeSala(comObj.getArg3(), pos);
				}
			}
		}
	}
	

}

void UserInterface::limpaComando(){
	/*Desenho regen;
	regen.DesenhoLimitesComandos();*/
	c.setBackgroundColor(c.PRETO);
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
	cout << "                    ";
	c.gotoxy(6, 25); // posicçao da introduçao dos camandos
}

int UserInterface::veirifaPosica(int x, int y){
	if (x == 27 && y == 5){
		return 2;
	}
	else if (x == 42 && y == 5){
		return 3;
	}
	else if (x == 57 && y == 5){
		return 4;
	}
	else if (x == 27 && y == 17){
		return 10;
	}
	else if (x == 42 && y == 17){
		return 11;
	}
	else if (x == 57 && y == 17){
		return 12;
	}
	return 0;
}

//void desenhaFundo(int x, int y);
//void desenhaSpaceShip(nave &n);                             //vai iniciar o Desenho da nave
//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirmação ou nao
//void escreveComando();								//funcao para pedir comandos
//void desenhaInterfaceInit();						//desenha uma intercafe
//void limpaComando();								//limpa comandos ??