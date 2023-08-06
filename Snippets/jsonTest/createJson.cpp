/*
    create json file using https://github.com/nlohmann/json
*/

#include <iostream>
#include <fstream>
#include "../../libs/json-develop/single_include/nlohmann/json.hpp"

int main(){
    nlohmann::json root;

    //json contents
    root["item1"] = "placeholder";
    root["item2"] = 68;
    root["item3"] = false;

    //create data folder if doesn't exist
    std::filesystem::path folderPath("./data");
    if(!std::filesystem::exists(folderPath)){
        std::filesystem::create_directory(folderPath);
    }

    //create json file
    std::ofstream file("./data/example.json");
    file << root;
    file.close();

    std::cout << "JSON file created successfully.\n";
    return 0;
}