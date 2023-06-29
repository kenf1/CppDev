#include <iostream>

int main(){
    //type conversion (implicit & explicit)

    //implicit cast
    double x = (int)3.51;
    std::cout << x << "\n";

    int correct = 8;
    int qs = 10;

    //use explicit cast to prevent truncation of int division
    double score = correct/(double)qs*100;
    std::cout << score << "% \n";

    return 0;
}