#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;

class DinamicKey {
private:
    string key[6][9] = {
        {" ", "A", "B", "C", "D", "E", "F", "G", "H"},
        {"1", "99", "11", "34", "02", "72", "15", "87", "26"},
        {"2", "67", "76", "05", "62", "13", "42", "53", "33"},
        {"3", "43", "06", "17", "88", "28", "78", "65", "10"},
        {"4", "12", "47", "82", "36", "08", "51", "18", "80"},
        {"5", "86", "45", "90", "18", "74", "22", "37", "49"}
    };
public:
	DinamicKey();
	~DinamicKey();

	void showMatrix();
	bool authenticateKey();
};