#include "UserInterface.h"



UserInterface::UserInterface(void){
	this->turno = 0;
}
UserInterface::~UserInterface(void){}
void UserInterface::cursorSetTripulante()
{
	char tecla;

	int x = 12, y = 5;
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
			else if (y == 5){				// verfica a posi�a�o do ">" para qeu nao exeda o limite desejado
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
			else if (y == 17){				// verfica a posi�a�o do ">" para qeu nao exeda o limite desejado
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
			else if (x == 12){				// verfica a posi�a�o do ">" para qeu nao exeda o limite desejado
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
			else if (x == 57 && y != 11){				// verfica a posi�a�o do ">" para qeu nao exeda o limite desejado
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
void UserInterface::novoJogo(int dificuldade){
	//comando ordem; //verificar se vamos ter comandos para alem de andar de Sala em Sala 
	setCache2(1);

	//	nave SpaceShip;		//aqui ja tem as Salas
	Desenho treeOfLife;
	treeOfLife.DesenhoLimitesComandos();
	treeOfLife.DesenhoLimitesInfo();
	treeOfLife.DesenhoLimitesNave();
	treeOfLife.DesenhoPortas();
	treeOfLife.DesenhoSala();
	jogo.setDificuldade(dificuldade);
	jogo.calculaMilhasIniciais(dificuldade);
	jogo.setMilhasActuais(0);
	setSalasComuns(); // as Salas iniciasi da nave

	c.setTextColor(c.VERDE);
	c.setBackgroundColor(c.PRETO);
	
	
	
	
	
	setSalasUtilizador();  // fun�ao para o utilizador por as Salas
	c.setTextColor(c.VERDE);
	c.setBackgroundColor(c.PRETO);

	setTripulantesUtilizador();
	
	c.setTextColor(c.VERDE);
	c.setBackgroundColor(c.PRETO);
	
	limpaComando(1);

	c.gotoxy(6, 24); // posic�ao da info para introzur
	cout << "Introduza Comando";
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
	

	while (1)
	{
	
		limpaComando(0);

		string comando;

		getline(cin, comando);

		separaComando(comando, comObj);
		verificaComando(comObj, apolo1 );



		//	if(flag==0)
		//PlaySound(TEXT("..\\SOUNDS\\GOT.WAV"), NULL, SND_ASYNC | SND_LOOP);




	}
}
void UserInterface::setSalasComuns(){



	Propulsor *SalaPropE = new Propulsor(1, "Porpulsor E", 1, 5, 3);

	apolo1.setRooms(*SalaPropE);

	Maquina *SalaMaquinas = new Maquina(5, "Maquinas", 5, 20, 9);
	apolo1.setRooms(*SalaMaquinas);

	SuporteVida *SalaSuportVida = new SuporteVida(6, "Suporte de Vida", 6, 35, 9);
	apolo1.setRooms(*SalaSuportVida);

	ControloEscudo *SalaControlo = new ControloEscudo(7, "Controlo de Escudos", 7, 50, 9);
	apolo1.setRooms(*SalaControlo);

	Ponte *SalaPonte = new Ponte(8, "Ponte", 8, 65, 9);
	apolo1.setRooms(*SalaPonte);

	Propulsor *SalaPropD = new Propulsor(9, "Propulsor D", 9, 5, 15);
	apolo1.setRooms(*SalaPropD);



}
void UserInterface::setSalasUtilizador(){
	int pos;
	string comando;
	c.gotoxy(6, 24); // posic�ao da info para introzur
	cout << "Introduza Salas";
	int flag = 0;
	int x;
	for (int i = 0; i < 6; i++){
		
		cursorSetSala();
		c.setBackgroundColor(c.PRETO);
		c.setTextColor(c.AZUL);
		c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
		pos = veirifaPosica(this->x, this->y);

		for (x = 0; x != apolo1.getRooms().size(); x++){
			if (apolo1.getRooms().at(x)->getPosicao() == pos){
				c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
				cout << "esta posicao ja esta preenchida";
				flag = 1;
			}

		}
		if (flag == 0){
			getline(cin, comando);
			separaComando(comando, comObj);
			verificaComando(comObj, apolo1);
			limpaComando(0);
		}
		else{
			i--;
			flag = 0;
		}
	}
}
void UserInterface::setTripulantesUtilizador(){
	string comando;
	int cont=0;
	c.gotoxy(6, 24); // posic�ao da info para introzur
	cout << "Introduza um tripulante";
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
	setCache(0);
	for (int x = 0;x!= apolo1.getRooms().size(); x++){
		if(apolo1.getRooms().at(x)->getId() == 2){
			cont++;
		}
	}
	int tam=1;
	tam = cont + tam;
	for (int i = 0; i < tam; i++){
		cursorSetTripulante();
		c.setBackgroundColor(c.PRETO);
		c.setTextColor(c.VERDE);
		c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
		getline(cin, comando);
		separaComando(comando, comObj);
		verificaComando(comObj, apolo1);
		limpaComando(0);
	}

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
void UserInterface::verificaComando(Comando &comObj, SpaceShip &apolo1)
{

	Desenho escreve;
	limpaCampoInformacao();
	c.setTextColor(c.VERDE);
	if (comObj.getArg1() == "set"){
		if (comObj.getArg2() == "sala"){
			if (comObj.getArg3() == "beliche"){
				int pos = veirifaPosica(comObj.getX(), comObj.getY());
				Beliche *salaBeliche = new Beliche(2, "Beliche", pos, comObj.getX(), comObj.getY());
				apolo1.setRooms(*salaBeliche);
				escreve.escreveNomeSala(comObj.getArg3(), pos);
				c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
				cout << salaBeliche->getNome() << " criado com sucesso";
			}
		}

		else if (comObj.getArg2() == "tripulante"){
			if (comObj.getArg3() == "capitao"){
				int pos = veirifaPosica(comObj.getX(), comObj.getY());

				setCache(getCache() + 1);
				ostringstream s;
				s << "C" << getCache();
				string id = (s.str());
				Capitao *novoCapitao = new Capitao(id);
				novoCapitao->setIdSala(pos);
				apolo1.setTripulacao(*novoCapitao);
				escreve.desenhaTripulante(id, pos, 0);

				c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
				cout << novoCapitao->getNome() << " criado com sucesso";
			}
			if (comObj.getArg3() == "camisa_vermelha"){
				int pos = veirifaPosica(comObj.getX(), comObj.getY());
				setCache(getCache() + 1);
				ostringstream s;
				s << "V" << getCache();
				string id = (s.str());
				CamisaVermelha *novoCamisaVermelha = new CamisaVermelha(id);
				novoCamisaVermelha->setIdSala(pos);
				apolo1.setTripulacao(*novoCamisaVermelha);
				escreve.desenhaTripulante(id, pos, 0);

				c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
				cout << novoCamisaVermelha->getNome() << " criado com sucesso";
			}
			if (comObj.getArg3() == "robo"){
				int pos = veirifaPosica(comObj.getX(), comObj.getY());
				setCache(getCache() + 1);
				ostringstream s;
				s << "R" << getCache();
				string id = (s.str());
				Robo *novoRobo = new Robo(id);
				novoRobo->setIdSala(pos);
				apolo1.setTripulacao(*novoRobo);
				escreve.desenhaTripulante(id, pos, 0);

				c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
				cout << novoRobo->getNome() << " criado com sucesso";
			}
		}
	}
	else if (comObj.getArg1() == "move"){
		for (int i = 0; i != apolo1.getTripulacao().size(); i++){
			if (comObj.getArg2() == apolo1.getTripulacao().at(i)->getId()){
				if (atoi(comObj.getArg3().c_str()) >= 1 && atoi(comObj.getArg3().c_str()) <= 12){


					escreve.desenhaTripulante(comObj.getArg2(), atoi(comObj.getArg3().c_str()), apolo1.getTripulacao().at(i)->getIdSala());
					apolo1.getTripulacao().at(i)->setIdSala(atoi(comObj.getArg3().c_str()));
					//mostrar no iforma��o de onde saiu e para onde foi o tripulante
				}
			}
		}
	}
	else if (comObj.getArg1() == "go"){
		if (jogo.VerificaNaveAnda(apolo1) == true){

			Propulsor *pE = (Propulsor*)apolo1.getRooms().at(0);
			Propulsor *pD = (Propulsor*)apolo1.getRooms().at(5);

			jogo.calculaMilhasActual(pD->getNivelPropulsor(), pE->getNivelPropulsor());


			jogo.repararIntegridade(apolo1);
			this->setTurno(this->getTurno() + 1);
			if (getTurno() == 1 || getTurno() == 5 * getCache2()){
				jogo.eventos(apolo1);
				setCache2(getCache2() + 1);
			}

		}
		else{
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << "Verificar Integridade:";
			c.gotoxy(84, 5); // posic�ao da introdu�ao dos camandos
			cout << "sala das maquinas" << "propulsores";
			c.gotoxy(84, 6); // posic�ao da introdu�ao dos camandos
			cout << "verificar tripulante na PONTE";
		}

	}
	else if (comObj.getArg1() == "help"){
		escreve.escreveComandos();

	}
	else if (comObj.getArg1() == "id"){
		showID(apolo1);
	}
	else{
		c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
		cout << "comando introduzido nao valido";
	}
	if (jogo.VerificaFimJogo(apolo1)== true){
		c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
		cout << "fim Jogo";
		exit(0);
	}
}
void UserInterface::limpaCampoInformacao(){
	for (int i = 4; i < 20; i++){
		c.gotoxy(84, i); // posic�ao da introdu�ao dos camandos
		cout << "                                        ";
	}
	Desenho d;

	d.DesenhoLimitesInfo();
}
void UserInterface::limpaComando(int v){
	if (v == 1){
		c.gotoxy(6, 24); // posic�ao da introdu�ao dos camandos
		cout << "                                               ";
	}
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
	cout << "                                               ";
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
}
int UserInterface::veirifaPosica(int x, int y){
	if (x == 12 && y == 5){
		return 1;
	}
	else if (x == 27 && y == 5){
		return 2;
	}
	else if (x == 42 && y == 5){
		return 3;
	}
	else if (x == 57 && y == 5){
		return 4;
	}
	else if (x == 27 && y == 11){
		return 5;
	}
	else if (x == 42 && y == 11){
		return 6;
	}
	else if (x == 57 && y == 11){
		return 7;
	}
	else if (x == 72 && y == 11){
		return 8;
	}
	else if (x == 12 && y == 17){
		return 9;
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
void UserInterface::showID(SpaceShip &apolo1){
	for (int i = 0; i != apolo1.getTripulacao().size(); i++){
		c.gotoxy(84, 4+i); // posic�ao da introdu�ao dos camandos
		cout << apolo1.getTripulacao().at(i)->getId();
	}
	
	
}

//void respostasComandos(string introComando, string nome);	// recebe os comandos e devolve uma resposta ao ecra de confirma��o ou nao

