#include <iostream>
using namespace std;

class Professor{
private:
    string nome;
    string matricula;
    int idade;
public:
    Professor(){}
    void setPNome(string nome){
        this->nome = nome;
    }
    string getPNome(){
        return this->nome;
    }

    void setPMatricula(string matricula){
        this->matricula = matricula;
    }
    string getPMatricula(){
        return this->matricula;
    }

    void setPIdade(int idade){
        this->idade = idade;
    }
    int getPIdade(){
        return this->idade;
    }
};