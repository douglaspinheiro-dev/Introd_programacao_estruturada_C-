#include <iostream>
using namespace std;

int main(void){

    float numero, somaPositivo, quantidadeNegativo, i;

    somaPositivo = 0;
    quantidadeNegativo = 0;

    cout << "******************************************" << endl;
    cout << "***********  Soma e Quantidade    ********" << endl;
    cout << "******************************************" << endl;
    
    for (i = 0; i < 20; i++) {
        cout << "Insira a o numero " << (i + 1) << endl;
        cin >> numero;

        if (numero >= 0 ) {
            somaPositivo = somaPositivo + numero;
        } else {
            quantidadeNegativo++;
        }
        
    }

    cout << "A soma dos positivos: " << somaPositivo << endl;
    cout << "A quantidade de negativos: " << quantidadeNegativo << endl;
    
	system("pause");
    return 0;
}