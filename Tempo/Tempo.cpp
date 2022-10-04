#include <iostream>
using namespace std;

class Tempo{
    private :
    int seg;
    int min;
    int hora;
public:

Tempo(){
    this->seg = 0;
    this->min = 0;
    this->hora = 0;
}

Tempo(int s, int m, int h){
    this->seg = s;
    this->min = m;
    this->hora = h;
}

void setSeg(int s){
    this->seg = s;
} 
int getSeg(){
    return this->seg; 
} 

void setMin(int m){
    this->min = m;
} 
int getMin(){
    return this->min; 
}

void setHora(int h){
    this->hora = h;
} 
int getHora(){
    return this->hora; 
}

void imprime(Tempo a){
    cout << a.hora << ":"<< a.min << ":" << a.seg << endl;
}

Tempo subtrair(Tempo a, Tempo b){
    Tempo c;
    c.seg = a.seg - b.seg;
    c.min = a.min - b.min;
    c.hora = a.hora - b.hora;
    imprime(c);
}

Tempo somar(Tempo a, Tempo b){
    Tempo c;
    c.seg = a.seg + b.seg;
    c.min = a.min + b.min;
    c.hora = a.hora + b.hora;
    imprime(c);
}

};

int main(){
    Tempo a(1,20,12);
    Tempo b(1,15,10);

    a.subtrair(a,b);

}