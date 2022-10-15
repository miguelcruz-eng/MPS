#ifndef USERLOGINEXCEPTION_H
#define USERLOGINEXCEPTION_H

#pragma once
#include <iostream>

class userLoginException
{
public:
    userLoginException();
    std::string LoginException(std::string mensagem);
    ~userLoginException();

private:

};

#endif