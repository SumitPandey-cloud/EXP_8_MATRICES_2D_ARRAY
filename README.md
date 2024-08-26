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

void inputMat(int a[100][100], int rows, int col) // user input matrix 
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Enter element: (" << i + 1 << ", " << j + 1 << "): ";
            cin >> a[i][j];
        }
    }
}

void dispmat(int a[100][100], int rows, int col) // diplaying matrix 
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void addmat(int a1[100][100], int a2[100][100], int rows, int col)
{
    int add[100][100];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            add[i][j] = a1[i][j] + a2[i][j]; 
        }
    }
    cout << "The addition of the two matrices is as follows: " << endl;
    dispmat(add, rows, col);
}

void diagonaladdmat(int a1[100][100], int a2[100][100], int rows, int col)
{
    int add[100][100] = {0};
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j)
            {
                add[i][j] = a1[i][j] + a2[i][j]; 
            }
        }
    }
    cout << "The diagonal addition of the two matrices is as follows: " << endl;
    dispmat(add, rows, col);
}

void mulmat(int b[100][100], int b1[100][100], int R1, int C1, int C2)
{
    int result[100][100] = {0};
    for(int i = 0; i < R1; i++)
    {
        for(int j = 0; j < C2; j++)
        {
            for(int k = 0; k < C1; k++)
            {
                result[i][j] += b[i][k] * b1[k][j];
            }
        }
    }
    cout << "The product of the two matrices is as follows: " << endl;
    dispmat(result, R1, C2);
}

void rowchecker(int rc[100][100], int row, int col)
{
    bool equal = true;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col - 1; j++)
        {
            if(rc[i][j] != rc[i][j+1])
            {
                equal = false;
                break;
            }
        }
        if(equal)
            cout << "Row " << i + 1 << " has all equal columns." << endl;
        else
            cout << "Row " << i + 1 << " does not have equal columns." << endl;
        equal = true;
    }
}
void transpose(int tr[100][100], int rows, int col)
{
    int a[100][100];
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<col;j++)
        {
            a[j][i] = tr[i][j];
        }
    }
    cout<<"The transpose of the matrix is: "<<endl;
    dispmat(a, col,rows);
}

int main()
{
    int f[100][100];
    cout<<"Printing a matrix"<<endl;
    inputMat(f,3,3); 
    dispmat(f,3,3);
    cout<<"------------"<<endl;
    int mat1[100][100], mat2[100][100];
    int choice;

    cout << "Press a key for the following operations: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Multiplication" << endl;
    cout << "3. Diagonal Addition" << endl;
    cout << "4. Comparing if columns in the same row are equal" << endl;
    cout << "5 . Transposing "<< endl;
    cin >> choice;

    int r1, c1, r2, c2;

    switch (choice)
    {
        case 1:
            cout << "Enter the number of rows for the matrices: ";
            cin >> r1;
            cout << "Enter the number of columns for the matrices: ";
            cin >> c1;

            cout << "Enter the elements of the 1st matrix: " << endl;
            inputMat(mat1, r1, c1);
            cout << "Enter the elements of the 2nd matrix: " << endl;
            inputMat(mat2, r1, c1);

            addmat(mat1, mat2, r1, c1);
            break;

        case 2:
            cout << "Enter the number of rows for the 1st matrix: ";
            cin >> r1;
            cout << "Enter the number of columns for the 1st matrix: ";
            cin >> c1;
            cout << "Enter the number of rows for the 2nd matrix: ";
            cin >> r2;
            cout << "Enter the number of columns for the 2nd matrix: ";
            cin >> c2;

            if (c1 != r2) 
            {
                cout << "Matrix multiplication is not possible with these dimensions." << endl;
            } 
            else 
            {
                cout << "Enter the elements of the 1st matrix: " << endl;
                inputMat(mat1, r1, c1);
                cout << "Enter the elements of the 2nd matrix: " << endl;
                inputMat(mat2, r2, c2);
                mulmat(mat1, mat2, r1, c1, c2);
            }
            break;

        case 3:
            cout << "Enter the number of rows for the matrices: ";
            cin >> r1;
            cout << "Enter the number of columns for the matrices: ";
            cin >> c1;

            cout << "Enter the elements of the 1st matrix: " << endl;
            inputMat(mat1, r1, c1);
            cout << "Enter the elements of the 2nd matrix: " << endl;
            inputMat(mat2, r1, c1);

            diagonaladdmat(mat1, mat2, r1, c1);
            break;

        case 4:
            cout << "Enter the number of rows for the matrix: ";
            cin >> r1;
            cout << "Enter the number of columns for the matrix: ";
            cin >> c1;

            cout << "Enter the elements of the matrix: " << endl;
            inputMat(mat1, r1, c1);

            rowchecker(mat1, r1, c1);
            break;
        case 5: 
            cout << "Enter the number of rows for the matrices: ";
            cin >> r1;
            cout << "Enter the number of columns for the matrices: ";
            cin >> c1;

            inputMat(mat1,r1,c1);
            cout<<"Original matrix"<<endl;
            dispmat(mat1,r1,c1);
            transpose(mat1,r1,c1);
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
```
## Code Ouput: - 
![image](https://github.com/user-attachments/assets/96237bcb-355b-49fc-84b4-29b7e211cdb9)
![image](https://github.com/user-attachments/assets/50ac311c-7786-4026-9d27-b044b10e2d44)


## Conclusion: -
In this experimennt we learnt how to implement 2D arrays (matrices) and its operations like addition, multiplication, diagonal addition, transposing, etc in C++ programming language.
