#include "user.h"

user::user()
{
    
}

user::user(std::string login, std::string pass, std::string pass)
{
    this->login = login;
    this->pass = pass;
    this->funcao = funcao;
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