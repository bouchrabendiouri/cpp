

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " input_file.txt" << std::endl;
        return 1;
    }

    std::string inputFilename = argv[1];
    BitcoinExchange exchange;
    exchange.read_data("data.csv");
    exchange.readAndVerifyFile(inputFilename);

    return 0;
}