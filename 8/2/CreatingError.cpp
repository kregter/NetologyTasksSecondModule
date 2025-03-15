#include "CreatingError.h"

CreatingError::CreatingError(std::string exception_text)
{
    this->exception_text = exception_text;
}

const char* CreatingError::what() const
{
    return exception_text.c_str();
}