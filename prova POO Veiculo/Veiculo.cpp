#include <iostream>
using namespace std;

class Veiculo{
private:
    string nome;
    float peso;
    float potencia;
public:
    Veiculo(){};
    Veiculo(string nome,float peso,float potencia){
        this->nome = nome;
        this->peso = peso;
        this->potencia = potencia;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    string getVNome(){
        return this->nome;
    }

    void setPeso(float peso){
        this->peso = peso;
    }
    float getVPeso(){
        return this->peso;
    }

    void setPotencia(float potencia){
        this->potencia;
    }
    float getVPotencia(){
        return this->potencia;
    }

};