//Faça um programa em C++ que solicite os nomes e as idades de 10 pessoas
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string nome[3];
    int idade[3];
    for(int a=0;a<3;a++){
        cout << "\nDigite seu nome: ";
        getline(cin,nome[a]);
        cout << "\nDigite sua idade: ";
        cin >> idade[a];
        cin.ignore();
    }
    for(int a=0;a<3;a++)
    cout << "\nNome: " << nome[a] << " idade: " << idade[a];
    }