#include <iostream>
#include "Professor.cpp"
using namespace std;

class ProfDE : public Professor{
private:
    float salario;
public:
    ProfDE(string nome,string matricula,int idade,float salario){
        setPNome(nome);
        setPMatricula(matricula);
        setPIdade(idade);
        this->salario = salario;
    }
    string getNome(){
        return getPNome();
    }
    string getMatricula(){
        return getPMatricula();
    }
    int getIdade(){
        return getPIdade();
    }
    float getSalario(){
        return this->salario;
    }

    void print(){
        cout << "Professor: " << getNome << endl;
        cout << "Matricula: " << getMatricula << endl;
        cout << "idade: " << getIdade << endl;
        cout << "Salario " << getSalario << endl;
    }

};