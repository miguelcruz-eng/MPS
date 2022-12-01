#include "userControl.h"

userControl::userControl()
{

}

void userControl::carregarDados()
{
    userPersistence per;
    usuario = per.carregarUsuario();
}

void userControl::salvaUsuario(std::string dados1, std::string dados2)
{
    userPersistence per;
    auto vet = new user(dados1, dados2);
    usuario.push_back(vet);
    per.salvarUsuario(dados1,dados2);
}

void userControl::checaDado(std::string dados1, std::string dados2)
{
    userLoginException log;
    userPassException pass;
    for(int i = 0; i < usuario.size(); i++)
    {
        if(dados1 == usuario[i]->getLogin() )
        {
            if(dados2 == usuario[i]->getPass())
            {
                return;
            }else
            {
                throw pass.PassException("Senha Invalida!");
            }
        }
    }
    throw log.LoginException("Usuario Invalido!");
}

void userControl::checaCadastroSenha(std::string dados1, std::string dados2)
{
    userPassException pass;
    int contador = 0;
    if(dados1 == dados2)
    {
    for (size_t i = 0; i < dados1.size(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((int(dados2[i]) - '0') == j)
            {
                contador ++;
            }
        }
    }
    }else{
        throw pass.PassException("Senha invalida, dados nao batem!");
    }
    if(contador < 2 || contador >= dados2.size()){
        std::cout<< contador <<std::endl;
        throw pass.PassException("Senha invalida, a senha deve conter letras e numeros, pelo menos dois numeros!");
    }
}

void userControl::checaCadastroUsuario(std::string dados)
{
    userLoginException log;
    for (size_t i = 0; i < dados.size(); i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            if ((int(dados[i]) - '0') == j)
            {
                throw log.LoginException("Caracteres para usuario invalidos!");
            }
        }
        
    }
    for(int i = 0; i < usuario.size(); i++) {
        if(dados == usuario[i]->getLogin() )
        {
            throw log.LoginException("Usuario ja existe!");
        }
    }
    return;
}

userControl::~userControl()
{

}