#pragma once

#include <iostream>

class CreatingError : public std::exception {
private:
    std::string exception_text;
public:
    CreatingError (std::string exception_text);

    const char* what() const override;
};