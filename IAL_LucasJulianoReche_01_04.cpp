#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Declare p1, n1, tx1, tx2, mont e rend
    double p1, n1, tx1, tx2, mont, rend;
       
    	cout << "Este software calcula o valor do montante e o rendimento de uma aplicacao financeira" << endl;
    	
			cout << "Informe o valor da aplicacao inicial " << endl; //Informe o valor da aplicacao inicial
    		cin >> p1;//Leia p1
    	    cout << "Informe a quantidade de meses da aplicacao " << endl;//Informe a quantidade de meses da aplicacao:
    		cin >> n1;//Leia n1
    		cout << "Informe o percentual da taxa de juros ao mes " << endl;//Informe o percentual da taxa de juros ao mes:
    		cin >> tx1;//Leia tx1
    
				tx2 = pow((1 + (tx1/100)), n1);
				mont = p1 * tx2;
				//mont = (p1) * pow((1 + (t1)), *n1);
				rend = mont - p1;
    
    cout << "Sendo assim, o resultado montante final eh de R$ " << mont << endl; //O resultado montante final
    cout << "Sendo assim, o resultado apenas do rendimento final eh de R$ " << rend << endl; //o resultado apenas do rendimento final
	
    
system("pause");
return 0;
}
