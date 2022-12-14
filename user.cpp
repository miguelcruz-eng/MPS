#include "user.h"

user::user()
{
    
}

user::user(std::string login, std::string pass, std::string funcao)
{
    this->login = login;
    this->pass = pass;
    criafuncionario(funcao);
}

void user::criafuncionario(std::string funcao) {
    userLoginException log;
    switch (1)
    {
    case 1:
        func = new gerente;
        break;
    default:
        throw log.LoginException("Funcao nao existe!");
        break;
    }
}

std::string user::getLogin()
{
    return login;
}

std::string user::getPass()
{
    return pass;
}

void user::setLogin(std::string login)
{
    this->login = login;
}

void user::setPass(std::string pass)
{
    this->pass = pass;
}

user::~user()
{

}