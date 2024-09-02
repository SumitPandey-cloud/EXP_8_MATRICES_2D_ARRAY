# MATRICES
# Experiment 8 :- To study and implement C++ 2D Array - Matrices
## AIM: -
To learn how to implement 2D arrays (Matrices) in C++ and its operations like addition, multiplcation , diagonal addition and comparing 2 rows 
##  Theory: -
There are two kinds of arrays, namely;

Single dimensional array

Multi dimensional array

These experiments aim to teach us about 2D arrrays also called matrices.

Advantages of Two-Dimensional Matrices in Data Structures: -

1 . Accessibility to the elements is easy since we can locate them via their indices.<br> 2 . This is very simple and uses only two loops. <br>3 . It contains many similar typed elements under one name<br> 4 . Any data having a fixed size can be stored in it<br>


## Applications of Matrices in Data Structures: -

Signal Processing: - Signals are represented by matrices for filtering purposes.

Optimizing: - Linear programming constraints are represented using matrices. 

Statistics: - Matrices represent data and have various operations that they can perform on this data.

Network Analysis: - Graphs are represnted by matrices thus showing the shortests paths.

## Basic Operations on Matrices: -

Taking Inputs for elements and storing them in the matrix.

Taking transpose of a matrix.

Addition of two matrices.

Subtraction of two matrices.

Multiplication of two matrices

## Code: 
```
// Experiment 8: - To study and implement C++ 2D Array - Matrices

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

```
## Code Ouput: - 
![image](https://github.com/user-attachments/assets/6ed0e4bb-d339-4618-953d-22164c5a1868)

![image](https://github.com/user-attachments/assets/bc459813-4983-4cf5-b145-af8c98f1dda6)


## Conclusion: -
In this experimennt we learnt how to implement 2D arrays (matrices) and its operations like addition, multiplication, diagonal addition, transposing, etc in C++ programming language.
