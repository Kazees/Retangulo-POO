#ifndef RETANGULO_H
#define RETANGULO_H
#include <stdexcept>

using std::invalid_argument;

class Retangulo
{
    private:
        float comprimento;
        float largura;
    public:
        Retangulo(float comprimento,float largura);

        void setComprimento(float comprimento);
        void setLargura(float largura);

        float getComprimento()const {return comprimento;}
        float getLargura()const {return largura;}

        float calcularArea()const {return largura*comprimento;}
        float calcularPerimetro()const {return largura+largura+comprimento+comprimento;}
};

#endif