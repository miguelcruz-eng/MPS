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

userControl::~userControl()
{

}