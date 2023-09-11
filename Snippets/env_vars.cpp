/*
    store & call environment variables
*/

#include <iostream>
#include <cstdlib>

void get_myvar(const char* env_name);

int main(){
    //save to environment & store status as result
    int result = putenv("USER=example_text");

    //print success/fail message
    if(result==0){
        std::cout << "USER environment variable set successfully.\n";
    }else{
        std::cout << "Failed to set USER environment variable.\n";
    }

    //print stored environment variable
    get_myvar("USER");

    return 0;
}

//print stored environment variable (pass in pointer to value of environment variable)
void get_myvar(const char* env_name){
    char* value = std::getenv(env_name);
    std::cout << "Value is: " << value << "\n";
}