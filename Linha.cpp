#include<iostream>
using namespace std;
void linha(); //prototipo= void não retorna valor nenhuma , só da o comando
int main(){
    int c;
    linha();
    cout << "\n\t\tPrograma legal \n";
    linha();
    cout << "\n\n\n\t\t< 1 > Cadastro ";
    cout << "\n\t\t< 2 > Consulta ";
    cout << "\n\t\t< 3 > Relatorios\n\n\n";
    linha();
    cout << "\nDigite o que vc necessita -> [ ]\b\b";
    cin >> c;
    return 0;
}

void linha(){
    for(int a=0;a<75;a++)
    cout << "=";
}
// Se caso o cliente quiser alterar a linha no codigo como:
//int main(){
//    int c;
//    linha(30,'@');
//    cout << "\n\t\tPrograma legal \n";
//    linha(20,'%');
//    cout << "\n\n\n\t\t< 1 > Cadastro ";
//    cout << "\n\t\t< 2 > Consulta ";
//    cout << "\n\t\t< 3 > Relatorios\n\n\n";
//    linha(10,'-');
//    cout << "\nDigite o que vc necessita -> [ ]\b\b";
//    cin >> c;
//    return 0;

// o void linha() vai passar a ser void linha(int x,char y)
// e o void linha() da 18º passara a ser
// void linha(int x, char y)
// for(int a=0;a<x;a++);00
// cout << y;