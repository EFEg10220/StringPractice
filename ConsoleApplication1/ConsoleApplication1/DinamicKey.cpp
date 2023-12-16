#include "DinamicKey.h"

DinamicKey::DinamicKey(){

}

DinamicKey::~DinamicKey(){

}

void DinamicKey::showMatrix() {
    for (char i = 0; i < 6; i++) {
        for (char j = 0; j < 9; j++) {
            cout << key[i][j] << "\t";
        }
        cout << endl;
    }
}

bool DinamicKey::authenticateKey() {
    srand(time(NULL));
        int row, column;
        string value;
        bool isCorrect = true;

        showMatrix();
        for (int i = 0; i < 3; i++) {
            row = rand() % 5 + 1;
            column = rand() % 8 + 1;

            cout << "Ingrese los valores correspondientes de (" << key[0][column] << key[row][0] << "): ";
            cin >> value;

            if (value != key[row][column]) {
                cout << "Autenticacion fallida, intente de nuevo\n";
                isCorrect = false;
                break;
            }
        }

        if (isCorrect) {
            cout << "Autenticacion exitosa\n";
            return true;
        }
}