#include <iostream>

using namespace std;

int main(void){

	int idade;
    float altura;
    bool continuar, selecionado;
    char resposta;

    do {
        cout << "******************************************" << endl;
        cout << "****** Bem-vindo ao Time de Voleibol  ****" << endl;
        cout << "******************************************" << endl;

        cout << "Digite a altura do candidato:" << endl;
        cin >> altura;
        
        cout << "Digite a idade do candidato:" << endl;
        cin >> idade;
        
        selecionado = ((altura > 1.75) && (idade < 15)) ? true : false;

        if (selecionado) {
            cout << "selecionado" << endl;
        } else {
            cout << "nao selecionada" << endl;
        }
        
        cout << "Deseja continuar?" << endl;
        cout << "1 - SIM" << endl;
        cout << "0 - NAO" << endl;
        cin >> continuar;

    } while (continuar == 1);
    
	system("pause");
	
    return 0;
}