#include "testes.h"


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Nome de teste de unidade.

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setNome("Andre");
        if (nome->getNome() == VALOR_VALIDO) {
            estado = SUCESSO;
        }

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setNome("4ndr3");
        if (nome->getNome() == VALOR_INVALIDO) {
            estado = SUCESSO;
        }

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUNome::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de Cidade de teste de unidade.

void TUCidade::setUp() {
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown() {
    delete cidade;
}

void TUCidade::testarCenarioSucesso() {
    try {
        cidade->setCidade("Bangkok");
        if (cidade->getCidade() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha() {
    try {
        cidade->setCidade(VALOR_INVALIDO);
        if (cidade->getCidade() == VALOR_INVALIDO) {
            estado = SUCESSO;
        }
    }
    catch (invalid_argument& excecao) {
        if (cidade->getCidade() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de Codigo de teste de unidade.

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    delete codigo;
}

void TUCodigo::testarCenarioSucesso() {
    try {
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha() {
    try {
        codigo->setCodigo(VALOR_INVALIDO);
        if (codigo->getCodigo() == VALOR_INVALIDO)
        {
            estado = SUCESSO;
        }
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUCodigo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Data de teste de unidade.

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    try {
        data->setData(VALOR_VALIDO);
        if (data->getData() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha() {
    try {
        data->setData(VALOR_INVALIDO);
        if (data->getData() == VALOR_INVALIDO) {
            estado = SUCESSO;
        }
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUData::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Descricao de teste de unidade.

void TUDescricao::setUp() {
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown() {
    delete descricao;
}

void TUDescricao::testarCenarioSucesso() {
    try {
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha() {
    try {
        descricao->setDescricao(VALOR_INVALIDO);
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUDescricao::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUEmail::setUp() {
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown() {
    delete email;
}

void TUEmail::testarCenarioSucesso() {
    try {
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha() {
    try {
        email->setEmail(VALOR_INVALIDO);
        if (email->getEmail() == VALOR_INVALIDO)
            estado = SUCESSO;

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUEmail::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUIdioma::setUp() {
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown() {
    delete idioma;
}

void TUIdioma::testarCenarioSucesso() {
    try {
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha() {
    try {
        idioma->setIdioma(VALOR_INVALIDO);
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUIdioma::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUNota::setUp() {
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown() {
    delete nota;
}

void TUNota::testarCenarioSucesso() {
    try {
        nota->setNota(VALOR_VALIDO);
        if (nota->getNota() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha() {
    try {
        nota->setNota(VALOR_INVALIDO);
        if (nota->getNota() == VALOR_INVALIDO)
            estado = SUCESSO;

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUNota::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUPais::setUp() {
    pais = new Pais();
    estado = SUCESSO;
}

void TUPais::tearDown() {
    delete pais;
}

void TUPais::testarCenarioSucesso() {
    try {
        pais->setPais(VALOR_VALIDO);
        if (pais->getPais() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUPais::testarCenarioFalha() {
    try {
        pais->setPais(VALOR_INVALIDO);
        if (pais->getPais() == VALOR_INVALIDO)
            estado = SUCESSO;

    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUPais::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() == VALOR_VALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setSenha(VALOR_INVALIDO);
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = SUCESSO;
    }
    catch (invalid_argument& excecao) {
        estado = FALHA;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

/* void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    try{
        usuario->setEmail(VALOR_EMAIL_VALIDO);
        usuario->setNome(VALOR_NOME_VALIDO);
        usuario->setSenha(VALOR_SENHA_VALIDO);
        usuario->setIdioma(VALOR_IDIOMA_VALIDO);
        usuario->setData(VALOR_DATA_VALIDO);
        usuario->setDescricao(VALOR_DESC_VALIDO);

        if (!(usuario->getEmail() == VALOR_EMAIL_VALIDO) ||
            !(usuario->getNome() == VALOR_NOME_VALIDO) ||
            !(usuario->getSenha() == VALOR_SENHA_VALIDO) ||
            !(usuario->getIdioma() == VALOR_IDIOMA_VALIDO) ||
            !(usuario->getData() == VALOR_DATA_VALIDO) ||
            !(usuario->getDescricao() == VALOR_DESC_VALIDO))
        {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUUsuario::testarCenarioFalha(){
    try{
        usuario->setEmail(VALOR_EMAIL_INVALIDO);
        usuario->setNome(VALOR_NOME_INVALIDO);
        usuario->setSenha(VALOR_SENHA_INVALIDO);
        usuario->setIdioma(VALOR_IDIOMA_INVALIDO);
        usuario->setData(VALOR_DATA_INVALIDO);
        usuario->setDescricao(VALOR_DESC_INVALIDO);

        if ((usuario->getEmail() == VALOR_EMAIL_INVALIDO) ||
            (usuario->getNome() == VALOR_NOME_INVALIDO  ) ||
            (usuario->getSenha() == VALOR_SENHA_INVALIDO) ||
            (usuario->getIdioma() == VALOR_IDIOMA_INVALIDO) ||
            (usuario->getData() == VALOR_DATA_INVALIDO) ||
            (usuario->getDescricao() == VALOR_DESC_INVALIDO))
        {
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){

    }
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenarioSucesso(){
    try{
        hospedagem->setCodigo(VALOR_CODIGO_VALIDO);
        hospedagem->setCidade(VALOR_CIDADE_VALIDO);
        hospedagem->setPais(VALOR_PAIS_VALIDO);
        hospedagem->setNota(VALOR_NOTA_VALIDO);
        hospedagem->setDescricao(VALOR_DESC_VALIDO);

        if (!(hospedagem->getCodigo() == VALOR_CODIGO_VALIDO) ||
            !(hospedagem->getCidade() == VALOR_CIDADE_VALIDO  ) ||
            !(hospedagem->getPais() == VALOR_PAIS_VALIDO) ||
            !(hospedagem->getNota() == VALOR_NOTA_VALIDO) ||
            !(hospedagem->getDescricao() == VALOR_DESC_VALIDO))
        {
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioFalha(){
    try{
        hospedagem->setCodigo(VALOR_CODIGO_INVALIDO);
        hospedagem->setCidade(VALOR_CIDADE_INVALIDO);
        hospedagem->setPais(VALOR_PAIS_INVALIDO);
        hospedagem->setNota(VALOR_NOTA_INVALIDO);
        hospedagem->setDescricao(VALOR_DESC_INVALIDO);

        if ((hospedagem->getCodigo() == VALOR_CODIGO_INVALIDO) ||
            (hospedagem->getCidade() == VALOR_CIDADE_INVALIDO  ) ||
            (hospedagem->getPais() == VALOR_PAIS_INVALIDO) ||
            (hospedagem->getNota() == VALOR_NOTA_INVALIDO) ||
            (hospedagem->getDescricao() == VALOR_DESC_INVALIDO))
        {
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

int TUHospedagem::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de Email de teste de unidade.

void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){
    try{
        avaliacao->setCodigo(VALOR_CODIGO_VALIDO);
        avaliacao->setDescricao(VALOR_DESC_VALIDO);
        avaliacao->setNota(VALOR_NOTA_VALIDO);

        if (!(avaliacao->getCodigo() == VALOR_CODIGO_VALIDO) ||
            !(avaliacao->getDescricao() == VALOR_CODIGO_VALIDO) ||
            !(avaliacao->getNota() == VALOR_CODIGO_VALIDO))
        {
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioFalha(){
    try{
        avaliacao->setCodigo(VALOR_CODIGO_INVALIDO);
        avaliacao->setDescricao(VALOR_DESC_INVALIDO);
        avaliacao->setNota(VALOR_NOTA_INVALIDO);

        if ((avaliacao->getCodigo() == VALOR_CODIGO_INVALIDO) ||
            (avaliacao->getDescricao() == VALOR_CODIGO_INVALIDO) ||
            (avaliacao->getNota() == VALOR_CODIGO_INVALIDO))
        {
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
            estado = FALHA;
    }
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
} */
