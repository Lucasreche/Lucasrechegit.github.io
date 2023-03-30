#include <iostream>

using namespace std;

int main () {
   double n1, n2, res;
    
    	cout << "Este software calcula a media final de acordo com a media aritmetica das notas de prova do semestre" << endl;
    
    		cout << "Informe a nota da primeira prova: " << endl; //Informe a nota da primeira prova:"
    		cin >> n1;//Leia n1
    		cout << "Informe a nota da segunda prova: " << endl; //Informe a nota da segunda prova:"
    		cin >> n2;//Leia n2
    
        		res = ( n1 + n2 ) / 2; // res = (n1 + n2)/2
    
    cout << "Media Final: " << res << endl;
    
	
system("pause");
return 0;
}
