#include <iostream>

using namespace std;

int main() {

    int M, N;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> M;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> N;

    int a[M][N], b[M][N], c[M][N];

    cout << "Digite os valores da matriz A:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Digite os valores da matriz B:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
