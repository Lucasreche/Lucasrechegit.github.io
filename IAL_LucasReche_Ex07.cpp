#include <iostream>

using namespace std;

int main(){
  float   turma_a;
  float   pres_turma_a;
  float   ausn_turma_a;
  float   turma_b;
  float   pres_turma_b;
  float   ausn_turma_b;
  float   turma_c;
  float   pres_turma_c;
  float   ausn_turma_c;


  cout << "Turma A: Digite o numero de alunos matriculados: ";
  cin >> turma_a;
  cout << "Turma A: Digite a quantidade de alunos presentes: ";
  cin >> pres_turma_a;
  cout << "Turma A: Digite a quantidade de alunos ausentes: ";
  cin >> ausn_turma_a;


  cout << "Turma B: Digite o numero de alunos matriculados: ";
  cin >> turma_b;
  cout << "Turma B: Digite a quantidade de alunos presentes: ";
  cin >> pres_turma_b;
  cout << "Turma B: Digite a quantidade de alunos ausentes: ";
  cin >> ausn_turma_b;


  cout << "Turma C: Digite o numero de alunos matriculados: ";
  cin >> turma_c;
  cout << "Turma C: Digite a quantidade de alunos presentes: ";
  cin >> pres_turma_c;
  cout << "Turma C: Digite a quantidade de alunos ausentes: ";
  cin >> ausn_turma_c;

  std::cout.precision(2);
  cout << std::fixed << "Turma A: Porcentagem de ausencia: " << ausn_turma_a / turma_a << endl;
  cout << std::fixed << "Turma B: Porcentagem de ausencia: " << ausn_turma_b / turma_b << endl;
  cout << std::fixed << "Turma C: Porcentagem de ausencia: " << ausn_turma_c / turma_c << endl;

  cout << "Turmas com percentual de ausencia maior a 5%: " << endl;

  if ((ausn_turma_a / turma_a) > 0.05) {
      cout << "Turma A." << endl;
  }
  if ((ausn_turma_b / turma_b) > 0.05) {
      cout << "Turma B." << endl;
  }
  if ((ausn_turma_c / turma_c) > 0.05) {
      cout << "Turma C." << endl;
  }
  else
  {
    cout << "0" << endl;
  }


  return 0;
}
