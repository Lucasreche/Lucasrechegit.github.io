#include <iostream>

using namespace std;

int main () {
    // Declare n1, res
    int n1, res;
    
    	cout << "Este software realiza a conversao de Graus Farenheit em Centigrados" << endl;
    		cout << "Informe de Graus Farenheit que deseja converter: " << endl; //Informe Graus Farenheit:
    		cin >> n1; //Leia n1
          
    			res = (5.0 / 9) * (n1 - 32); // res = (5/9)*(n1-32)
    
    
	cout << "Graus Centigrados: " << res << endl;// Resultado Graus Centigrados:
    
	
system("pause");
return 0;
}
