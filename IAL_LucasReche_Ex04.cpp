#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
  string    nome;
  float     preco_compra, preco_venda, lucro;
  bool      flag;
  int       lucro_ma_10_me_20 = 0, lucro_ma_20 = 0, lucro_me_10 = 0, count;

  for(count = 0; flag == false;){
    cin.ignore(INT_MAX, '\n');
	cout << "Insira o nome: ";
    cin >> nome;
	cin.ignore(INT_MAX, '\n');
    cout << "Insira o preco de compra: ";
    cin >> preco_compra;
	cin.ignore(INT_MAX, '\n');
    cout << "Insira o preco de venda: ";
    cin >> preco_venda;

    lucro = (preco_venda - preco_compra) / preco_compra;

    if (lucro < 0.1){
    lucro_me_10 ++;
    }
    else if ((lucro > 0.1) && (lucro < 0.2)){
    lucro_ma_10_me_20 ++;
    }
    else if (lucro > 0.2){
    lucro_ma_20 ++;
    }

    count ++;
    if (count >= 10){
      flag = true;
    }
  }

  cout << "QTd Lucro menor que 10%: " << lucro_me_10 << endl;
  cout << "QTd Lucro menor que 10% e maior que 20%: " << lucro_ma_10_me_20 << endl;
  cout << "QTd Lucro maior que 20%: "<< lucro_ma_20 << endl;

  return 0;
}
