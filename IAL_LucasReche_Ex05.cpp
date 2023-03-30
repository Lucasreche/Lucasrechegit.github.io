#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
  int ano_atual;
  int ano_posterior;
  int poup_a;
  int poup_b;

  poup_a = 9000000;
  poup_b = 20000000;

  cout << "Digite o ano atual: ";
  cin >> ano_atual;

  ano_posterior = ano_atual;

  for(;poup_a <= poup_b;){
    cout << "Ano" << ano_posterior << " | Populacao A: " << poup_a << " | Populacao B: " << poup_b << endl;
    poup_a = poup_a + (poup_a * 0.03);
    poup_b = poup_b + (poup_b * 0.015);
    ano_posterior ++;
  }

  cout << "Ano" << ano_posterior << " | Populacao A: " << poup_a << " | Populacao B: " << poup_b << endl;
  poup_a = poup_a + (poup_a * 0.03);
  poup_b = poup_b + (poup_b * 0.015);
  ano_posterior ++;

  return 0;
}
