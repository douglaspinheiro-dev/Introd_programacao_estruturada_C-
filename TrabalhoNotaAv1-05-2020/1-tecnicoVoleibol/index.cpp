#include <iostream>

using namespace std;

int main(void){

	int idade;
    float altura;
    bool selecionado, continuar;
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
        cout << "Qualquer outro digito - NAO" << endl;
        cin >> resposta;
        continuar = (resposta == 1 || resposta == '1');

    } while (continuar == 1);
    
	system("pause");
	
    return 0;
}