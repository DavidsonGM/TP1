#include <iostream>

using namespace std;

class Aluno{
private:
    string nome, matricula;
public:
    void set_nome(){
        cout << "digite o nome do aluno:\n";
        cin >> this->nome;
    }
    void set_matricula(){
        cout << "digite a matricula do aluno:\n";
        cin >> this->matricula;
    }
    string get_nome(){
        return nome;
    }
    string get_matricula(){
        return matricula;
    }
};
class ex_Aluno: public Aluno{
public:
    int ano_formatura;
};

int main(){

    Aluno *aluno = new Aluno;
    ex_Aluno *exaluno = new ex_Aluno;


    aluno->set_nome();
    aluno->set_matricula();
    exaluno->set_nome();
    exaluno->set_matricula();
    exaluno->ano_formatura = 2024;

    cout << aluno->get_nome() << endl << aluno->get_matricula() << endl;
    cout << "O aluno "<< exaluno->get_nome() << " de matricula " << exaluno->get_matricula() << " formou no ano de " << exaluno->ano_formatura << endl;
    delete aluno;
    delete aluno;

    return 0;

}
