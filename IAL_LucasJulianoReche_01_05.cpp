#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a, b, c, delta, x1, x2;
       
    	cout << "Este software calcula o valor da raiz de uma Equacao do 2° grau " << endl;
    	
			cout << "Informe o valor de a: " << endl; //Escreva "Informe o valor de a:"
    		cin >> a;//Leia a
        	cout << "Informe o valor de b: " << endl;//Escreva "Informe o valor de b"
    		cin >> b;//Leia b
    		cout << "Informe o valor de c: " << endl;//Escreva "Informe o valor de c"
    		cin >> c;//Leia c
    
 
				delta = sqrt((pow(b, 2) - (4 * a * c)));
				x1 = ((-b) + delta) / (2 * a);
				x2 = ((-b) - delta) / (2 * a);
    
    
    cout << "Sendo assim, o resultado de delta eh " << delta << endl; //o resultado de delta
    cout << "Sendo assim, o resultado x1 eh de " << x1 << endl; //resultado x1
    cout << "Sendo assim, o resultado x2 eh de " << x2 << endl; //resultado x2
    
	
system("pause");
return 0;
}
