#include <iostream>
using namespace std;

class Circulo{
private:
    float raio;

public:
    void setRaio(float raio){
        this->raio = raio;
    }
    float getRaio(){
        return this->raio;
    }

    float calcularArea(){
        return (3,14 * (raio*raio)); 
    }
    float calcularPerimetro(){
       return 2*3,14*raio;
    }

    void Cprint(){
        cout << "Raio:" << raio << endl;
    }

};