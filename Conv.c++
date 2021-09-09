#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 
 
int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int F, C, RESULTADO;
    
    cout<<"Quantos graus está fazendo ai? \n" ;
    cin >>C;
    
    F = (9 * C + 160) / 5;
    
    RESULTADO = F;
    
    cout <<"A conversão é: "<< RESULTADO; 
    cout <<"\n"; 
    
    system("pause");
}
