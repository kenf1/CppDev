#include <fstream>
#include <string>

std::ifstream openTxt(const std::string& filename) {
    std::ifstream input(filename);
    return input;
}