#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    int mat1[100][100], mat2[100][100];

    // Input elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat2[i][j];
        }
    }

    // Display both matrices
    cout << "First matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    // Menu for operations
    int choice;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Transpose" << endl;
    cout << "4. Diagonal Sum" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Addition of the two matrices:" << endl;
            int add[100][100];
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    add[i][j] = mat1[i][j] + mat2[i][j];
                    cout << add[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 2: {
            cout << "Subtraction of the two matrices:" << endl;
            int sub[100][100];
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    sub[i][j] = mat1[i][j] - mat2[i][j];
                    cout << sub[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {
            cout << "Transpose of the first matrix:" << endl;
            int transpose[100][100];
            for (int i = 0; i < cols; i++) {
                for (int j = 0; j < rows; j++) {
                    transpose[i][j] = mat1[j][i];
                    cout << transpose[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 4: {
            cout << "Diagonal sum of the first matrix:" << endl;
            int diagonalSum = 0;
            for (int i = 0; i < rows && i < cols; i++) {
                diagonalSum += mat1[i][i];
            }
            cout << "The diagonal sum is: " << diagonalSum << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
