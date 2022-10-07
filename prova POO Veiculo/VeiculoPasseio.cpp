#include <iostream>
#include "Veiculo.cpp"
using namespace std;

class VeiculoPasseio: public Veiculo{
private:
    float volumeinterno;
public:
    VeiculoPasseio(){}
    VeiculoPasseio(string nome,float peso,float potencia, float volumeinterno){
        setNome(nome);
        setPeso(peso);
        setPotencia(potencia);
        this->volumeinterno = volumeinterno;
    }
    void setVolumeinterno(float volumeinterno){
        this->volumeinterno = volumeinterno;
    }
    float getVolumeinterno(){
        return this->volumeinterno;
    }
    float pesopotencia(){
        return getVPeso()/getVPotencia();
    }

    void print(){
        cout << "Modelo:" << getVNome()<< endl;
        cout << "Peso:" << getVPeso()<< endl;
        cout << "Potencia:" << getVPotencia()<< endl;
        cout << "Peso potencia:" << pesopotencia();
        cout << "Volume interno" << getVolumeinterno();
        
    }
};