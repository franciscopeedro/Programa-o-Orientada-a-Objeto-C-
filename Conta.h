#include <iostream>
using namespace std;

class Conta{
    private:
    float saldo;
    
    public:
    Conta(float saldo);                   //Construtor
    void deposita(float saldo);           //Adiciona valor
    void saca(float valor);               //Subtrai valor do saldo
    float getSaldo();                     //Retorna o saldo
    void transfere(Conta a,int valor);    //Transere para outra conta um valor.

};
