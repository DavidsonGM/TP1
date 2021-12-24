#include <iostream>
using namespace std;

class PessoaFisica {
private:
    int mat;
public:
    PessoaFIsica();
    PessoaFisica(int);
    int getMat();
};

class Engenheiro:public PessoaFisica {
private:
    int registro;
    public:
        Engenheiro();
        Engenheiro(int,int);
        int getRegistro();
};

inline PessoaFisica::PessoaFisica(){
    mat = 10;
}

inline Engenheiro::Engenheiro() {
    registro = 5;
}

int main(){
    Engenheiro eng;

    cout << eng.mat << endl;

}
