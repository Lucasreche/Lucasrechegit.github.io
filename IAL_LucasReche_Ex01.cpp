#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double idade;
    float soma;
    int contador;

    contador = 0;

    for (idade = -1; idade != 0;) {
      cout << "Digite uma sequencia de idades, sendo a ultima zero: ";
      cin >> idade;
      soma += idade;
      contador += 1;
    }

    cout << fixed << setprecision (2);
	cout <<"A media de idades eh: " << soma / (contador - 1) << endl;
  return 0;
}
	

