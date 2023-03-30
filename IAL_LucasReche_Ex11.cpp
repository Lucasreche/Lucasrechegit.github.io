#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){
  float vagas_curso1;
  float cand_curso1;
  float cand_f_curso1;
  float cand_m_curso1;
  float vagas_curso2;
  float cand_curso2;
  float cand_f_curso2;
  float cand_m_curso2;


  	cout << "Informe o numero de vagas do curso 1: ";
  	cin >> vagas_curso1;
  	cout << "Informe o numero de candidatos femininos do curso 1: ";
  	cin >> cand_f_curso1;
  	cout << "Informe o numero de candidatos masculinos do curso 1: ";
  	cin >> cand_m_curso1;
  	cand_curso1 = cand_f_curso1 + cand_m_curso1;

  	cout << "Informe o numero de vagas do curso 2: ";
  	cin >> vagas_curso2;
  	cout << "Informe o numero de candidatos femininos do curso 2: ";
  	cin >> cand_f_curso2;
  	cout << "Informe o numero de candidatos masculinos do curso 2: ";
  	cin >> cand_m_curso2;
  	cand_curso2 = cand_f_curso2 + cand_m_curso2;

  cout << fixed << setprecision(2);
  cout << std::fixed << "Curso 1: Candidatos por vaga: " << cand_curso1 / vagas_curso1 << "cand/vaga" << endl;
  cout << std::fixed << "Curso 1: Percentual feminino: " << cand_f_curso1 / vagas_curso1 << "cand/vaga" << endl;
  cout << std::fixed << "Curso 2: Candidatos por vaga: " << cand_curso2 / vagas_curso2 << "cand/vaga" << endl;
  cout << std::fixed << "Curso 2: Percentual feminino: " << cand_f_curso2 / vagas_curso2 << "cand/vaga" << endl;

  return 0;
}
