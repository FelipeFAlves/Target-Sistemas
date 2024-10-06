#include <bits/stdc++.h>
using namespace std;

string reverte(string original){
    string inverte = "";
    int tam = original.size() - 1;
    while(original[tam] > 0){
        // cout <<  original[tam] << "\n";
        inverte += original[tam];
        tam--;
    }
    return inverte;
}
int main(){
    string original = "StringBemOriginal";
    auto resp = reverte(original);
    // cout << original << "\n";
    cout << resp << "\n";
    return 0;
}