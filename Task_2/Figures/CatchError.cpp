#include "CatchError.hpp"

CatchError::CatchError(std::string str) {
    this->msg = str;
}

std::string CatchError::what() const {
    return this->msg;
}