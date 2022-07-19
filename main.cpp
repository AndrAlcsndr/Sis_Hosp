// Exemplos de classes dom�nio, classe entidade e testes de unidade.

// Incluir cabe�alhos.

#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de c�digo para instanciar e executar teste de unidade.

/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar m�todo e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

    //-----------------------------------------------------------------------
    // Exemplo d eteste de classe dom�nio.

    // Instanciar classe de teste de dom�nio.

    TUNome testeNome;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


    return 0;
}
