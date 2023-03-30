#include <iostream>
#include <iomanip>
#include<string>
#include<cmath>

using namespace std;

int main(){
  float  canal_4 = 0;
  float  canal_5 = 0;
  float  canal_7 = 0;
  float  canal_12 = 0;
  bool   flag;
  int    audiencia_total;
  int    canal;
  int    pessoas;


  for(flag = false; flag == false; audiencia_total += pessoas){
    cout << "Informe o numero do canal [4, 5 , 7, 12]: ";
    cin >> canal;

    cout << "Numero de pessoas assistindo o canal: ";
    cin >> pessoas;

canal_4 = 0;
    if(canal == 4){
       canal_4 += pessoas;
    }
canal_5 = 0;
    if(canal == 5){
       canal_5 += pessoas;
    }
canal_7 = 0;
    if(canal == 7){
       canal_7 += pessoas;
    }
canal_12 = 0;
    if(canal == 12){
       canal_12 += pessoas;
    }

    if(canal == 0){
      flag = true;
    }
  }


  std::cout.precision(2);
  cout << std::fixed << "Percentual audiencia canal 4: " << (canal_4 / (audiencia_total - 1) )<< endl;
  cout << std::fixed << "Percentual audiencia canal 5: " << (canal_5 / (audiencia_total - 1) )<< endl;
  cout << std::fixed << "Percentual audiencia canal 7: " << (canal_7 / (audiencia_total - 1) )<< endl;
  cout << std::fixed << "Percentual audiencia canal 12: " << (canal_12 / (audiencia_total - 1) ) << endl;

  return 0;
}
