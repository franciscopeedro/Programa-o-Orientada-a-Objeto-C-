#include <iostream>
#include "ProfDE.cpp"
#include "ProfHorista.cpp"

int main(){
    ProfDE a("eli","A30",22,5000);
    ProfHorista b("Bruno","A31",20,4000,200);
    a.print();
    b.printH();

}