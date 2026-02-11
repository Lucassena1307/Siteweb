  #include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL,"");


    int opcao;
    int caixa;
    string text;
    int carrinho;
    string lista[5];
    float total = 0;
    int pagamento;
    string cpf;
    string nome, telefone, ender;



    carrinho = 0;
    
     
	
    	  cout <<">> ";
  	cin >> text;
		cout<<endl;
			cout<<endl;


    while (true) {
    	
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
    	
    
	cout <<"    _____________________________________________________________________" <<endl;
	cout <<"  //    __________      _________    __________      _________   .       / " <<endl;
	cout <<" |    |          |  . |         |  |          |    |         |          /  "<<endl;
	cout <<" |    |          |    |         |  |          |  . |         |         /    |"<<endl;
	cout <<" |    |          |    |         |  |          |    |         |        / .   |"<<endl;	
	cout <<" |    |__________|    |_________|  |__________|    |_________|    .  /      " <<endl;
	cout <<" | .  |               |         |  |               |         |      /    .  " <<endl;	
	cout <<" |    |     >    .    |         |  |    .          |         |     /       " <<endl;	
	cout <<" |    |   >           |         |  |           >   |         |    /        " <<endl;
	cout <<" |    |               |         |  |               |         |   /        " <<endl;	
	cout <<"  \\\_____________________________________________________________/ " <<endl;
	cout <<"                                    _____________________________________________________________________" <<endl;
	cout <<"                                   //    __________          _________   _________     _________                           / " <<endl;
	cout <<"                                  |    |          |  . |             /           /    |         |           /    /   /  "<<endl;
	cout <<"                                  |    |          |    |            /           /     |              /              /    |"<<endl;
	cout <<"                                  |    |          |    |     .     /           /      |                /      /        / .   |"<<endl;	
	cout <<"                                  |    |__________|    |          /    >:     /       |_________|              /               " <<endl;
	cout <<"                                  | .  |               |         /           /  >     |             /   /    /     |      /    .  " <<endl;	
	cout <<"                                  |    |     >    .    |        /    .      /         |         |                        " <<endl;	
	cout <<"                                  |    |   >           |       /           /    /     |          >   |         |    /        " <<endl;
	cout <<"                                  |    |               |      /_________  /_________  |         |          /       >       |         |   /        " <<endl;	
	cout <<"                                   \\\_____________________________________________________________/ " <<endl <<endl <<endl;
	
    	
    	
    		
    cout<<endl;
    cout<<endl;
    cout<<endl;
    	
        cout << "===========> Seja Bem Vindo ao PaPa Pizza Delivery! <=============" << endl; // Lourenço
        cout << "............................................................." << endl;
        cout << "====> Nosso Chat BoT irá auxiliar você a fazer o seu pedido! <====" << endl << endl << endl;
        cout << "Digite o NÚMERO com a opção desejada:" << endl << endl;
        cout << "[1] => COMBOS PROMOCIONAIS" << endl;
        cout << "[2] => CARDÁPIO DE PIZZAS" << endl;
        cout << "[3] => CARDÁPIO DE BEBIDAS" << endl;
        cout << "[4] => CARRINHO => " << carrinho << " item(s)" << endl <<endl;

        cout << "[5] => AJUDA / RECLAMAÇÕES" << endl;
		cout << "[0] => SAIR" << endl;
        cout << "=============================================================" << endl;
        cout << "--> ";
        cin >> opcao;

        		switch (opcao) {

            case 0:
                cout << endl;
                cout << "Saindo..." <<endl;
                return 0;

            case 1:
                while (true) {
                    cout << endl;
                    cout << "===================> COMBOS DE HOJE!!! <====================" << endl << endl; 
                    cout << "[1] => PIZZA GG | 12 PEDAÇOS + COCA COLA 2L = R$35,99" << endl;
                    cout << "[2] => PIZZA G | 8 PEDAÇOS + COCA COLA 2L = R$33,99" << endl;
                    cout << "[3] => PIZZA M | 6 PEDAÇOS + COCA COLA 2L = R$29,99" << endl << endl;
                    cout << "[0] => Retornar ao menu" << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << "--> ";
                    cin >> opcao;

                    if (opcao == 0) {
                        cout << endl;
                        cout << "Retornando ao menu..." << endl;
                        cout << endl;
                        break;
                    }

                    switch (opcao) {

						//=====================================================================================================================================

						case 1:

							cout <<"===================> COMBOS DE HOJE!!! <===================="<< endl << endl;
							cout <<"[1] => PIZZA GG | 2 SABORES         <=" <<endl;
							cout <<"[2] => PIZZA GG | 1 SABOR           <=" <<endl;
							cout<<endl;
							cout <<"[0] => Retornar" <<endl <<endl;
							cout <<"============================================================"<< endl;
							cout <<"--> ";
							cin >> opcao;

							if (opcao == 0) {
                        	cout << endl;
                        	cout << "Retornando..." << endl;
                        	cout << endl;
                        	break;
                    		}
								switch (opcao) {



								//=====================================================================================================================================

									case 1:

								//=====================================================================================================================================

										cout<<endl;cout<<endl;cout<<endl;

										cout << "=================> SABORES INCLUIDOS NA PROMOÇÃO!!! <==================" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY + BACON COM CHEDDAR  <=" <<endl;
										cout <<"[2] => FRANGO COM CATUPIRY + PORTUGUESA         <=" <<endl;
										cout <<"[3] => FRANGO COM CATUPIRY + CALABRESA          <=" <<endl;
										cout <<"[4] => CALABRESA + 4 QUEIJOS                    <=" <<endl;
										cout <<"[5] => CALABRESA + LOMBO CANADENSE              <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"========================================================================"<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}

										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - FRANGO C/ CATUPIRY + BACON C/ CHEDDAR + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - FRANGO C/ CATUPIRY + PORTUGUESA + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - FRANGO C/ CATUPIRY + CALABRESA + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - CALABRESA + 4 QUEIJOS + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - CALABRESA + LOMBO CANADENSE + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

						//========================================================================================================================================================

									case 2:


										cout<<endl;cout<<endl;cout<<endl;

										cout << "=========> SABORES INCLUIDOS NA PROMOÇÃO!!! <=========" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY                   <=" <<endl;
										cout <<"[2] => PORTUGUESA                            <=" <<endl;
										cout <<"[3] => BACON COM CHEDDAR                     <=" <<endl;
										cout <<"[4] => CALABRESA                             <=" <<endl;
										cout <<"[5] => 4 QUEIJOS                             <=" <<endl;
										cout <<"[6] => LOMBO CANADENSE                       <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"======================================================="<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}

										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - FRANGO C/ CATUPIRY + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - PORTUGUESA + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - BACON COM CHEDDAR + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - CALABRESA + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - 4 QUEIJOS + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 6){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA GG | 12 PEDAÇOS - LOMBO CANADENSE + COCA COLA 2L  --  R$35,99";
                            			total += 35.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

								}


				//=====================================================================================================================================

						case 2:

				//=====================================================================================================================================

							cout <<"===================> COMBOS DE HOJE!!! <===================="<< endl << endl;
							cout <<"[1] => PIZZA G | 2 SABORES         <=" <<endl;
							cout <<"[2] => PIZZA G | 1 SABOR           <=" <<endl;
							cout<<endl;
							cout <<"[0] => Retornar" <<endl <<endl;
							cout <<"============================================================"<< endl;
							cout <<"--> ";
							cin >> opcao;

							if (opcao == 0) {
                        	cout << endl;
                        	cout << "Retornando..." << endl;
                        	cout << endl;
                        	break;
                    		}
								switch (opcao) {

									case 1:

										cout<<endl;cout<<endl;cout<<endl;

										cout << "=================> SABORES INCLUIDOS NA PROMOÇÃO!!! <==================" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY + BACON COM CHEDDAR  <=" <<endl;
										cout <<"[2] => FRANGO COM CATUPIRY + PORTUGUESA         <=" <<endl;
										cout <<"[3] => FRANGO COM CATUPIRY + CALABRESA          <=" <<endl;
										cout <<"[4] => CALABRESA + 4 QUEIJOS                    <=" <<endl;
										cout <<"[5] => CALABRESA + LOMBO CANADENSE              <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"========================================================================"<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}

										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - FRANGO C/ CATUPIRY + BACON C/ CHEDDAR + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - FRANGO C/ CATUPIRY + PORTUGUESA + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - FRANGO C/ CATUPIRY + CALABRESA + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - CALABRESA + 4 QUEIJOS + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - CALABRESA + LOMBO CANADENSE + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

						//========================================================================================================================================================

									case 2:


										cout<<endl;cout<<endl;cout<<endl;

										cout << "=========> SABORES INCLUIDOS NA PROMOÇÃO!!! <=========" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY                   <=" <<endl;
										cout <<"[2] => PORTUGUESA                            <=" <<endl;
										cout <<"[3] => BACON COM CHEDDAR                     <=" <<endl;
										cout <<"[4] => CALABRESA                             <=" <<endl;
										cout <<"[5] => 4 QUEIJOS                             <=" <<endl;
										cout <<"[6] => LOMBO CANADENSE                       <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"======================================================="<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}


										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - FRANGO C/ CATUPIRY + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - PORTUGUESA + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - BACON COM CHEDDAR + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - CALABRESA + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - 4 QUEIJOS + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 6){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA G | 8 PEDAÇOS - LOMBO CANADENSE + COCA COLA 2L  -- R$33,99";
                            			total += 33.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}


								}


						//=====================================================================================================================================

								case 3:

						//=====================================================================================================================================

									cout <<"===================> COMBOS DE HOJE!!! <===================="<< endl << endl;
									cout <<"[1] => PIZZA M | 2 SABORES         <=" <<endl;
									cout <<"[2] => PIZZA M | 1 SABOR           <=" <<endl;
									cout<<endl;
									cout <<"[0] => Retornar" <<endl <<endl;
									cout <<"============================================================"<< endl;
									cout <<"--> ";
									cin >> opcao;

								if (opcao == 0) {
                        		cout << endl;
                        		cout << "Retornando..." << endl;
                        		cout << endl;
                        		break;
                    		}
								switch (opcao) {

										case 1:

										cout<<endl;cout<<endl;cout<<endl;

										cout << "=================> SABORES INCLUIDOS NA PROMOÇÃO!!! <==================" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY + BACON COM CHEDDAR  <=" <<endl;
										cout <<"[2] => FRANGO COM CATUPIRY + PORTUGUESA         <=" <<endl;
										cout <<"[3] => FRANGO COM CATUPIRY + CALABRESA          <=" <<endl;
										cout <<"[4] => CALABRESA + 4 QUEIJOS                    <=" <<endl;
										cout <<"[5] => CALABRESA + LOMBO CANADENSE              <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"========================================================================"<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}


										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - FRANGO C/ CATUPIRY + BACON C/ CHEDDAR + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - FRANGO C/ CATUPIRY + PORTUGUESA + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - FRANGO C/ CATUPIRY + CALABRESA + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - CALABRESA + 4 QUEIJOS + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - CALABRESA + LOMBO CANADENSE + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

						//========================================================================================================================================================

										case 2:


										cout<<endl;cout<<endl;cout<<endl;

										cout << "=========> SABORES INCLUIDOS NA PROMOÇÃO!!! <=========" << endl << endl;
										cout <<"[1] => FRANGO COM CATUPIRY                   <=" <<endl;
										cout <<"[2] => PORTUGUESA                            <=" <<endl;
										cout <<"[3] => BACON COM CHEDDAR                     <=" <<endl;
										cout <<"[4] => CALABRESA                             <=" <<endl;
										cout <<"[5] => 4 QUEIJOS                             <=" <<endl;
										cout <<"[6] => LOMBO CANADENSE                       <=" <<endl;
										cout<<endl;
										cout <<"[0] => Retornar" <<endl <<endl;
										cout <<"================================================ ======"<< endl;
										cout <<"--> ";
										cin >> opcao;

										if (opcao == 0) {
                        				cout << endl;
                        				cout << "Retornando..." << endl;
                        				cout << endl;
                        				break;
                    					}


										if(opcao == 1){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - FRANGO C/ CATUPIRY + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 2){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - PORTUGUESA + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 3){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - BACON COM CHEDDAR + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 4){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - CALABRESA + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 5){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - 4 QUEIJOS + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

										else if(opcao == 6){

										carrinho++;
                            			lista[carrinho - 1] = "PIZZA M | 6 PEDAÇOS - LOMBO CANADENSE + COCA COLA 2L  -- R$29,99";
                            			total += 29.99;

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Adicionado ao seu Carrinho! ;)" <<endl<<endl<<endl<<endl<<endl<<endl;
										break;

										}

									}


						//=====================================================================================================================================

					    default:
                            cout << endl << "Opção inválida. Por favor, escolha uma opção válida." << endl;
                            break;

                        //=====================================================================================================================================
                    }
              }// João

                break;

		    case 2:

			    while (true) {

					cout << endl;cout << endl;cout << endl;
                    cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
					cout << "																						" << endl;
					cout << "===> SELECIONE O TAMANHO DE SUA PIZZA :      |  [1] => M  |  [2] => G  |  [3] => GG  | <=" << endl;
					cout << "				             |   R$29,99  |   R$35,99  |   R$40,99   | <=" << endl;
					cout << "[0] => Retornar ao menu                                                                <=" << endl;
                    cout << "=========================================================================================" << endl << endl;
                    cout << "--> ";
                    cin >> opcao;

					if (opcao == 0) {
						cout <<endl;cout <<endl;cout <<endl;
						cout << "Retornando ao menu..." << endl;
						cout <<endl;cout <<endl;cout <<endl;cout <<endl;
						break;

					}

						switch (opcao){


							case 1:

//-----------------------------------------------------------------// TAMAMHO - M CAMINHO 1 ---------------------------------------------------------------------

							cout << endl;cout << endl;cout << endl;
                 	        cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "==> TAMANHO SELECIONADO => | M | - R$29,99                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[1] => PIZZA M | 1 SABOR                                                               <=" << endl;
							cout << "[2] => PIZZA M | 2 SABORES                                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[0] => Retornar ao menu                                                                <=" << endl;
							cout << "=========================================================================================" << endl;
							cout << "---> ";
								cin >> opcao;


								if (opcao == 0){

								cout<<endl;cout<<endl;cout<<endl;
								cout <<"Retornando ao menu...";
								cout<<endl;cout<<endl;cout<<endl;
								break;

								}


								switch (opcao){

								// [1[ pizza 1 sabor =========================================================================================================================
									case 1:

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | M | - R$29,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao;

									if (opcao == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}

										switch (opcao){

										case 1:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA CALABRESA | M | R$29,99 |";
                            			total += 29.99;
                            			break;
										case 2:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA MARGHERITA | M | R$29,99 |";
                            			total += 29.99;
                            			break;

										case 3:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA PORTUGUESA | M | R$29,99 |";
                            			total += 29.99;
                            			break;
										case 4:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA LOMBO CANADENSE | M | R$29,99 |";
                            			total += 29.99;
                            			break;

										case 5:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA 4 QUEIJOS | M | R$29,99 |";
                            			total += 29.99;
                            			break;

                            			case 6:


                            			cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA BACON COM CHEDDAR | M | R$29,99 |";
                            			total += 29.99;
                            			break;

                            			case 7:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA FRANGO COM CATUPIRY | M | R$29,99 |";
                            			total += 29.99;
                            			break;

										default:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Opcão inválida! Por favor tente novamente!";
										cout<<endl;cout<<endl;cout<<endl;
										break;

										}


								case 2:

								// pizza 2 sabores =====================================================================================================================================

									string sabor1,sabor2,sabor3,sabor4,sabor5,sabor6,sabor7;

									sabor1 = "PIZZA CALABRESA";
									sabor2 = "PIZZA MARGHERITA";
									sabor3 = "PIZZA PORTUGUESA";
									sabor4 = "PIZZA LOMBO CANADENSE";
									sabor5 = "PIZZA 4 QUEIJOS";
									sabor6 = "PIZZA BACON COM CHEDDAR";
									sabor7 = "PIZZA FRANGO COM CATUPIRY";


									int opcao1, opcao2;
									string metade1, metade2;



									while (true){

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | M | - R$29,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 1° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao1;


									if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}


									if (opcao1 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao1 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}


										cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | M | - R$29,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 2° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao2;

										if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}
									if (opcao1 == opcao2){

										cout <<endl;cout<<endl;cout<<endl;
										cout <<"Opção Ja Escolhida!! Tente Novamente!";
										cout<<endl;cout<<endl;cout<<endl;
									}


									if (opcao2 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao2 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}
										// PARTE 1 ===========================================================================

											if(opcao1 == 1){

												metade1 = sabor1;

											}
											if(opcao1 == 2){

												metade1 = sabor2;

											}
											if(opcao1 == 3){

												metade1 = sabor3;

											}
											if(opcao1 == 4){

												metade1 = sabor4;

											}
											if(opcao1 == 5){

												metade1 = sabor5;

											}
											if(opcao1 == 6){

												metade1 = sabor6;

											}
											if(opcao1 == 7){

												metade1 = sabor7;

											}
										// PARTE 2 ===============================================================================


											if(opcao2 == 1){

												metade2 = sabor1;

											}
											if(opcao2 == 2){

												metade2 = sabor2;

											}
											if(opcao2 == 3){

												metade2 = sabor3;

											}
											if(opcao2 == 4){

												metade2 = sabor4;

											}
											if(opcao2 == 5){

												metade2 = sabor5;

											}
											if(opcao2 == 6){

												metade2 = sabor6;

											}
											if(opcao2 == 7){

												metade2 = sabor7;

											}

											cout<<endl;cout<<endl;cout<<endl;cout<<endl;
											cout<< "PIZZA SELECIONADA => " << metade1 << " + " <<metade2 <<endl;
											cout<<endl;
											cout<< "Adicionado ao Carrinho!! ;)";
											cout<<endl;cout<<endl;
											carrinho++;
                           					lista[carrinho - 1] = metade1 + " + " + metade2 + " | TAMANHO => M | - R$29,99";
                            				total += 29.99;
                            				break;
										}

									}




								case 2:

						// ================================================= TAMANHO G =========================================================================================

								cout << endl;cout << endl;cout << endl;
                 	        cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "==> TAMANHO SELECIONADO => | G | - R$35,99                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[1] => PIZZA G | 1 SABOR                                                               <=" << endl;
							cout << "[2] => PIZZA G | 2 SABORES                                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[0] => Retornar ao menu                                                                <=" << endl;
							cout << "=========================================================================================" << endl;
							cout << "---> ";
								cin >> opcao;

								if (opcao == 0){

								cout<<endl;cout<<endl;cout<<endl;
								cout <<"Retornando ao menu...";
								cout<<endl;cout<<endl;cout<<endl;
								break;

								}


								switch (opcao){

								// [1[ pizza 1 sabor =========================================================================================================================
									case 1:

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | G | - R$35,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao;

									if (opcao == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}

										switch (opcao){

										case 1:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA CALABRESA | G | R$35,99 |";
                            			total += 35.99;
                            			break;

										case 2:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA MARGHERITA | G | R$35,99 |";
                            			total += 35.99;
                            			break;
										case 3:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA PORTUGUESA | G | R$35,99 |";
                            			total += 35.99;
                            			break;
										case 4:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA LOMBO CANADENSE | G | R$35,99 |";
                            			total += 35.99;
                            			break;

										case 5:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA 4 QUEIJOS | G | R$35,99 |";
                            			total += 35.99;
                            			break;


                            			case 6:


                            			cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA BACON COM CHEDDAR | G | R$35,99 |";
                            			total += 35.99;
                            			break;


                            			case 7:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA FRANGO COM CATUPIRY | G | R$35,99 |";
                            			total += 35.99;
                            			break;


										default:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Opcão inválida! Por favor tente novamente!";
										cout<<endl;cout<<endl;cout<<endl;
										break;

										}

								case 2:

								// pizza 2 sabores =====================================================================================================================================

									string sabor1,sabor2,sabor3,sabor4,sabor5,sabor6,sabor7;

									sabor1 = "PIZZA CALABRESA";
									sabor2 = "PIZZA MARGHERITA";
									sabor3 = "PIZZA PORTUGUESA";
									sabor4 = "PIZZA LOMBO CANADENSE";
									sabor5 = "PIZZA 4 QUEIJOS";
									sabor6 = "PIZZA BACON COM CHEDDAR";
									sabor7 = "PIZZA FRANGO COM CATUPIRY";


									int opcao1, opcao2;
									string metade1, metade2;



									while (true){

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | G | - R$35,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 1° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao1;


									if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}


									if (opcao1 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao1 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}


										cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | G | - R$35,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 2° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao2;

										if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}
									if (opcao1 == opcao2){

										cout <<endl;cout<<endl;cout<<endl;
										cout <<"Opção Ja Escolhida!! Tente Novamente!";
										cout<<endl;cout<<endl;cout<<endl;
									}


									if (opcao2 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao2 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}


										// PARTE 1 ===========================================================================

											if(opcao1 == 1){

												metade1 = sabor1;

											}
											if(opcao1 == 2){

												metade1 = sabor2;

											}
											if(opcao1 == 3){

												metade1 = sabor3;

											}
											if(opcao1 == 4){

												metade1 = sabor4;

											}
											if(opcao1 == 5){

												metade1 = sabor5;

											}
											if(opcao1 == 6){

												metade1 = sabor6;

											}
											if(opcao1 == 7){

												metade1 = sabor7;

											}
										// PARTE 2 ===============================================================================


											if(opcao2 == 1){

												metade2 = sabor1;

											}
											if(opcao2 == 2){

												metade2 = sabor2;

											}
											if(opcao2 == 3){

												metade2 = sabor3;

											}
											if(opcao2 == 4){

												metade2 = sabor4;

											}
											if(opcao2 == 5){

												metade2 = sabor5;

											}
											if(opcao2 == 6){

												metade2 = sabor6;

											}
											if(opcao2 == 7){

												metade2 = sabor7;

											}

											cout<<endl;cout<<endl;cout<<endl;cout<<endl;
											cout<< "PIZZA SELECIONADA => " << metade1 << " + " <<metade2 <<endl;
											cout<<endl;
											cout<< "Adicionado ao Carrinho!! ;)";
											cout<<endl;cout<<endl;
											carrinho++;
                           					lista[carrinho - 1] = metade1 + " + " + metade2 + " | TAMANHO => G | - R$35,99";
                            				total += 35.99;
                            				break;


										}


									}




								case 3:



						// ==================================TAMANHO GG =======================================================================================================


								cout << endl;cout << endl;cout << endl;
                 	        cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "==> TAMANHO SELECIONADO => | GG | - R$40,99                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[1] => PIZZA GG | 1 SABOR                                                               <=" << endl;
							cout << "[2] => PIZZA GG | 2 SABORES                                                             <=" << endl;
							cout << "                                                                                       <=" << endl;
							cout << "[0] => Retornar ao menu                                                                <=" << endl;
							cout << "=========================================================================================" << endl;
							cout << "---> ";
								cin >> opcao;


								if (opcao == 0){

								cout<<endl;cout<<endl;cout<<endl;
								cout <<"Retornando ao menu...";
								cout<<endl;cout<<endl;cout<<endl;
								break;

								}


								switch (opcao){

								// [1[ pizza 1 sabor =========================================================================================================================
									case 1:

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | GG | - R$40,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao;

									if (opcao == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}

										switch (opcao){

										case 1:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA CALABRESA | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


										case 2:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA MARGHERITA | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


										case 3:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA PORTUGUESA | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


										case 4:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA LOMBO CANADENSE | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


										case 5:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA 4 QUEIJOS | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


                            			case 6:


                            			cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA BACON COM CHEDDAR | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


                            			case 7:


										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Adicionado ao Carrinho! ;) ";
										cout<<endl;cout<<endl;cout<<endl;

										carrinho++;
                           				lista[carrinho - 1] = "PIZZA FRANGO COM CATUPIRY | GG | R$40,99 |";
                            			total += 40.99;
                            			break;


										default:

										cout<<endl;cout<<endl;cout<<endl;
										cout<< "Opcão inválida! Por favor tente novamente!";
										cout<<endl;cout<<endl;cout<<endl;
										break;

										}

								case 2:

								// pizza 2 sabores =====================================================================================================================================

									string sabor1,sabor2,sabor3,sabor4,sabor5,sabor6,sabor7;

									sabor1 = "PIZZA CALABRESA";
									sabor2 = "PIZZA MARGHERITA";
									sabor3 = "PIZZA PORTUGUESA";
									sabor4 = "PIZZA LOMBO CANADENSE";
									sabor5 = "PIZZA 4 QUEIJOS";
									sabor6 = "PIZZA BACON COM CHEDDAR";
									sabor7 = "PIZZA FRANGO COM CATUPIRY";


									int opcao1, opcao2;
									string metade1, metade2;



									while (true){

									cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | GG | - R$40,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 1° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao1;


									if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}


									if (opcao1 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao1 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao1 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}


										cout << endl;cout << endl;cout << endl;
                 	        		cout << "==================================> CARDÁPIO DE PIZZAS <=================================" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "==> TAMANHO SELECIONADO => | GG | - R$40,99                                             <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "                             ====> SELECIONE O 2° SABOR                                <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[1] => PIZZA CALABRESA                                                                 <=" << endl;
									cout << "[2] => PIZZA MARGHERITA                                                                <=" << endl;
									cout << "[3] => PIZZA PORTUGUESA                                                                <=" << endl;
									cout << "[4] => PIZZA LOMBO CANADENSE                                                           <=" << endl;
									cout << "[5] => PIZZA 4 QUEIJOS                                                                 <=" << endl;
									cout << "[6] => PIZZA BACON COM CHEDDAR                                                         <=" << endl;
									cout << "[7] => PIZZA FRANGO COM CATUPIRY                                                       <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "[0] => Retornar                                                                        <=" << endl;
									cout << "                                                                                       <=" << endl;
									cout << "========================================================================================" << endl << endl;
                    					cout << "--> ";
                    						cin >> opcao2;

										if (opcao1 == 0){

										cout<<endl;cout<<endl;cout<<endl;
										cout <<"Retornando...";
										cout<<endl;cout<<endl;cout<<endl;
										break;
									}
									if (opcao1 == opcao2){

										cout <<endl;cout<<endl;cout<<endl;
										cout <<"Opção Ja Escolhida!! Tente Novamente!";
										cout<<endl;cout<<endl;cout<<endl;
									}




									if (opcao2 == 1){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor1;
									cout<<endl;cout<<endl;cout<<endl;

									}
									if (opcao2 == 2){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor2;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 3){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor3;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 4){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor4;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 5){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor5;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 6){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor6;
									cout<<endl;cout<<endl;cout<<endl;

									}if (opcao2 == 7){

									cout<<endl;cout<<endl;
									cout <<" Opção Escolhida ===> " <<sabor7;
									cout<<endl;cout<<endl;cout<<endl;

									}


										// PARTE 1 ===========================================================================

											if(opcao1 == 1){

												metade1 = sabor1;

											}
											if(opcao1 == 2){

												metade1 = sabor2;

											}
											if(opcao1 == 3){

												metade1 = sabor3;

											}
											if(opcao1 == 4){

												metade1 = sabor4;

											}
											if(opcao1 == 5){

												metade1 = sabor5;

											}
											if(opcao1 == 6){

												metade1 = sabor6;

											}
											if(opcao1 == 7){

												metade1 = sabor7;

											}
										// PARTE 2 ===============================================================================


											if(opcao2 == 1){

												metade2 = sabor1;

											}
											if(opcao2 == 2){

												metade2 = sabor2;

											}
											if(opcao2 == 3){

												metade2 = sabor3;

											}
											if(opcao2 == 4){

												metade2 = sabor4;

											}
											if(opcao2 == 5){

												metade2 = sabor5;

											}
											if(opcao2 == 6){

												metade2 = sabor6;

											}
											if(opcao2 == 7){

												metade2 = sabor7;

											}

											cout<<endl;cout<<endl;cout<<endl;cout<<endl;
											cout<< "PIZZA SELECIONADA => " << metade1 << " + " <<metade2 <<endl;
											cout<<endl;
											cout<< "Adicionado ao Carrinho!! ;)";
											cout<<endl;cout<<endl;
											carrinho++;
                           					lista[carrinho - 1] = metade1 + " + " + metade2 + " | TAMANHO => GG | - R$40,99";
                            				total += 40.99;
                            				break;


										}


									}




								}


							}
