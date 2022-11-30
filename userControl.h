#ifndef USERCONTROL_H
#define USERCONTROL_H

#pragma once

#include "user.h"
#include "userPersistence.h"
#include "userLoginException.h"
#include "userPassException.h"

class userControl
{
public:
    userControl();
    void carregarDados();
    void salvaUsuario(std::string dados1, std::string dados2);
    void checaDado(std::string dados1, std::string dados2);
    void checaCadastroSenha(std::string dados1, std::string dados2);
    void checaCadastroUsuario(std::string dados);
    ~userControl();

private:
    std::vector<user*> usuario;
};

#endif