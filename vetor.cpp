/*
Digamos que quero remover o elemento de índice k do vetor v[0..n-1]. 
Para isso, basta deslocar o segmento v[k+1..n-1] do vetor para as posições k..n-2. 
Por exemplo, o resultado da remoção do elemento de 
índice 3 do vetor = {0,11,22,33,44,55} é o vetor = {0,11,22,44,55}.  
É claro que o problema faz sentido se e somente se 0 < k < n.
Implemente o algoritmo para remoção de um elemento do vetor.*/


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{  
	int opcao, k = 6, i, vetor[6] = {0,11,22,33,44,55};
	
	
	do{	
		cout << "++++++++++++++++++++\n" 
		     << "       MENU         \n"
		     << "++++++++++++++++++++\n" 
		     << " [01] - Lista Vetor \n"		
		     << " [02] - Apaga Elemento \n"
		     << " [03] - Sair        \n"
			 << "++++++++++++++++++++\n"; 		
		
		cout << "-> DIGITE OPCAO: ";
		cin >> opcao;
		
    	system("CLS");
		
		switch(opcao){
			
			case 1: {	
						cout << "\n-> VETOR PROVA: ";	
						for(int i=0; i<k; i++)
							{
								cout << "[" << vetor[i] << "]" ;
							}
						cout << "\n\n";
						break;
			}

			case 2: {	
						// Saida de dados
						cout << "\n-> VETOR PROVA: ";	
						for(int i=0; i<k; i++)
							{
								cout << "[" << vetor[i] << "]" ;
							}
						
						cout << "\n";
									
						// Entrada de dados
						cout << "\n-> INFORME O INDICE DO ELEMENTO: ";
						cin >> i;
						
						// Saida de dados
						cout << "-> INDICE: " << i << " ELEMENTO:["<< vetor[i] << "] APAGADO C/SUCESSO!!! \n";
						
						for(int p=i; p<k; p++)
						   {
						     vetor[p] = vetor[p+1]; 
						   }
						
						k--;	
						
						// Saida de dados
						cout << "\n-> VETOR PROVA: ";	
						for(int i=0; i<k; i++)
							{
								cout << "[" << vetor[i] << "]" ;
							}
						cout << "\n\n";
												
					break;
			}

			
		}
		
		
		
		
		
		
	  }while(opcao!=3);
	



/*

int casa = 0, gato = 1, cao = 0, passaro = 1, rato = 0;
float sitio = 0, ferias = 30.5, praia = 15; 
double estante[5] = {0,1,2};
	
	estante[0] += casa--;
	estante[1] *= (++gato + estante[2]) + (cao--);
	estante[2] -= (passaro++) * (++rato);
	estante[3] = (--ferias) * (praia);
	estante[4] += (casa*gato*cao*passaro*rato);

cout << estante[0] << estante[1] << estante[2] 
         << estante[3] << estante[4] << "\n";
cout << casa << gato << cao << passaro << rato;
*/
}
