#include<iostream>

using namespace std;

int main() {

    int N, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N], maiorLinha[N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        maior = mat[i][0];
        for(int j = 1; j < N; j++){
            if(maior < mat[i][j]){
                maior = mat[i][j];
            }
        }
        maiorLinha[i] = maior;
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for(int i = 0; i < N; i++){
        cout << maiorLinha[i] << endl;
    }

    return 0;
}
