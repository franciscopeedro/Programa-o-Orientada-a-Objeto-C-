#include <iostream>
using namespace std;

class Retangulo{
private:
    float base;
    float altura;

public:
    void setBase(float base){
        this->base = base;
    }
    float getBase(){
        return this->base;
    }

    void setAltura(float altura){
        this->altura = altura;
    }
    float getAltura(){
        return this->altura;
    }

    float calculaArea(){
        return base*altura;
    }
    float calcularPerimetro(){
        return ((base*2) + (altura*2));
    }

    void Rprint(){
        cout << "Base:" << base << endl;
        cout << "Altura:" << altura << endl;
    }

};