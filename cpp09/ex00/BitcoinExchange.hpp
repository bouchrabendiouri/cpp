

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>
#include <iomanip>
#include <sstream>

class BitcoinExchange {
    private:
        std::map<std::string, std::string> _data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &rhs);
        void read_data(const std::string& filename);
        void isValidDate(std::string& date);
        void readAndVerifyFile(const std::string& filename);
        void isValidNumber(const std::string& value) ;
        int ft_stoi(const std::string &str);
        double ft_stod(const std::string &str);
};


#endif
