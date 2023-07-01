#include <iostream>

/*
    Given an age in seconds, calculate how old someone would be on:
        Mercury: orbital period 0.2408467 Earth years
        Venus: orbital period 0.61519726 Earth years
        Earth: orbital period 1.0 Earth years, 365.25 Earth days, or 31557600 seconds
        Mars: orbital period 1.8808158 Earth years
        Jupiter: orbital period 11.862615 Earth years
        Saturn: orbital period 29.447498 Earth years
        Uranus: orbital period 84.016846 Earth years
        Neptune: orbital period 164.79132 Earth years
*/

double convertSec(double sec);
void ageCalc(double ageOnEarth,int planet);

int main(){
    int ageInSec,planet;
    
    std::cout << "Enter age (in seconds) on Earth:\n";
    std::cin >> ageInSec;

    std::cout << "Enter planet to convert to (1-8):\n 1. Mercury\n 2.Venus\n 3. Earth\n 4. Mars\n 5. Jupiter\n 6. Saturn\n 7. Uranus\n 8. Neptune\n";
    std::cin >> planet;

    std::cout << "The entered age on Earth is: " << convertSec(ageInSec) << " years \n";
    ageCalc(convertSec(ageInSec),planet);

    return 0;
}

//convert entered seconds to Earth age (years)
double convertSec(double sec){
    double earthAge;
    return earthAge = (sec/31557600)/365.25;
}

//convert age on Earth (years) to age on chosen planet (years)
void ageCalc(double ageOnEarth,int planet){
    /*
        store conversion factors as constants in array for ease of access/edits
            can use maps but will be more lines of code & complexity
    */
    const double conversionFactors[] = {0.2408467,0.61519726,1.0,1.8808158,11.862615,29.447498,84.016846,164.79132};
    std::string planetNames[] = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};
    
    double planetAge;
    int index = planet-1;

    //less lines of code & complexity compared to switch
    planetAge = ageOnEarth/conversionFactors[index];
    std::cout << "The age you entered on planet Earth is: " << planetAge << " on " << planetNames[index] << "\n";
}