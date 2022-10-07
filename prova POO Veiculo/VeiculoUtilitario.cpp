#include <iostream>
#include "Veiculo.cpp"
#include "VeiculoCarga.cpp"
#include "VeiculoPasseio.cpp"
using namespace std;

class VeiculoUtilitario: public Veiculo,VeiculoCarga,VeiculoPasseio{
public:
    VeiculoUtilitario(float volumeinterno, float carga){
        setVolumeinterno(volumeinterno);
        setCarga(carga);
    }
    float pesoUpotencia(){
        return  pesoCpotencia();
    }

    void print(){
        cout << "Peso potencia:" << pesoCpotencia();
        cout << "Carga" << getCarga() << endl;

    }
};