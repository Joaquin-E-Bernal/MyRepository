#include <iostream>
using namespace std;

void cambiarPor6(int &n){//la variable n ocupa un espacio en memoria?
    n = 6;
}

void cambiarPor7(int n){//la variable n ocupa un espacio en memoria?
    n = 7;
}

int main(){

    int num1 = 5;
    
    cambiarPor7(num1);

    cout<<num1;

    return 0;
}