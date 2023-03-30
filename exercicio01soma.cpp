#include <iostream>



using namespace std;



int main () {
    // Declare n1, n2, n3, res
    int n1, n2, n3, res;
    
    cout << "Informe o primeiro numero"; //Escreva "Informe o 1 numero:"
    cin >> n1;//Leia n1
    
    cout << "Informe o segundo numero";//Escreva "Informe o 2 numero:"
    cin >> n2;//Leia n2
    
    cout << "Informe o terceiro numero";//Escreva "Informe o 3 numero:"
    cin >> n3;//Leia n3
    
    res = n1 + n2 + n3; // res = n1 + n2 + n3
    
    cout << "O resultado é" << res << endl;
    system("pause");
    return 0;
}
