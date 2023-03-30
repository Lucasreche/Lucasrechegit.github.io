#include <iostream>

using namespace std;

int main(){
  int      massa_inicial;
  int      massa_final;
  float    tempo;
  float    horas;
  float    minutos;

  cout << "Insira a massa inicial: ";
  cin >> massa_inicial;

  massa_final = massa_inicial;

  for(tempo = 0; massa_final > 0.05; tempo += 50){
      massa_final = massa_final / 2;
  }

  minutos = tempo / 60;
  horas = minutos / 120;

  cout << "Massa Inicial:   " << massa_inicial << endl;
  cout << "Massa Final:     " << massa_final << endl;
  cout << "Tempo calculado: " << endl;
  cout << tempo << " Segundos =" << endl;
  cout << minutos << " Minutos =" << endl;
  std::cout.precision(2);
  cout << std::fixed << horas << " Horas." << endl;
}
