#include <iostream>
using namespace std;

class Aluno{
private:
string nome;
int serie;
int grau;

public:
static int qtdAlunos;

Aluno(string nome, int serie, int grau){
    this->nome = nome;
    this->serie= serie;
    this->grau = grau;

    qtdAlunos += 1;
}

~Aluno(){
    this->qtdAlunos--;
}

string getNome(){
    return nome;
}
void setNome(string nome){
    this-> nome = nome;
}

int getSerie(){
    return serie;
}
void setSerie(int serie){
    this-> serie = serie;
}

int getGrau(){
    return grau;
}
void setGrau(int grau){
    this-> grau = grau;
}


};

int main(){

    Aluno a("Aluno",0,0);
    a.setNome("eli");
    a.setSerie(8);
    a.setGrau(3);
    
    Aluno b("Aluno",0,0);
    b.setNome("paulo");
    b.setSerie(8);
    b.setGrau(3);
    
    Aluno c("Aluno",0,0);
    c.setNome("bruno");
    c.setSerie(8);
    c.setGrau(3);
    
    Aluno d("Aluno",0,0);
    d.setNome("gabriel");
    d.setSerie(8);
    d.setGrau(3);
    
cout << a.qtdAlunos << endl;  



}