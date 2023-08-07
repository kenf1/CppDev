#include <fstream>
#include <string>

//open .txt file (default is test.txt)
std::ifstream openTxt(const std::string& filename="test.txt"){
    std::ifstream input(filename);
    return input;
}