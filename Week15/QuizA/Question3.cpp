//Implement the following functions for general Matrix operations:
//1. Function that takes two matrices and return their multiplication if the operation is allowed
//2. Function that prints out a matrix to console
//3. Function that returns a matrix element

#include "iostream"
#include "cassert"
using namespace std;



// Function to multiply two matrices
int** multiplyMatrices(int** m1, int m1Rows, int m1Cols, int** m2, int m2Rows, int m2Cols) {
    assert(m1Cols == m2Rows)

    // Allocate memory for the result matrix
    int** result = new int*[m1Rows];
    for (int i = 0; i < m1Rows; ++i) {
        result[i] = new int[m2Cols]();
    }

    // Perform multiplication
    for (int i = 0; i < m1Rows; ++i) {
        for (int j = 0; j < m2Cols; ++j) {
            for (int k = 0; k < m1Cols; ++k) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    return result;
}

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to get an element from a matrix
int getMatrixElement(int** matrix, int row, int col) {
    // Feel free to also add row and column sizes as parameters to be even more safe
    return matrix[row][col];
}

int main() {
    // Example usage
    int rows1 = 2, cols1 = 2;
    int rows2 = 2, cols2 = 2;

    // Allocate and initialize matrices
    int** mat1 = new int*[rows1];
    int** mat2 = new int*[rows2];

    for (int i = 0; i < rows1; ++i) {
        mat1[i] = new int[cols1]{1, 2};
    }

    for (int i = 0; i < rows2; ++i) {
        mat2[i] = new int[cols2]{5, 6};
    }

    int** result = multiplyMatrices(mat1, rows1, cols1, mat2, rows2, cols2);
    cout << "Result of multiplication:\n";
    printMatrix(result, rows1, cols2);

    int element = getMatrixElement(mat1, 0, 1);  // Get element at row 0, col 1
    cout << "Element at mat1[0][1]: " << element << endl;

    // Free memory for result matrix
    for (int i = 0; i < rows1; ++i) {
        delete[] result[i];
    }
    delete[] result;

    // Free memory for the input matrices
    for (int i = 0; i < rows1; ++i) {
        delete[] mat1[i];
    }
    delete[] mat1;

    for (int i = 0; i < rows2; ++i) {
        delete[] mat2[i];
    }
    delete[] mat2;

    return 0;
}