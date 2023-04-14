#include <iostream>

using namespace std;

int main() {

    int N, maiorIdade, posicaoMaior;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    string nomes[N];
    int idades[N];

    for(int i = 0; i < N; i++){
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
    }

    maiorIdade = idades[0];
    posicaoMaior = 0;
    for(int i = 1; i < N; i++){
        if(idades[i] > maiorIdade){
            maiorIdade = idades[i];
            posicaoMaior = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[posicaoMaior] << endl;

    return 0;
}
