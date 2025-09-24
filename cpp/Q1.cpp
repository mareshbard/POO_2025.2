#include <iostream>
using namespace std;
int main(){

 int num;
    cout << "Digite um numero: " << endl;
    cin >> num;
    if (num%2==0) {
        cout << "Eh par" << endl;
    }
    else {
        cout << "Eh impar" << endl;
    }

    return 0;
}
