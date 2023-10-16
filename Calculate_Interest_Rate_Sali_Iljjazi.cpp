#include <iostream>

using namespace std;

int main() 
{
	int mutuo = 0, anni = 0, button = 0;
	float tasso = 0, ammortamento = 0, interessiAnnuali = 0, ammortamentoMensile = 0, salvaInteressi = 0, rataMensile = 0;
	
	cout<<"Insert the amount of money, that you would like to borrow: ";
	cin>>mutuo;
	cout<<"Insert Years: ";
	cin>>anni;
	cout<<"Insert the interest rate: ";
	cin>>tasso;
	
	cout<<endl;
	
	ammortamento = mutuo / anni;
	ammortamentoMensile = ammortamento / 12;
	
	
	for(int i = 0; i < anni; i++)
	{
		interessiAnnuali = (mutuo * tasso) / 100;
		mutuo = mutuo - ammortamento;
		salvaInteressi = salvaInteressi + interessiAnnuali;
	}
	
	rataMensile = ((salvaInteressi / anni) / 12) + ammortamentoMensile;
	
	cout<< "The total amount of interest you are going to pay through the years is: "<< salvaInteressi << " currency" <<endl;
	cout<< "You are going to pay monthly: " << rataMensile << " currency" <<endl;
	cout<<endl;
	
	cout<<"Press a number and then enter to exit: ";
	cin>>button;
	return 0;
}
