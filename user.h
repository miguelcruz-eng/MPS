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
    std::string get();
    void set();
    ~user();

private:
    std::string login;
    std::string pass;
};

#endif