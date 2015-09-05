#include <iostream>
#include "locale.h"
#include "conio.h"

using namespace std;

void criarTriangulo(int op)
{
	int nums[op][op];
	for(int i = 0;i < op;i++)
	{
		nums[i][0] = 1; //Todo primeiro número é sempre 1. 
		cout << "n = " << i << ": " <<nums[i][0] << " ";
		
		if(i > 1) //Só a partir da terceira linha (i = 2) existem números entre o primeiro e ultimo número.
		{
			for(int j = 1;j < i;j++) //For que começa da segunda posição e vai até a penúltima.
			{
			  //O número atual é a soma de dois números da coluna anterior
				nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
				cout << nums[i][j] << " ";
					
			}
		}
		
		if(i > 0) //A partir da segunda linha (i = 1) o último número é sempre 1.
		{
			nums[i][i] = 1;
			cout << nums[i][i];
		}
		cout <<endl;
	}	
	
}

int main()
{
	setlocale(LC_ALL,"");
	char resposta;
	while(tolower(resposta)!= 'n')
	{
		system("cls");
		int op;
		cout << "Digite o número de linhas: ";
		cin >> op;
		criarTriangulo(op);
		cout << "\nDeseja criar outro triângulo?: [S/N]" <<endl;
		resposta = getch();
	}
	return 0;
}
