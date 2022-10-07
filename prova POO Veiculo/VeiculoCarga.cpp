#include <iostream>
#include "Veiculo.cpp"
using namespace std;

class VeiculoCarga: public Veiculo{
private:
    float carga;
public:
    VeiculoCarga(){}
    VeiculoCarga (string nome,float peso,float potencia, float carga){
        setNome(nome);
        setPeso(peso);
        setPotencia(potencia);
        this->carga = carga;
    }
    void setCarga(float carga){
        this->carga = carga;
    }
    float getCarga(){
        return this->carga;
    }
    float pesoCpotencia(){
        return (getVPeso() + carga)/getVPotencia();
    }

    void print(){
        cout << "Modelo:" << getVNome()<< endl;
        cout << "Peso:" << getVPeso()<< endl;
        cout << "Potencia:" << getVPotencia()<< endl;
        cout << "Peso potencia:" << pesoCpotencia();
        cout << "Carga" << getCarga() << endl;
        
    }
};