/*
    rm all files under entered path
        Example: /Desktop/Example/* will remove all files + subdirectories inside the Example folder

    Bash script version can achieve same task in fewer lines of code
*/

#include <iostream>
#include <filesystem>

int main(){
    std::string path;

    std::cout << "This app will remove all files + sub-directories inside designated folder path.\n Enter full target path: ";
    std::cin >> path;

    std::filesystem::remove_all(path);
    std::cout << "Completed\n";
    
    return 0;
}