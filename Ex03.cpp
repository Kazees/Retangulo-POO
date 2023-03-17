#include <iostream>
#include <iomanip>
#include "Retangulo.h"
#include "Retangulo.cpp"

using namespace std;

int main()
{
    float comprimento,largura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite o comprimento: ";
        cin>>comprimento;

        cout<<"Digite a largura: ";
        cin>>largura;

        try
        {
            Retangulo n1(comprimento,largura);
            cout<<fixed<<setprecision(2);
            cout<<"Valor da Area: "<<n1.calcularArea()<<endl;
            cout<<"Valor do Perimetro: "<<n1.calcularPerimetro()<<endl;
            conti=false;
        }

        catch(invalid_argument &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }
    }

    return 0;
}