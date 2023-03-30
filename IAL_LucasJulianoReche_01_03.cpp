#include <iostream>

using namespace std;

int main () {
    // Declare n1, n2, res
    double n1, n2, res;
    
    	cout << "Este software calcula o IMC a partir do peso e altura informado a seguir" << endl;
    
    		cout << "Informe o seu peso (em Kg): "<< endl; //Informe o peso em kg
    		cin >> n1;//Leia n1
       		cout << "Informe a sua altura (em metros 0.00): "<< endl;//Informe a altura em metros 0.00
    		cin >> n2;//Leia n2
    
        
    			res = (n1 / ( n2 * n2)); // res = n1 / ( n1 * n2)
    
    
	cout << "IMC: " << res << endl;//resultado IMC
    
	
system("pause");
return 0;
}
