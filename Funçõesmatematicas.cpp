#include<cmath> //biblioteca padrão para funções matemáticas
#include<iostream>
using namespace std;
int main(){
    float n;
    cout << "\nDigite um nuero inteiro qualquer ";
    cin >> n;
    cout << "\nA raiz quadrada de " << n << "=" << sqrt(n); // sqrt() - calcular a raiz quadrada de um número inteiro
    cout << "\n\n";
    float b,e;
    cout << "\nEntre com a base ";
    cin >> b;
    cout << "\nEntre com o expoente ";
    cin >> e;
    cout << "\n " << b << "elevado a " << e << "=" << pow(b,e);
    return 0;
}