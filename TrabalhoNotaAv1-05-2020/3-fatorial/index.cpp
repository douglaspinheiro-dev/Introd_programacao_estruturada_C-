#include <iostream>
using namespace std;

int main(void){

    int numero, resultado, i;
    resultado = 1;
    bool continuar;
    char resposta;

    do {
        cout << "******************************************" << endl;
        cout << "***********  Calculo de fatorial  ********" << endl;
        cout << "******************************************" << endl;
        
        cout << "Insira a o numero a ser calculado:" << endl;
        cin >> numero;

        if ((numero != 0) || ( numero != 1)) { 
            for (i = numero; i != 0; i--) {
                resultado = resultado * i;
            }
        }

        cout << "o fatorial e: " << resultado << endl;

        // resetando a variavel pra continuar o loop
        resultado = 1;
        
        cout << "Deseja continuar?" << endl;
        cout << "1 - SIM" << endl;
        cout << "Qualquer outro digito - NAO" << endl;
        cin >> resposta;
        continuar = (resposta == 1 || resposta == '1');

    } while (continuar == 1);

	system("pause");
    return 0;
}