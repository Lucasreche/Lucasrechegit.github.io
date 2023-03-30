#include <iostream>
using namespace std;
int main (){
	double n, n1, n2, n3, media_ari, faltas, frequencia ;
	string matricula, status;
	cout << "Informe a Matricula do aluno: ";
	cin >> matricula;
	cout << "Informe a primeira nota: ";
	cin >> n1;
	cout << "Informe a segunda nota: ";
	cin >> n2;
	cout << "Informe a terceira nota: ";
	cin >> n3;
	cout << "Informe a frequencia do aluno: ";
	cin >> frequencia;
	
	media_ari = (n1+n2+n3)/3;
	
	cout << "Matricula: " << matricula << endl; 
	cout << "Nota final: " << media_ari << endl;
	
		if (media_ari >= 60.0 && frequencia <= 40){
		status = "Aprovado";	
		}
		else if (media_ari < 60.0) {
		status = "Reprovado";
		}
	
		
	cout << "Codigo/Status: " << status;
	
	
}
