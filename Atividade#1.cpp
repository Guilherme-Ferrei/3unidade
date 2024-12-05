//Faça um programa em c++ que solicite os nomes e as qtd. de peças que 10 funcionarios venderam. Imprima a qtd. de peças vendidas no formato de histograma
#include<iostream>
#include<string>
using namespace std;
void linha(int x);
int main(){
    string nome[3];
    int qtd[3];
    for(int a=0;a<3;a++){
    cout << "\nDigite seu nome: ";
    getline(cin,nome[a]);
    cout << "\nDigite a quantidade ";
    cin >> qtd[a];
    cin.ignore();
    }
    for(int a=0;a<3;a++){
        cout << "\n" << nome[a] << "\n";
        linha(qtd[a]);
    }
    return 0;
}
void linha(int x){
    for(int a=0;a<x;a++)
    cout << "=";
}