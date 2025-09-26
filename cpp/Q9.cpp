#include <iostream>
using namespace std;

int main(){
    int decisao;
    float graus;
    cout << "Digite se quer: celsius para fahrenheit (1) ou fahrenheit para celsius (2)"<<endl;
    cin>> decisao;
    cout << "Agora digite os graus: "<<endl;
    cin >> graus;
    
    if(decisao == 1){
        graus = (graus*(9.0/5.0)) + 32;
        cout << "Convertendo, temos " << graus << "°F"<<endl;
    }
    else{
        graus = (graus-32)*(5.0/9.0);
        cout << "Convertendo, temos " << graus << "°C"<<endl;
    }
}
