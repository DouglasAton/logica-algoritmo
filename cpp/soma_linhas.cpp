#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int M, N;
    double somaLinha;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    double mat[M][N], vet[M];

    for (int i = 0; i < M; i++) {
        cout << "Digite os elementos da " << i + 1 << "a. linha:" << endl;

        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        somaLinha = 0;
        for (int j = 0; j < N; j++) {
            somaLinha = somaLinha + mat[i][j];
        }
        vet[i] = somaLinha;
    }

    cout << "VETOR GERADO:" << endl;
    cout << fixed << setprecision(2);

    for(int i = 0; i < M; i++){
        cout << vet[i] << endl;
    }

    return 0;
}
