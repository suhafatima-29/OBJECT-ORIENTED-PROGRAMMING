#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ROW = 2;
    const int COL = 2;

    int intA[ROW][COL], intB[ROW][COL];
    float floatA[ROW][COL], floatB[ROW][COL];
    double doubleA[ROW][COL], doubleB[ROW][COL];

    cout << "Enter elements of first 2x2 matrix (integers):\n";
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> intA[i][j];

    cout << "Enter elements of second 2x2 matrix (integers):\n";
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> intB[i][j];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            floatA[i][j] = intA[i][j];
            floatB[i][j] = intB[i][j];
            doubleA[i][j] = intA[i][j];
            doubleB[i][j] = intB[i][j];
        }
    }

    int intResult[ROW][COL] = {0};
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            for (int k = 0; k < COL; k++)
                intResult[i][j] += intA[i][k] * intB[k][j];
                
    float floatResult[ROW][COL] = {0};
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            for (int k = 0; k < COL; k++)
                floatResult[i][j] += floatA[i][k] * floatB[k][j];

    double doubleResult[ROW][COL] = {0};
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            for (int k = 0; k < COL; k++)
                doubleResult[i][j] += doubleA[i][k] * doubleB[k][j];

    cout << fixed << setprecision(6);

    cout << "\nInteger matrix multiplication result:\n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << intResult[i][j] << "\t";
        cout << endl;
    }

    cout << "\nFloat matrix multiplication result:\n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << floatResult[i][j] << "\t";
        cout << endl;
    }

    cout << "\nDouble matrix multiplication result:\n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << doubleResult[i][j] << "\t";
        cout << endl;
    }

    return 0;
}

