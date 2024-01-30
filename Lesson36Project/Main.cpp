#include <iostream>
#include <string>

#define N 5
#define M 5

using namespace std;

string convert_matrix_to_string(int matrix[N][M]);
void random_init_matrix(int matrix[N][M], int bound);

int main() {
	int matrix[N][M];

	int percent = 100;

	random_init_matrix(matrix, 10);

	return 0;
}