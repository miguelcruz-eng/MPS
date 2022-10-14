#ifndef USERCONTROL_H
#define USERCONTROL_H

#pragma once

#include "user.h"

class userControl
{
public:
    userControl();
    ~userControl();

private:
    std::vector<user*> usuario;
};

#endif