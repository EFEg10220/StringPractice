#include "DinamicKey.h"

DinamicKey::DinamicKey(){

}

DinamicKey::~DinamicKey(){

}

bool DinamicKey::authenticateKey() {
        int row, column, value;

        cout << "Introduzca los valores para iniciar sesion: (fila, columna, valor)\n";

        for (int i = 0; i < 3; ++i) {
            cout << "Ingrese la fila (1-5): "; cin >> row;
            cout << "Ingrese la columna (1-8): "; cin >> column;
            cout << "Ingrese el valor: "; cin >> value;

            if (row >= 1 && row <= 5 && column >= 1 && column <= 8 && value == key[row - 1][column - 1]) {
                cout << "Autenticacion exitosa\n";
            }
            else {
                cout << "Autenticacion fallida, Intente de nuevo\n";
                return false;
            }
        }

        return true;
}
