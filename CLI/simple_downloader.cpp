//not meant to be a curl replacement

#include <cstdlib>
#include <iostream>
#include <string>

std::string promptUser(std::string introText);
void download_file(std::string url,std::string filename);

int main(){
    //get url & filename
    std::string url = promptUser("Enter url to download from: ");
    std::string file_name = promptUser("Enter full path/name of file: ");

    //download
    download_file(url,file_name);
    return 0;
}

//prompt user
std::string promptUser(std::string introText){
    std::cout << introText;
    std::string input_temp;
    std::getline(std::cin,input_temp);

    return input_temp;
}

//download file given url & filename
void download_file(std::string url,std::string filename){
    //create command
    std::string sys_cmd = "curl -o " + filename + " " + url;
    system(sys_cmd.c_str());

    //success
    std::cout << "   File : "  << filename << "\n   Downloaded from: " << url << "\n";
}