#include <iostream>
using namespace std;

class Data{
private:
    int dia;
    int mes;
    int ano;

public:
Data(int dia, int mes, int ano){
    
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;

}

int getDia(){
    return dia;
}
void setDia (int dia){
    this-> dia = dia;
}

int getMes(){
    return dia;
}
void setMes (int mes){
    this-> mes = mes;
}

int getAno(){
    return ano;
}
void setAno(){
    this-> ano = ano;
}

void imprimirdata(){
    cout << this->dia << "/" << this->mes << "/" << this->ano << endl;
}
                              // 1  2  3  4  5  6  7  8  9  10 11 12 
int totaldias(int NumeroMes){ // 31 30 31 30 31 30 31 30 31 30 31 30
if(NumeroMes == 1){
return 31;
}
if(NumeroMes == 2){
return 61;
}
if(NumeroMes == 3){
return 92;
}
if(NumeroMes == 4){
return 122;
}
if(NumeroMes == 5){
return 153;
}
if(NumeroMes == 6){
return 183;
}
if(NumeroMes == 7){
return 214;
}
if(NumeroMes == 8){
return 244;
}
if(NumeroMes == 9){
return 275;
}
if(NumeroMes == 10){
return 305;
}
if(NumeroMes == 11){
return 336;
}
if(NumeroMes == 12){
return 366;
}
}

};



int main(){
    Data pedro(12,10,2001);
    cout << pedro.totaldias(10);
    cout << endl;
    pedro.imprimirdata();
    pedro.setDia(9);
    cout << endl;
    pedro.imprimirdata();

}