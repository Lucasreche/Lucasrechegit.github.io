#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  float  criancas_nascidas;
  cout << "Informe o numero de criancas nascidas no periodo: ";
  cin >> criancas_nascidas;
  
  string sexo;
  float  vinteq_menos;
  float  mortas_masc;
  float  meses_vida;
  float  mortas;


while(sexo !="V"){
  for(mortas = 0; sexo != "V"; mortas++){
  
      cout << "Sexo crianca morta, [M] masculino ou [F] feminino (OU PARA TERMINAR FORMULARIO DIGITE V): ";
      cin >> sexo;

      cout << "Numero de meses de vida (OU PARA TERMINAR FORMULARIO DIGITE V): ";
      cin >> meses_vida;
  }
}
      mortas_masc = 0;
	  if(sexo == "M"){
        mortas_masc ++;
      }
  	  vinteq_menos = 0;
      if( meses_vida < 24){
      vinteq_menos ++;
      }


  cout << fixed << setprecision(2);
  cout << std::fixed << "Porcentagem de criancas mortas: " << ((mortas - 1) / criancas_nascidas) * 100 << "%" << endl;
  cout << std::fixed << "Porcentagem de criancas sexo masculino mortas: " << (mortas_masc / criancas_nascidas ) * 100 << "%"<< endl;
  cout << std::fixed << "Porcentagem de criancas que viverem 24 meses ou menos: " << ( vinteq_menos / criancas_nascidas) * 100 << "%"<< endl;

  return 0;
}
