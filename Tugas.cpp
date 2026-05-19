#include <iostream>
using namespace std;

class RekeningBank {
protected:
    string nama;
    double saldo;

public:
    RekeningBank(string nama, double saldo) {
        this->nama = nama;
        this->saldo = saldo;
    }

    virtual void potongAdmin() = 0;


};
