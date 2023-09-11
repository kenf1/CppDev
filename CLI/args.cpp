/*
    pass arguments from shell into cli app
*/

#include <iostream>

//arg 0 = name of app
int main(int argc,char *argv[]){
    std::cout << "Number of command line arguments: " << argc << "\n";
    
    for(int i=0;i<argc;++i){
        std::cout << "Argument " << i << ": " << argv[i] << "\n";
    }

    std::cout << "Complete\n";

    return 0;
}