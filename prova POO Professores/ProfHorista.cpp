#include <iostream>
#include "Professor.cpp"
using namespace std;

class ProfHorista : public Professor{
private:
    float salario;
    int totalhoras;
public:
    ProfHorista(string nome,string matricula,int idade,float salario,int totalhoras){
        setPNome(nome);
        setPMatricula(matricula);
        setPIdade(idade);
        this->salario = salario;
        this->totalhoras = totalhoras;
    }
    string getHNome(){
        return getPNome();
    }
    string getHMatricula(){
        return getPMatricula();
    }
    int getHIdade(){
        return getPIdade();
    }
    int getHTotalhoras(){
        return this->totalhoras;
    }
    float getHSalario(){
        return this->salario;
    }
    void printH(){
        cout << "Professor: " << getHNome << endl;
        cout << "Matricula: " << getHMatricula << endl;
        cout << "idade: " << getHIdade << endl;
        cout << "Salario " << getHSalario << endl;
        cout << "Horas trabalhadas " << getHTotalhoras<< endl; 
    }

};