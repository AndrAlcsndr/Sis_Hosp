#include "dominios.h"
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <regex>
#include <algorithm>

using namespace std;
// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.

// Metódo dedicado a validar os nomes inseridos na classe

string removeCaracteresRepetidos(string strings, string carac)
{
    // Processo de remoção de caracteres repetidos em sequência
    for (char c : carac) {
        strings.erase(std::remove(strings.begin(), strings.end(), c), strings.end());
    }

    return strings;
}

bool Nome::validar(string nome)
{
    if (nome.size() <= TAMANHO_MAX && nome.size() >= TAMANHO_MIN)
    {
        string temp = removeCaracteresRepetidos(nome, " ");
        temp[0] = toupper(temp[0]);
        return true;
    }

    return true;
}

void Nome::setNome(string nome)
{
    if (validar(nome))
    {
        this->nome = nome;
        return;

    }
    else
    {
        //string msg = "Invalid_Name";
        throw invalid_argument("Invalid_Name");
    }
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.
void Cidade::setCidade(string cidade)
{
    if (validar(cidade))
    {
        this->cidade = cidade;
    }
    else
    {
        string msg = "Invalid_Cidade";
        throw (invalid_argument (msg));
    }
}

bool Cidade::validar(string cidade)
{
    vector<string> cidades_validas = { "Antalya", "Bangkok", "Delhi", "Dubai", "Hong Kong", "Londres", "Macau", "Mumbai", "Paris",
                               "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul", "Kuala Lumpur", "Nova Iorque", "Osaka", "Phuket", "Shenzhen", "Toquio" };

    if (!(find(cidades_validas.begin(), cidades_validas.end(), cidade) == cidades_validas.end()))
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0;
    bool isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--)
    {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}

bool Codigo::validar(string codigo)
{
    int tam = codigo.length();
    for (int i = 0; i < tam - 1; i++)
    {
        if (isdigit(codigo[i]) == true)
            return false;
    }

    if (checkLuhn(codigo) == false)
    {
        return false;
    }

    return true;
}

void Codigo::setCodigo(string codigo)
{
    if (validar(codigo))
    {
        this->codigo = codigo;
    }
    else
    {
        string msg = "Invalid_Codigo";
        throw(invalid_argument(msg));
    }
}

bool Data::validar(string data)
{
    string carac_delim = "/";
    vector<string> words{};
    vector<string> meses = { "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL",
                           "AGO", "SET", "OUT", "NOV", "DEZ" };

    size_t pos = 0;
    while ((pos = data.find(carac_delim)) != string::npos)
    {
        words.push_back(data.substr(0, pos));
        data.erase(0, pos + carac_delim.length());
    }
    /* for (const auto &str : words) {
        cout << str << endl;
    } */
    int tam = meses.size();
    for (int i = 0; i < tam; i++)
    {
        if (data == meses[i])
        {

            return true;
        }
    }

    return false;
}

void Data::setData(string data)
{
    if (validar(data))
    {
        this->data = data;
    }
    else
    {
        string msg = "Invalid_Data";
        throw(invalid_argument(msg));
    }
}

void Descricao::setDescricao(string descricao)
{
    if (validar(descricao))
    {
        descricao = removeCaracteresRepetidos(descricao, ".,:;?!");
        this->descricao = descricao;
    }
    else
    {
        string msg = "Invalid_Descrição";
        throw msg;
    }
}

bool Email::validar(string email) {
    // Regular expression definition
    const regex pattern(
        "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    // Match the string pattern
    // with regular expression
    return regex_match(email, pattern);
}

void Email::setEmail(string email) {
    if (validar(email)) {
        this->email = email;
    }
    else
    {
        string msg = "Invalid_Email";
        throw(invalid_argument(msg));
    }
}

bool Descricao::validar(string descricao)
{
    if (descricao.length() <= 40)
    {
        descricao = removeCaracteresRepetidos(descricao, ".,:;?!");
        //removeCaracteresRepetidos(descricao, ",");
        //removeCaracteresRepetidos(descricao, ":");
        //removeCaracteresRepetidos(descricao, ";");
        //removeCaracteresRepetidos(descricao, "?");
        //removeCaracteresRepetidos(descricao, "!");

        return true;
    }
    else
    {
        return false;
    }
}

bool Idioma::validar(string idioma)
{
    vector<string> idiomas = { "Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio" };
    if (!(find(idiomas.begin(), idiomas.end(), idioma) == idiomas.begin()))
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Idioma::setIdioma(string idioma)
{
    if (validar(idioma))
    {
        this->idioma = idioma;
    }
    else
    {
        string msg = "Invalid_idioma";
        throw(invalid_argument(msg));
    }
}

bool Nota::validar(float nota)
{
    if (nota >= 0 && nota <= 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Nota::setNota(float nota)
{
    if (validar(nota))
    {
        this->nota = nota;
    }
    else
    {
        string msg = "Invalid_Nota";
        throw(invalid_argument(msg));
    }
}

bool Pais::validar(string pais)
{
    vector<string> paises = { "Estados Unidos", "Brasil", "China", "Coreia do Sul", "Emirados", "India", "França", "India", "Japao", "Malasia", "Reino Unido", "Tailancia", "Turquia" };
    if (!(find(paises.begin(), paises.end(), pais) == paises.end()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Pais::setPais(string pais)
{
    if (validar(pais))
    {
        this->pais = pais;
    }
    else
    {
        string msg = "Invalid_pais";
        throw(invalid_argument(msg));
    }
}

bool Senha::validar(string senha)
{

    int i = 0;
    int j = 0;
    int k = 0;
    if (senha.length() == 5)
    {
        int tam = senha.length();

        for (int a = 0; a < tam; a++) {
            if (isalpha(senha[a]))
                i++;

            if (isalnum(senha[a]))
                j++;

            if (isdigit(senha[a]))
                k++;
        }

        if (!(i == 0 && j == 0 && k == 0))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else {
        return false;
    }
}

void Senha::setSenha(string senha)
{
    if (validar(senha))
    {
        this->senha = senha;
    }
    else
    {
        string msg = "Invalid_Senha";
        throw(invalid_argument(msg));
    }


}