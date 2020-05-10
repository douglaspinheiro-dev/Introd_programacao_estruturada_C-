#include <iostream>
using namespace std;

int main(void){
    char resposta;
    bool continuar;
    int idade;
    do {
        cout << "******************************************" << endl;
        cout << "***********  Classe Eleitoral     ********" << endl;
        cout << "******************************************" << endl;
        
        cout << "Insira a idade:" << endl;
        cin >> idade;
        
        /* 
            Referencia bibliografica para classe eleitoral

            Os alfabetizados maiores de 18 e menores de 70 anos são, por lei,
            obrigados a votar. 
            O voto não é obrigatório para os analfabetos, os maiores de 70 anos,
            nem para os maiores de 16 e menores de 18 anos.
            Quando o eleitor completa 18 anos, o voto passa a ser obrigatório.
            
            http://www.senado.gov.br/noticias/jornal/cidadania/eleicao/not02.htm
        */
        if (idade >= 18 && idade < 70){
            cout << "Eleitor obrigatorio." << endl;
        } else if (idade >= 16 && idade < 18 || idade >= 70){
            cout << "Eleitor facultativo." << endl;
        } else {
            cout << "Nao eleitor." << endl;
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