#include <iostream>

using namespace std;

int main(void){

    float base, altura, area, perimetro;
    bool continuar;

    do {
        cout << "******************************************" << endl;
        cout << "******  Calculo de Area e Perimetro   ****" << endl;
        cout << "******************************************" << endl;
        
        cout << "Insira a medida da Base:" << endl;
        cin >> base;
        
        cout << "Insira a medida da Altura:" << endl;
        cin >> altura;
        
        area = base * altura;
        perimetro = (base + altura) * 2; 

        cout << "A area deste retangulo: " << area << endl;
        cout << "O perimetro deste retangulo: " << perimetro << endl;
        
        cout << "Deseja continuar?" << endl;
        cout << "1 - SIM" << endl;
        cout << "0 - NAO" << endl;
        cin >> continuar;

    } while (continuar == 1);
    
	system("pause");
	
    return 0;
}