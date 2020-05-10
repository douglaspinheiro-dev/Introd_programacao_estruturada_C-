#include <iostream>
using namespace std;

int main(void){
    char resposta;
    bool continuar;
    int a, b, c, primeiro, segundo, terceiro;
    do {
        cout << "******************************************" << endl;
        cout << "***********  Inverte e Decresce   ********" << endl;
        cout << "******************************************" << endl;
        
        cout << "Insira o numero A:" << endl;
        cin >> a;

        cout << "Insira o numero B:" << endl;
        cin >> b;

        cout << "Insira o numero C:" << endl;
        cin >> c;

        if ((a < b) && (a < c)) {
            primeiro = a;
            if (b < c) {
                segundo = b;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = b;
            }
        }

        if ((b < c) && (b < a)) {
            primeiro = b;
            if (a < c) {
                segundo = a;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = a;
            }
        }

        if ((c < a) && (c < b)) {
            primeiro = c;
            if (b < a) {
                segundo = b;
                terceiro = a;
            } else {
                segundo = a;
                terceiro = b;
            }
        }

        c = terceiro;
        b = segundo;
        a = primeiro;
        
        cout << "Ordem Decrescente: C: " << c << ", B: " << b << ", A: " << a << endl;
        
        cout << "Deseja continuar?" << endl;
        cout << "1 - SIM" << endl;
        cout << "Qualquer outro digito - NAO" << endl;
        cin >> resposta;
        continuar = (resposta == 1 || resposta == '1');

    } while (continuar == 1);

	system("pause");
    return 0;
}