#include <iostream>
#include <string>

using namespace  std;

#define N 5
#define M 5



string convert_matrix_to_string(int matrix[N][M]) {
    string s;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s += to_string(matrix[i][j]) + " ";
        }
        s += "\n";
    }
    return s;
}

void random_init_matrix(int matrix[N][M], int bound) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = rand() % bound;
        }
    }
}