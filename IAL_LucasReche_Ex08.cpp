#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main(){
	int n;
	cout << "Quantas pessoas serao digitadas? ";
  	cin >> n;
  	
	string sexo[n];
	string resposta[n];
	float count_geral;
	float sexo_femi_sim;
	float sexo_masc_nao;
	double resp_sim;
	double resp_nao;
	
	  for (int i = 0; i < n; i++) {
		cout << "Dados da " << i+1 << "a pessoa:" << endl;
		cout << "Informe o sexo [F] feminino ou [M] masculino: ";
		cin >> sexo[i];
		cout << "Informe a resposta [S]sim ou [N]nao: ";
		cin >> resposta[i];
}
		count_geral ++;
	resp_sim = 0;	
	  for (int i = 0; i < n; i++)	{
		if (resposta[i] == "S"){
		resp_sim = resp_sim + 1;
		}
	}
		
	  for (int i = 0; i < n; i++)	{
		if (resposta [i] == "N"){
		resp_nao = resp_nao + 1;
		}
	}
	  for (int i = 0; i < n; i++)	{
	 	if((sexo [i] == "F") && (resposta [i] == "S")){
      	sexo_femi_sim ++;
    	}
	  }
	  for (int i = 0; i < n; i++)	{
    	if((sexo [i] == "M") && (resposta [i] == "N")){
      	sexo_masc_nao ++;
    	}
      }
	
	
	cout << fixed << setprecision(2);
	cout << "Pessoas que responderam Sim: " << resp_sim << endl;
	cout << "Pessoas que responderam Nao: " << resp_nao << endl;
  	cout << std::fixed << "A porcentagem feminino que responderam sim: " << sexo_femi_sim / count_geral << endl;
 	cout << std::fixed << "A porcentagem masculino que responderam nao: " << sexo_masc_nao / count_geral << endl;

 	return 0;
}
