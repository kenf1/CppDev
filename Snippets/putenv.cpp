/*
    create new environment variables
*/

#include "recallEnvVar.h"
#include <iostream>
#include <cstdlib>

int main(){
    //set env var
    putenv("SAMPLE=TEST");

    //get env var
    get_myvar("SAMPLE");

    return 0;
}