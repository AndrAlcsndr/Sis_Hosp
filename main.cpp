// Exemplos de classes domínio, classe entidade e testes de unidade.

// Incluir cabeçalhos.

#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    //---------------------------------------------------------------------------
    // Estrutura de código para instanciar e executar teste de unidade.

    /* --------------------------------------------------------------------------

        // Instanciar classe de teste de unidade.

        TUnidade teste;

        // Invocar método e apresentar mensagem acerca do resultado.

        switch(teste.run()){
            case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                    break;
            case TUnidade::FALHA  : cout << "FALHA" << endl;
                                    break;
        }

    -------------------------------------------------------------------------- */

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe domínio.

    // Instanciar classe de teste de domínio.

    TUNome testeNome;

    switch (testeNome.run()) {
    case TUNome::SUCESSO: cout << "Teste Unitario: NOME => SUCESSO - CODIGO" << endl;
        break;
    case TUNome::FALHA: cout << "Teste Unitario: NOME => FALHA   - CODIGO" << endl;
        break;
    }


    TUCidade testeCidade;

    switch (testeCidade.run()) {
    case TUCidade::SUCESSO: cout << "Teste Unitario: CIDADE => SUCESSO - CODIGO" << endl;
        break;
    case TUCidade::FALHA: cout << "Teste Unitario: CIDADE => FALHA   - CODIGO" << endl;
        break;
    }

    TUCodigo testeCodigo;

    switch (testeCodigo.run()) {
    case TUCodigo::SUCESSO: cout << "Teste Unitario: CODIGO => SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA: cout << "Teste Unitario: CODIGO => FALHA   - CODIGO" << endl;
        break;
    }

    TUData testeData;

    switch (testeData.run()) {
    case TUData::SUCESSO: cout << "Teste Unitario: DATA => SUCESSO - CODIGO" << endl;
        break;
    case TUData::FALHA: cout << "Teste Unitario: DATA => FALHA   - CODIGO" << endl;
        break;
    }


    TUDescricao testeDescricao;

    switch (testeDescricao.run()) {
    case TUDescricao::SUCESSO: cout << "Teste Unitario: DESCRICAO => SUCESSO - CODIGO" << endl;
        break;
    case TUDescricao::FALHA: cout << "Teste Unitario: DESCRICAO => FALHA   - CODIGO" << endl;
        break;
    }


    TUEmail testeEmail;

    switch (testeEmail.run()) {
    case TUEmail::SUCESSO: cout << "Teste Unitario: EMAIL => SUCESSO - CODIGO" << endl;
        break;
    case TUEmail::FALHA: cout << "Teste Unitario: EMAIL => FALHA   - CODIGO" << endl;
        break;
    }


    TUIdioma testeIdioma;

    switch (testeIdioma.run()) {
    case TUIdioma::SUCESSO: cout << "Teste Unitario: IDIOMA => SUCESSO - CODIGO" << endl;
        break;
    case TUIdioma::FALHA: cout << "Teste Unitario: IDIOMA => FALHA   - CODIGO" << endl;
        break;
    }


    TUNota testeNota;

    switch (testeNota.run()) {
    case TUNota::SUCESSO: cout << "Teste Unitario: NOTA => SUCESSO - CODIGO" << endl;
        break;
    case TUNota::FALHA: cout << "Teste Unitario: NOTA => FALHA   - CODIGO" << endl;
        break;
    }


    TUPais testePais;

    switch (testePais.run()) {
    case TUPais::SUCESSO: cout << "Teste Unitario: PAIS => SUCESSO - CODIGO" << endl;
        break;
    case TUPais::FALHA: cout << "Teste Unitario: PAIS => FALHA   - CODIGO" << endl;
        break;
    }


    TUSenha testeSenha;

    switch (testeSenha.run()) {
    case TUSenha::SUCESSO: cout << "Teste Unitario: SENHA => SUCESSO - CODIGO" << endl;
        break;
    case TUSenha::FALHA: cout << "Teste Unitario: SENHA => FALHA   - CODIGO" << endl;
        break;
    }


    return 0;
}
