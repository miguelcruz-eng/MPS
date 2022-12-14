#ifndef USER_H
#define USER_H

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "gerenciaFuncionario.h"
#include "userLoginException.h"

class user
{
public:
    user();
    user(std::string login, std::string pass, std::string funcao);
    void criafuncionario(std::string funcao)
    std::string getLogin();
    std::string getPass();
    void setLogin(std::string login);
    void setPass(std::string pass);
    ~user();

private:
    std::string login;
    std::string pass;
    gerenciaFuncionario funcionario;
};

#endif