// PARTE DO LUCAS

                break;
            case 3:
                while (true) {
                    cout << endl;
                    cout << "===================> CARDÁPIO DE BEBIDAS <===================" << endl << endl;
                    cout << "[1] => COCA COLA 2L             -->  R$9,99" << endl;
                    cout << "[2] => FANTA LARANJA 2L         -->  R$7,99" << endl;
                    cout << "[3] => GUARANÁ 2L               -->  R$7,99" << endl;
                    cout << "[4] => ÁGUA MINERAL 500ML       -->  R$2,99" << endl << endl;
                    cout << "[0] => Retornar ao menu" << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << "--> ";
                    cin >> opcao;

                    if (opcao == 0) {
                        cout << endl;
                        cout << "Retornando ao menu..." << endl;
                        cout << endl;
                        break;
                    }

                    switch (opcao) {
                        case 1:

                            cout << endl;
                            cout << endl;
                            cout<< "Adicionado ao seu Carrinho!";
                            carrinho++;
                            lista[carrinho - 1] = "COCA COLA 2L  --  R$9,99";
                            total += 9.99;
                            cout << endl;
                            cout << endl;
                            break;
                        case 2:

                            cout << endl;
                            cout << endl;
                            cout<< "Adicionado ao seu Carrinho!";
                            carrinho++;
                            lista[carrinho - 1] = "FANTA LARANJA 2L  --  R$7,99";
                            total += 7.99;
                            cout << endl;
                            cout << endl;
                            break;
                        case 3:
                            cout << endl;
                            cout << endl;
                            cout<< "Adicionado ao seu Carrinho!";
                            carrinho++;
                            lista[carrinho - 1] = "GUARANÁ 2L  --  R$7,99";
                            total += 7.99;
                            cout << endl;
                            cout << endl;
                            break;
                        case 4:
                            cout << endl;
                            cout << endl;
                            cout<< "Adicionado ao seu Carrinho!";
                            carrinho++;
                            lista[carrinho - 1] = "ÁGUA MINERAL 500ML  --  R$2,99";
                            total += 2.99;
                            cout << endl;
                            cout << endl;
                            break;
                        default:
                            cout << endl << "Opção inválida. Por favor, escolha uma opção válida." << endl;
                            break;
                    }
                }//PARTE DO JOÃO
                	break;
            case 4:

                		cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;
              			  cout << "=======================> CARRINHO <=========================" << endl << endl;
                			if (carrinho == 0) {
                  			  cout << "Seu carrinho está vazio." << endl << endl;
                  			  cout << endl;
                  			  cout << endl;
                  			  cout << endl;
                  			  cout << endl;
                  			  cout << endl;
                  			  cout << endl;
                  			  break;
               					 } else {
                			    for (int i = 0; i < carrinho; i++) {
                 		       cout << "[" << i + 1 << "] => " << lista[i] << endl;
                			    }
               				     cout << endl;cout << endl;cout << endl;
               				     cout << "Total da compra: R$" << total << endl;
             				   }

    						cout << endl;
    						cout << endl;
    						cout <<"[1] -- Finalizar Compra" <<endl;
    						cout <<"[0] -- Retornar" << endl;

             			  cout<<endl;
              			  cout << "=============================================================" << endl << endl;
               			  cout << "--> "; cin >> pagamento;

               			  if (pagamento == 0){

                            cout << endl;
                            cout << "Retornando...";
                            cout << endl;
                            break;
               			  }
               			  if (pagamento == 1){

                                cout << endl;
                    cout << "=====================> FINALIZAR PEDIDO <=====================" << endl << endl;
                    cout << " => Preencha os Campos com os Dados necessários por favor ;)" << endl;
                    cout << endl;
                    cout << endl;

                    cout << " => CPF: "; cin >> cpf; cout << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << " => TELEFONE PARA CONTATO (Com DDD) : "; cin >> telefone; cout << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << " => NOME DO CLIENTE: "; getline(cin,nome); getline(cin,nome); cout<< endl;
                    cout << "=============================================================" << endl << endl;
                    cout << " => ENDEREÇO DE ENTREGA: " << endl;
                    cout << " ---> "; getline(cin,ender); cout << endl;
                    cout << "=============================================================" << endl << endl;


                           cout <<endl; cout <<endl; cout <<endl;

                    cout << "===================> FORMA DE PAGAMENTO <====================" << endl;
                    cout << "[1] => PIX" << endl;
                    cout << "[2] => CARTÃO DE CRÉDITO/DÉBITO ou DINHEIRO (Pague na Entrega)" << endl;
                    cout << endl; cout << endl;
                    cout << "Digite a Forma de Pagamento desejada: "; cin >> pagamento;
                    cout << "=============================================================" << endl << endl;


                    cout << endl; cout << endl;

                          if (pagamento == 1){

                    cout << "====================> FINALIZAR PEDIDO <=====================" << endl;
                    cout << " ===> PIX" << endl << endl;
                            for (int i = 0; i < carrinho; i++) {
                    cout << "[" << i + 1 << "] => " << lista[i] << endl;}
                    cout << endl;
                    cout << " ==> Total da compra: R$" << total << endl;
                    cout << endl;cout << endl;
                    cout << " ==> NOME CLIENTE : " << nome << endl;
                    cout << " ==> CPF : " << cpf << endl;
                    cout << " ==> Endereço : " << ender << endl;
                    cout << endl;
                    cout << " ==> CONFIRMAR PEDIDO?" << endl;
                    cout << "[1] -- Sim" << endl;
                    cout << "[0] -- Não" << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << "--> "; cin >> pagamento;

                          switch(pagamento){

                        case 1:

                            cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;

                            cout << "===========================> PEDIDO REALIZADO! <==========================" << endl;
                            cout << " ===> PIX" << endl;
                            cout << endl;
                            cout << " ===> Número do Pedido : " << rand()<<RAND_MAX << endl;
                            cout << endl;
                            cout << " ===> COPIE E COLE O CÓDIGO PIX ABAIXO, EM SEGUIDA ENVIAREMOS UMA CONFIRMAÇÃO" << endl;
                            cout << "      PARA O NÚMERO DE TELEFONE CADASTRADO. AGRADECEMOS A PREFERÊNCIA ;)" << endl;
                            cout << endl;
                            cout << " ===> Código PIX : "; for(int i; i < 5; i++){ cout << rand()<<"";}
                            cout << endl;
                            cout << endl;
                            cout << "==========================================================================" << endl;
                            return 0;


                        case 2:

                            break;


                            }
                          }

                            if(pagamento == 2){

                    cout << "====================> FINALIZAR PEDIDO <=====================" << endl;
                    cout << " ===> Cartão de Crédito/Débito ou Dinheiro" << endl << endl;
                            for (int i = 0; i < carrinho; i++) {
                    cout << "[" << i + 1 << "] => " << lista[i] << endl;}
                    cout << endl;
                    cout << " ===> Total da compra: R$" << total << endl;
                    cout << endl;cout << endl;
                    cout << " ==> NOME CLIENTE : " << nome << endl;
                    cout << " ==> CPF : " << cpf << endl;
                    cout << " ==> Endereço : " << ender << endl;
                    cout << endl;
                    cout << " ==> CONFIRMAR PEDIDO?" << endl;
                    cout << "[1] -- Sim" << endl;
                    cout << "[0] -- Não" << endl;
                    cout << "=============================================================" << endl << endl;
                    cout << "--> "; cin >> pagamento;

                                switch(pagamento){

                        case 1:

                            cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;

                            cout << "===========================> PEDIDO REALIZADO! <==========================" << endl;
                            cout << " ===> CARTÃO DE CRÉDITO/DÉBITO ou DINHEIRO" << endl;
                            cout << endl;
                            cout << " ===> ESTAMOS PREPARANDO O SEU PEDIDO, EM BREVE ENVIAREMOS UMA CONFIRMAÇÃO" << endl;
                            cout << "      PARA O NÚMERO DE TELEFONE CADASTRADO. AGRADECEMOS A PREFERÊNCIA ;)" << endl;
                            cout << endl;
                            cout << " ===> Número do Pedido : " << rand()<<RAND_MAX << endl;
                            cout << "==========================================================================" << endl;
                            return 0;


                        case 2:

                            break;


                            }
                          }


                            }











