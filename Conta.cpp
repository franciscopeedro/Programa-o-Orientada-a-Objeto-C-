#include <iostream>
#include "Conta.h"
using namespace std;

Conta::Conta(float saldo){
    if(saldo>=0){
        this->saldo = saldo;
    }else{
        this->saldo = 0;
        cout << "Valor do saldo tem q ser maior q zero" << endl;
    } 
}

void Conta::deposita(float saldo){
    this->saldo = this->saldo + saldo; 
}

void Conta::saca(float valor){
    if(this->saldo < valor){
        cout << "Sem saldo disponivel" << endl;
        }else{
            this->saldo = this->saldo - valor;
        }
    }

float Conta::getSaldo(){
        cout <<"O saldo da sua conta eh: " <<this->saldo<<"  reais"<< endl;
}

void Conta::transfere(Conta a, int valor){
    if(this->saldo<valor){
        cout << "Voce não tem saldo suficiente para essa transação"<< endl;
    }else{
        a.deposita(valor);
        this->saldo = this->saldo-valor;
    }
}