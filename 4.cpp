#include <bits/stdc++.h>
using namespace std;
/*
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53*/

float calculaPorcentagem(float valor, float total){
    return (valor*100)/total;
}
int main(){
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float total = sp + rj + mg + es + outros;
    
    cout << "SP: " << calculaPorcentagem(sp, total) << "%\n";
    cout << "RJ: " << calculaPorcentagem(rj, total) << "%\n";
    cout << "MG: " << calculaPorcentagem(mg, total) << "%\n";
    cout << "ES: " << calculaPorcentagem(es, total) << "%\n";
    cout << "Outros: " << calculaPorcentagem(outros, total) << "%\n";


    return 0;
}