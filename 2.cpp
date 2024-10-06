#include <bits/stdc++.h>
using namespace std;

bool fibonacci(int n){
    int x0 = 0;
    int x1 = 1;

    if(x0 == n) return true; // Unico caso em que o while pode dar problema

    int soma = x0+x1;
    while(soma <= n){
        int x2 = soma;
        if(x2 == n) return true;
        x0 = x1;
        x1 = x2;
        soma = x0+x1;
    }
    return false;
}

int main(){
    auto resposta = fibonacci(55);
    if (resposta) cout << "O numero existe na sequencia de Fibonacci\n";
    else cout << "O numero nao existe na sequencia de Fibonacci\n";
    
    return 0;
}