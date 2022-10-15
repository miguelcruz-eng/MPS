#ifndef USERPERSISTENCE_H
#define USERPERSISTENCE_H

#pragma once
#include <fstream>
#include "userControl.h"

class userPersistence
{
public:
    userPersistence();
    std::vector<user*> carregarUsuario();
    void salvarUsuario(std::string dados1, std::string dados2);
    ~userPersistence();

private:

};

#endif