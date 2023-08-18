#include <iostream>
#include <string>

/*
    add headers
        default is csv ","
*/
std::string headers(std::string ext){
    if(ext=="tsv"){
        return "Index\t Name\t Rating\t Price\t Nice\n";
    }else{
        return "Index,Name,Rating,Price,Nice\n";
    }
}