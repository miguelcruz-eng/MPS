#ifndef USERFORM_H
#define USERFORM_H

#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include "userControl.h"

class userForm
{
public:
    userForm();
    void Menu();
    void MenuPrincipal();
    void MenuCadastro();
    void Menu2(std::string nome);
    ~userForm();

private:

};

#endif