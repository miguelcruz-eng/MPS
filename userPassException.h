#ifndef USERPASSEXCEPTION_H
#define USERPASSEXCEPTION_H

#pragma once
#include <iostream>

class userPassException
{
public:
    userPassException();
    std::string PassException(std::string mensagem);
    ~userPassException();

private:

};

#endif