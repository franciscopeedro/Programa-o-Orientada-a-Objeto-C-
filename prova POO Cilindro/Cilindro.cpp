#include <iostream>
#include "Circulo.cpp"
#include "Retangulo.cpp"
using namespace std;

class Cilindro : public Circulo, Retangulo{
public:
    Cilindro(float bas, float alt, float r){
        setBase(bas);
        setAltura(alt);
        setRaio(r);
    }
    float calculaarea(){
        float auxlateral = (2 * 3,14 * getAltura()*getRaio());
        float auxbase= (3,14*getRaio()*getRaio());
        return auxlateral + 2*auxbase;
    }
    float calculaVolume(){
        return (3,14 * (getRaio()*getRaio()) * getAltura());
    }
    void print(){
        Rprint();
        Cprint();
        cout << "Area do cilindro:" << calculaarea() << endl;
        cout << "Volume do cilindro:" << calculaVolume() << endl;
        
    }

};