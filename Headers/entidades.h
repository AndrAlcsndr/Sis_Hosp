//Trabalho de TP 1 - André Fioravante Nicolodi Durante Junior 16/0112010 & André Alecsander Araújo Lopes 18/0116142 

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <bits/stdc++.h>

#include "dominios.h"

using namespace std;

class Usuario {
private:

Nome nome;
Email email;
Senha senha;
Idioma idioma;
Data data; 
Descricao descricao;

public:
void setNome(const Nome&);
void setEmail(const Email&);
void setSenha(const Senha&);
void setIdioma(const Idioma&);
void setData(const Data&);
void setDescricao(const Descricao&);

Nome getNome() const;
Email getEmail() const;
Senha getSenha() const;
Idioma getIdioma() const;
Data getData() const;
Descricao getDescricao() const;

};

// -----------------------------------------------------
// Implementacao Metodos inline set da entidade Usuario.
// -----------------------------------------------------

inline void Usuario::setNome(const Nome& nome){
this->nome = nome;
}
inline void Usuario::setEmail(const Email& email){
this->email = email;
}
inline void Usuario::setSenha(const Senha& senha){
this->senha = senha;
}
inline void Usuario::setIdioma(const Idioma& idioma){
this->idioma = idioma;
}
inline void Usuario::setData(const Data& data){
this->data = data;
}
inline void Usuario::setDescricao(const Descricao& descricao){
this->descricao = descricao;
}
// -----------------------------------------------------
// Implementacao Metodos inline get da entidade Usuario.
// -----------------------------------------------------

inline Nome Usuario::getNome() const {
return nome;
}

inline Email Usuario::getEmail() const {
return email;
}

inline Senha Usuario::getSenha() const {
return senha;
}

inline Idioma Usuario::getIdioma() const {
return idioma;
}

inline Data Usuario::getData() const {
return data;
}

inline Descricao Usuario::getDescricao() const {
return descricao;
}


class Hospedagem{
private:

public:

}


class Avaliacao {
private:

Codigo codigo;
Nota nota;
Descricao descricao;
public:
void setCodigo(const Codigo&);
void setNota(const Nota&);
void setDescricao(const Descricao&);

Codigo getCodigo() const;
Nota getNota() const;
Descricao getDescricao() const;
};

inline void Avaliacao::setCodigo(const Codigo& codigo){
this->codigo = codigo;
}
inline void Avaliacao::setDescricao(const Descricao& descricao){
this->descricao = descricao;
}
inline void Avaliacao::setNota(const Nota& nota){
this->nota = nota;
}
// -------------------------------------------------------
// Implementacao Metodos inline get da entidade Avaliacao.
// -------------------------------------------------------

inline Codigo Avaliacao::getCodigo() const {
return codigo;
}
inline Nota Avaliacao::getNota() const {
return nota;
}
inline Descricao Avaliacao::getDescricao() const {
return descricao;
}
