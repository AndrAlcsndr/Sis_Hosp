#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo sugerida para declara��o de classe entidade.
// Substituir Entidade por nome da classe.
// Substituir Dominio.
// Substituir nomeAtributo.

class Entidade {
    private:
            Dominio nomeAtributo;                   // Declarar cada atributo da classe.
    public:
            void setnomeAtributo(const Dominio&);   // Declarar m�todo set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar m�todo get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
//Declaração de classe USUARIO e implementações de métodos

class Usuario
{
    private:
        Nomes nome;
        Email endereco;                            //Primary Key
        Password senha;
        Idioma idioma;
        Aniversario aniversario;
        Descricao descricao;

    public:
        Codigo listarHospedagens();                 //Listar hospedagens do Usuário
        Codigo getHospedagens(Codigo codigo) ;      //Realizar consulta de uma hospedagem específica do Usuário   
        Prioridade getPrioridade() const;           // ?
};

inline Codigo Usuario::listarHospedagens()
{
    return Codigo listaDeHospedagens;               //Retorna uma lista de hospedagens

}

inline Codigo Usuario::getHospedagens(Codigo codigo)
{
    return hospedagem;                              //Retorna uma hospedagem específica com base no código enviado

}

// -----------------------------------------------------------------------

// -----------------------------------------------------------------------
//Declaração de classe HOSPEDAGEM e implementações de métodos

class Hospedagem
{
    private:
        Codigo codigo;                              //Primary Key
        string cidade;
        string pais;
        float nota;
    
    public:
        Codigo setHospedagem ();                    //Realiza a criação de uma hospedagem, que retorna um código de criação
        Codigo getHospedagem (Codigo codigo);       //Realiza a consulta de uma hospedagem específica, retornando um nome e um código
        float getNotaHospedagem (Codigo codigo);    //Realiza a consulta de uma hospedagem específica passando o código do hotel
        string getAnfitrioes();                     //Realiza consulta de Usuários hospedados no hotel
        float getHospedes();                        //Realiza uma consulta de todos os usuários hospedados naquele hotel, retornando uma lista
};

inline Codigo Hospedagem::setHospedagem()
{
    Codigo hospedagem;
    return hospedagem;                              //Cria uma hospedagem específica com base no código enviado

}

inline Codigo Hospedagem::getHospedagem(Codigo codigo)
{
    Codigo hospedagem;
    return hospedagem;                              //Cria uma hospedagem específica com base no código enviado

}

inline string Hospedagem::getAnfitrioes()
{
    using std:: string;
    string anfitrioes[] = { "anfitriao1", "anfitriao2",
                                "anfitriao3",  "anfitriao4"};
    return anfitrioes;                              //Cria uma hospedagem específica com base no código enviado

}

inline string Hospedagem::getAnfitrioes()
{
    using std:: string;
    string anfitrioes[] = { "anfitriao1", "anfitriao2",
                                "anfitriao3",  "anfitriao4"};
    return anfitrioes;                              //Cria uma hospedagem específica com base no código enviado

}
// -----------------------------------------------------------------------

// -----------------------------------------------------------------------
//Declaração de classe AVALIAÇÃO e implementações de métodos

class Avaliacao
{
private:
   Codigo codigo;                                   //Primary Key
   Nota nota;
   Descricao descricao;

public:
    float getAvaliacoes ();

};




inline void Projeto::setPrioridade(const Prioridade &prioridade)
{
    this->prioridade = prioridade;
}

inline Prioridade Projeto::getPrioridade() const
{
    return prioridade;
}

#endif // ENTIDADES_H_INCLUDED
