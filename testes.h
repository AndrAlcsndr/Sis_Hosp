// Diretivas de compila��o para controlar processo de inclus�o.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classes para teste de unidade de classe dominio.

class TUNome
{
private:
    string VALOR_VALIDO = "Andre";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "  Andre  ";   // Defini��o de constante para evitar n�mero m�gico.
    Nome *nome;                             // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO  =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUCidade {
private:
    string VALOR_VALIDO = "Bangkok";        //
    string VALOR_INVALIDO = "Ceilandia";    //
    Cidade *cidade;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUCodigo{
private:
    string VALOR_VALIDO   = "79927398713";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "79927398700"; //
    Codigo *codigo;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUData {
private:
    string VALOR_VALIDO   = "10/11";        // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "10/__";        //
    Data *data;                             // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUDescricao {
private:
    string VALOR_VALIDO = "qualquerCoisa";     // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "  qualquer;;outraCoisa;;.."; //
    Descricao *descricao;                   // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUEmail {
private:
    string VALOR_VALIDO   = "ddd_fff@gmail.com";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "...@@gmail_andre@@andre.com";
    Email *email;                           // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUIdioma {
private:
    string VALOR_VALIDO   = "Ingles";       // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "Alemao";
    Idioma *idioma;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUNota {
private:
    float VALOR_INVALIDO   = 20;   // Defini��o de constante para evitar n�mero m�gico.
    float VALOR_VALIDO = 4.7;
    Nota *nota;                             // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUPais {
private:
    string VALOR_VALIDO = "Malasia";        // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "Australia";    //
    Pais *pais;                             // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUSenha {
private:
    string VALOR_VALIDO   = "H#15a";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_INVALIDO = "123";
    Senha *senha;                           // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};


// --------------------------------------------------------------------------
// Exemplo de declara��o de classe para teste de unidade de classe entidade.

class TUUsuario {
private:
    string VALOR_NOME_VALIDO    = "Joaquim";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_EMAIL_VALIDO   = "Joaquim.Costa@gmail.com";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_SENHA_VALIDO   = "c^P32";
    string VALOR_IDIOMA_VALIDO  = "Ingles";
    string VALOR_DATA_VALIDO    = "17/07";
    string VALOR_DESC_VALIDO    = "Pessoa agradavel";

    string VALOR_EMAIL_INVALIDO  = "  CostaCosta.com gmail@";
    string VALOR_NOME_INVALIDO   = "  Andre__";
    string VALOR_SENHA_INVALIDO  = "123";
    string VALOR_IDIOMA_INVALIDO = "Doidera";
    string VALOR_DATA_INVALIDO   = "_/07";
    string VALOR_DESC_INVALIDO   = " nem..sei";

    Usuario *usuario;                       // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUHospedagem {
private:
    string VALOR_CODIGO_VALIDO   = "79927398713";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_CIDADE_VALIDO = "Nova Iorque";
    string VALOR_PAIS_VALIDO = "Japao";
    float VALOR_NOTA_VALIDO = 4.5;
    string VALOR_DESC_VALIDO = "Muito bonito";

    string VALOR_CODIGO_INVALIDO   = "79927398702";   // Defini��o de constante para evitar n�mero m�gico.
    string VALOR_CIDADE_INVALIDO = "Lago Norte";
    string VALOR_PAIS_INVALIDO = "Kwaiti";
    float VALOR_NOTA_INVALIDO = 7.2;
    string VALOR_DESC_INVALIDO = "..//!.pera la, meu patrão";

    Hospedagem *hospedagem;                 // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

class TUAvaliacao {
private:
    string VALOR_CODIGO_VALIDO   = "79927398713";   // Defini��o de constante para evitar n�mero m�gico.
    float VALOR_NOTA_VALIDO = 4.5;
    string VALOR_DESC_VALIDO = "Muito bonito";

    string VALOR_CODIGO_INVALIDO   = "79927398702";   // Defini��o de constante para evitar n�mero m�gico.
    float VALOR_NOTA_INVALIDO = 7.2;
    string VALOR_DESC_INVALIDO = "..//!.pera la, meu patrão";


    Avaliacao *avaliacao;                   // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};
#endif // TESTES_H_INCLUDED
