/*
    Given a person's allergy score, determine whether or not they're allergic to a given item, and their full list of allergies
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> get_allergies(int score);

int main(){
    int score = 34;
    std::vector<std::string> allergies = get_allergies(score);

    if(allergies.empty()){
        std::cout << "Not allergic to any of the allergens listed above.\n";
    }else{
        std::cout << "Allergic to the following:" << "\n";
        for(auto allergy : allergies){
            std::cout << "- " << allergy << "\n";
        }
    }

    return 0;
}

std::vector<std::string> get_allergies(int score){
    std::vector<std::string> allergies; //store user's allergies
    
    const std::vector<std::string> allergens = {"eggs","peanuts","shellfish",
        "strawberries","tomatoes","chocolate","pollen","cats"};
    const std::vector<int> allergen_values = {1,2,4,8,16,32,64,128}; //can use pow(2,n)

    for(int i=allergen_values.size()-1;i>=0;i--){
        if(score>=allergen_values[i]){
            allergies.push_back(allergens[i]);
            score -= allergen_values[i];
        }
    }

    return allergies;
}