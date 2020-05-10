#include <iostream>
using namespace std;

int main(void){
    char sexo, continuar;
    float altura, i, pesoIdeal;

    do {
        cout << "******************************************" << endl;
        cout << "***********       Peso Ideal      ********" << endl;
        cout << "******************************************" << endl;
        
        cout << "Insira a altura:" << endl;
        cin >> altura;

        cout << "Insira o sexo:" << endl;
        cout << "0 - Feminino" << endl;
        cout << "Qualquer outro digito - Masculino" << endl;
        cin >> sexo;

        if (sexo == 0){
            // feminino
            pesoIdeal = (62.1 * altura) - 44.7;
        } else {
            // masculino
            pesoIdeal = (72.7 * altura) - 58;
        }
        
        cout << "O peso ideal: " << pesoIdeal << endl;
        
        cout << "Deseja continuar?" << endl;
        cout << "1 - SIM" << endl;
        cout << "Qualquer outro digito - NAO" << endl;
        cin >> continuar;

    } while (continuar == 1);

	system("pause");
    return 0;
}