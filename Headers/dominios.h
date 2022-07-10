//Trabalho de TP 1 - André Fioravante Nicolodi Durante Junior 16/0112010 & André Alecsander Araújo Lopes 18/0116142 

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>
#include <string>

#define ll long long;

using namespace std;

class Nome {
private:
// @param string nome
string nome;
const static unsigned int TAMANHO_MIN = 1; //constante
const static unsigned int TAMANHO_MAX = 30; //constante
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);
public:
Nome(); // default

Nome(string);

void setNome(string);

string getNome() const {
return nome;
	}
};

class Cidade {
private:
// @param string cidade
string cidade;
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Cidade(); // default
Cidade(string);
void setCidade(string);
string getCidade() const {
return cidade;
	}
};

class Codigo {
private:
// @param string codigo
string codigo;
const static unsigned int TAMANHO_MIN = 11; //constante
const static unsigned int TAMANHO_MAX = 11; //constante
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Codigo(); // default
Codigo(string);
void setCodigo(string);
string getCodigo() const {
return codigo;
	}
};

class Data {
private:
// @param string data
string data;
const static unsigned int TAMANHO_MAX = 10; //constante

// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Data(); // default

Data(string);

void setData(string);

string getData() const {
return data;
	}
};


class Descricao {
private:
// @param string descricao
string descricao;
const static int TAMANHO_MIN = 0;
const static int TAMANHO_MAX = 40;
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Descricao(); // default
Descricao(string);
void setDescricao(string);
string getDescricao() const {
return descricao;
	}
};

class Email {
private:
// @param string email
string email;
const static int TAMANHO_MAX_LOCAL = 64; // constante
const static int TAMANHO_MAX_DOMINIO = 63; // constante

// Funcao validar que valida uma string que sera usada como email
// @param string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Email(); // default

Email(string);

void setEmail(string);

string getEmail() const {
return email;
	}
};

class Idioma {
private:
// @param string idioma
string idioma;
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Idioma(); // default
Idioma(string);
void setIdioma(string);
string getIdioma() const {
return idioma;
	}
};

class Nota {
private:
// @param int nota
int nota;

// Funcao validar que valida um inteiro
// @throw invalid_argument
// @return void
void validar(int) throw (invalid_argument);

public:
Nota(); // default

Nota(int);

void setNota(int);

int getNota() const {
return nota;
	}
};

class Pais {
private:
// @param string pais
string pais;
// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Pais(); // default
Pais(string);
void setPais(string);
string getPais() const {
return pais;
	}
};

class Senha {
private:
// @param string senha
string senha;
const static unsigned int LIMITE = 5; //constante

// Funcao validar que valida uma string
// @throw invalid_argument
// @return void
void validar(string) throw (invalid_argument);

public:
Senha(); // default

Senha(string);

void setSenha(string);

string getSenha() const {
return senha;
	}
};
