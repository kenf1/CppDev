/*
    calculate date time 1 gigasecond after a certain date
*/

#include <iostream>
#include <cmath>
#include "boost/date_time/posix_time/posix_time.hpp" //install from libboost-all-dev

//avoid re-typing multiple times
using namespace boost::posix_time;

ptime fastFoward(ptime inputDT);

int main(){
    //current time
    ptime current_time = second_clock::local_time();

    //add gigasecond to current time
    std::cout << "A gigasecond from the current date time is: " << fastFoward(current_time) << "\n";
}

//add gigasecond to inputDT
ptime fastFoward(ptime inputDT){
    return inputDT+time_duration(0,0,pow(10,9),0);
}