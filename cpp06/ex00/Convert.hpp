

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <cctype>
#include <cmath>

class ScalarConverter {
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const& x);
        ScalarConverter& operator=(ScalarConverter const& x);
        ~ScalarConverter();
        static bool isValidNumber(const std::string& str);
        static void convert(const std::string& literal);
};

# endif