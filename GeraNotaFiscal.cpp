#include <iostream>
#include <fstream>
using namespace std;

string pega;   

int c=1, bb =0;

// COLETA DADOS DA PLANILHA DE CALCULO (DadosPedido.txt) E OS TRANSFORMA NO PADRÃO RECONHECIDO PELO NF-E (DadosNotaFiscal.txt).

///////////////////////////////////////////////////////////////////////////////   funcao 

void funcao(){      

ofstream paulo; 
paulo.open ("DadosNotaFiscal.txt",ios_base::app);

paulo<<"\n\n H|"; paulo<< c ; paulo<<"||";
paulo<<"\n "<< pega ; 
paulo<<"\n M||";
paulo<<"\n N|";
paulo<<"\n N10d|0|102|";
paulo<<"\n Q|ç";
paulo<<"\n Q04|07|";
paulo<<"\n S|";
paulo<<"\n S04|07|";

if(bb==1){
paulo<<"\n\n W|";
paulo<<"\n W02|0.00|0.00|0.00|0.00|0.00|1.11|0.00|0.00|0.00|0.00|0.00|0.00|0.00|0.00|1.11|0.00|";
paulo<<"\n W04c|0.00|";
paulo<<"\n W04e|0.00|";
paulo<<"\n W04g|0.00|";
paulo<<"\n X|0|";
paulo<<"\n Z|I - DOCUMENTO EMITIDO POR ME OU EPP OPTANTE PELO SIMPLES NACIONAL; II - NÃO GERA DIREITO A CRÉDITO FISCAL DE ICMS, DE ISS E DE IPI.||";
}
paulo.close();
c++;
}
//********************************************************************************************
int main (){
        
ofstream paulo; 
paulo.open ("DadosNotaFiscal.txt",ios_base::out);
paulo.close(); 

//********************************************************************************************

ifstream intab; 
intab.open("DadosPedido.txt"); 
   
while(!intab.eof()){            

getline(intab, pega);

cout << pega << endl;

funcao();

}

intab.close();
//********************************************************************************************

bb=1;
funcao();
scanf("%d", &bb);

return 0;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  ^ main

}

