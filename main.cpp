#include <iostream>
#include <cmath>
#include <cstring>
#include"Logarithmic.h"

using namespace std;


int main(){
	Logarithmic funzione1;
	funzione1.impostacoef(2.0, 1.0);
	funzione1.Dump();
	cout<<"nella funzione appena dumpata, il valore del log con x = 4 e': "<<funzione1.GetValue()<<endl<<flush;
	
	funzione1.impostab(-3.0);
	
	return 0;
}