#include <iostream>
#include "./Conta.cpp"
using namespace std;


int main(){
    Conta *a = new Conta(10);
    Conta *b = new Conta(2);
    a->transfere(*b,5);
    cout << endl << endl;
    cout <<"O saldo da primeira conta: "<< a->getSaldo() << endl;
    cout <<"O saldo da segunda conta: "<< b->getSaldo() << endl;
}