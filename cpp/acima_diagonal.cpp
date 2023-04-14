#include <iostream>

using namespace std;

int main() {

    int N, somaAcima = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i < j){
                somaAcima = somaAcima + mat[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << somaAcima << endl;

    return 0;
}
