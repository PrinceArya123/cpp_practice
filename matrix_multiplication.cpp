#include <iostream>
using namespace std;

int main() {
    int r1, c1;
    cout << "Enter the number of rows in matrix A: ";
    cin >> r1;
    cout << "Enter the number of columns in matrix A: ";
    cin >> c1;

    int A[r1][c1];
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    int r2, c2;
    cout << "Enter the number of rows in matrix B: ";
    cin >> r2;
    cout << "Enter the number of columns in matrix B: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible with the given data." << endl;
        return false;// Exit with an error code
    }

    int B[r2][c2];
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    int c[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int value = 0;
            for (int k = 0; k < r2; k++) {
                value += A[i][k] * B[k][j];
            }
            c[i][j] = value;
        }
    }

    cout << "Resultant Matrix (C):" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
