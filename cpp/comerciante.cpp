#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, abaixo = 0, entre = 0, acima = 0;
    double valorTotalCompra = 0, valorTotalVenda = 0, lucroTotal = 0;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> N;

    string nomes[N];
    double precoCompra[N], precoVenda[N], porcentagemLucros[N];

    for(int i = 0; i < N; i++){
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];
     }

    for(int i = 0; i < N; i++){
        porcentagemLucros[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100.0;
    }

    for(int i = 0; i < N; i++){
        if(porcentagemLucros[i] < 10){
            abaixo++;
        }
        else if(porcentagemLucros[i] < 20){
            entre++;
        }
        else{
            acima++;
        }
    }

    for(int i = 0; i < N; i++){
        valorTotalCompra = valorTotalCompra + precoCompra[i];
        valorTotalVenda = valorTotalVenda + precoVenda[i];
    }

    lucroTotal = valorTotalVenda - valorTotalCompra;

    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << valorTotalCompra << endl;
    cout << "Valor total de venda: " << valorTotalVenda << endl;
    cout << "Lucro total: " << lucroTotal << endl;

    return 0;
}
