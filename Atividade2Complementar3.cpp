
#include <iostream>

using namespace std;

class Aluno{
private:
    string nome, matricula;
public:
    Aluno(){
        nome = "Sem nome";
        matricula = "Sem matricula";
    }
    void set_nome(){
        string name;
        cout << "digite o nome do aluno:\n";
        cin >> name;
        nome = name;
    }
    void set_matricula(){
        string mat;
        cout << "digite a matricula do aluno:\n";
        cin >> mat;
        matricula = mat;
    }
    string get_nome(){
        return nome;
    }
    string get_matricula(){
        return matricula;
    }
};

int main(){

    Aluno aluno;
    cout << aluno.get_nome() << endl << aluno.get_matricula() << endl;

    aluno.set_nome();
    aluno.set_matricula();

    cout << aluno.get_nome() << endl << aluno.get_matricula() << endl;

    return 0;

}
