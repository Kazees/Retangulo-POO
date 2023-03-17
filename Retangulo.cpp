#include "Retangulo.h"

void Retangulo::setComprimento(float comprimento)
{
    if(comprimento<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero");
    }

    this->comprimento=comprimento;
}

void Retangulo::setLargura(float largura)
{
    if(largura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero");
    }

    this->largura=largura;
}

Retangulo::Retangulo(float comprimento,float largura)
{
    setComprimento(comprimento);
    setLargura(largura);
}