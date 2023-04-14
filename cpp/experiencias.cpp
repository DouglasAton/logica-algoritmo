#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, ratos = 0, sapos = 0, coelhos = 0, qtdCobaias, total;
    char tipo;
    double pratos, psapos, pcoelhos;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Quantidade de cobaias: ";
        cin >> qtdCobaias;
        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if(tipo == 'R'){
            ratos = ratos + qtdCobaias;
        }
        else if(tipo == 'S'){
            sapos = sapos + qtdCobaias;
        }
        else{
            coelhos = coelhos + qtdCobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pcoelhos = ((double)coelhos / total) * 100.0;
    pratos = ((double)ratos / total) * 100.0;
    psapos = ((double)sapos / total) * 100.0;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pcoelhos << endl;
    cout << "Percentual de ratos: " << pratos << endl;
    cout << "Percentual de sapos: " << psapos << endl;

    return 0;
}
