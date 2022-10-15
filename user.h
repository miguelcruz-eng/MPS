#ifndef USER_H
#define USER_H

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class user
{
public:
    user();
    user(std::string login, std::string pass);
    std::string getLogin();
    std::string getPass();
    void setLogin(std::string login);
    void setPass(std::string pass);
    ~user();

private:
    std::string login;
    std::string pass;
};

#endif