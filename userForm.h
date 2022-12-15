#ifndef USERFORM_H
#define USERFORM_H

#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <windows.h>
#include "userControl.h"

class userForm
{
public:
    userForm();
    void Menu();
    void MenuPrincipal();
    void MenuCadastro();
    void MenuLogin();
    ~userForm();

private:

};

#endif