// Parte do Carlos

    case 5:

	int ajuda;
    int avaliacao;
    string nomeCliente = "João Victor Vieira";

    while (true) {
        cout << "=======================>  Reclamações / Ajuda <===================" << endl;
        cout << "............................................................." << endl;
        cout << " [1] => Problemas na entrega: " << endl;
        cout << " [2] => Avaliação: " << endl << endl;
        cout << " [0] => Retornar ao Menu " << endl;
        cout << "=============================================================" << endl;
        cin >> ajuda;

        if (ajuda == 0) {

		   cout<<endl;cout<<endl;
		   cout<<"Retornando...." <<endl <<endl;
		    break;
        }

        switch (ajuda) {
            case 1:
                while (true) {
                    cout << endl;
                    cout << "===================> Problemas Na Entrega <====================" << endl;
                    cout << "[1] => Pedido chegou errado: " << endl;
                    cout << "[2] => Pedido não entregue: " << endl;
                    cout << "[0] => Retornar ao menu" << endl;
                    cout << "=============================================================" << endl;
                    cout << "---> ";
                    cin >> ajuda;

                    if (ajuda == 0) {
                        cout << endl;
                        cout << "Retornando ao menu..." << endl;
                        cout << endl;
                        break;
                    }

                    switch (ajuda) {
                        case 1:
                            cout << endl;
                            cout << "===================> Problemas Na Entrega <====================" << endl;
                            cout << "Pedimos desculpas pelo ocorrido! :'(" << endl;
                            cout << "Digite por favor o número do pedido:";
                            cout << endl;
                            cout << "=============================================================" << endl;
                            cout << endl;
                            cout << "---> ";
                            cin >> ajuda;

                            cout << endl << endl << endl << endl << endl;

                            cout << endl;
                            cout << "===================> Problemas Na Entrega <====================" << endl;
                            cout << "Nome do Cliente : " << nomeCliente << endl;
                            cout << endl;
                            cout << "Confirma?";
                            cout << endl;
                            cout << "[1] => Sim!" << endl;
                            cout << "[0] => Não" << endl;
                            cout << "=============================================================" << endl;
                            cout << endl;
                            cout << "---> ";
                            cin >> ajuda;

                            if (ajuda == 1) {
                                cout << endl;
                                cout << "===================> Problemas Na Entrega <====================" << endl;
                                cout << "Nome do Cliente : " << nomeCliente << endl;
                                cout << endl;
                                cout << "Recebemos a solicitação, iremos entrar em contato com você por telefone!" << endl;
                                cout << endl;
                                cout << "Por favor aguarde!" << endl;
                                cout << endl << endl;
                                cout << "===============================================================" << endl;
                                cout << endl;

                                break;
                            } else {
                                break;
                            }

                        case 2:
                            cout << endl;
                            cout << "===================> Problemas Na Entrega <====================" << endl;
                            cout << "Pedimos desculpas pelo ocorrido! :'(" << endl;
                            cout << "Digite por favor o número do pedido:";
                            cout << endl;
                            cout << "=============================================================" << endl;
                            cout << endl;
                            cout << "---> ";
                            cin >> ajuda;

                            cout << endl << endl << endl << endl << endl;

                            cout << endl;
                            cout << "===================> Problemas Na Entrega <====================" << endl;
                            cout << "Nome do Cliente : " << nomeCliente << endl;
                            cout << endl;
                            cout << "Confirma?";
                            cout << endl;
                            cout << "[1] => Sim!" << endl;
                            cout << "[0] => Não" << endl;
                            cout << "=============================================================" << endl;
                            cout << endl;
                            cout << "---> ";
                            cin >> ajuda;

                            if (ajuda == 0) {
                                cout << endl;
                                cout << "Retornando..." << endl;
                                cout << endl;
                                break;
                            }

                            if (ajuda == 1) {
                                cout << endl;
                                cout << "===================> Problemas Na Entrega <====================" << endl;
                                cout << "Nome do Cliente : " << nomeCliente << endl;
                                cout << endl;
                                cout << "Recebemos a solicitação, iremos entrar em contato com você por telefone!" << endl;
                                cout << endl;
                                cout << "Por favor aguarde!" << endl;
                                cout << endl << endl;
                                cout << "===============================================================" << endl;
                                cout << endl;

                                break;
                            }
                    }
                }

                break;

            case 2:
                cout << endl;
                cout << "======================> Avaliação <======================" << endl;
                cout << "Nota para a avaliação do pedido e do atendimento (1 a 10): ";
                cin >> avaliacao;
                cout << "[0] => Retornar ao menu" << endl;
                cout << "=========================================================" << endl;
                cin >> ajuda;

                if (ajuda == 0) {
                    cout << endl;
                    cout << "Retornando ao menu..." << endl;
                    cout << endl;
                    break;
                }
        }

   }



}

}
    return 0;
}