#pragma once
#include <iostream>

class CatchError {
public:
    CatchError(std::string str);
    std::string what() const;
private:
    std::string msg;
};