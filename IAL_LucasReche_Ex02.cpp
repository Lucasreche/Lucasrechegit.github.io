#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  int n;
   	cout << "Quantas pessoas serao digitadas? ";
  	cin >> n;
  	
  float altura[n];
  string sexo[n];
  float maior_altura;
  float menor_altura;
  float total_homens;
  float soma_altura_mulheres;
  float media_altura_mulheres; 
  float conthomens;
  
	for (int i = 0; i < n; i++) {
		cout << "Dados da " << i+1 << "a pessoa:" << endl; 
		cout << "Insira a Altura: "; 
		cin >> altura[i];
		cout << "Insira o sexo [M] ou [F]: ";
		cin >> sexo[i];	
	

  	soma_altura_mulheres = 0;
	for (int i = 0; i < n; i++)	{
	    if (sexo[i] == "F")	{
		soma_altura_mulheres += altura[i];
		}
	media_altura_mulheres = soma_altura_mulheres / n;
	}
	
	
	total_homens = 0;
	for (int i = 0; i < n; i++)	{
	    if (sexo[i] == "M")	{
		total_homens++;
		}
  	}		
	cout << fixed << setprecision(2);
	cout << "A maior e a menor altura do grupo: " << maior_altura << " | " << menor_altura << endl;
	cout << "A media de altura das mulheres: " << (media_altura_mulheres) << endl;
	cout << "O numero total de homens: " << total_homens << endl;

  return 0;
}

