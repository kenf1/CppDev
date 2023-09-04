//multi-threading

#include <iostream>
#include <thread>
#include <mutex>

std::mutex carMutex;

void driveCar(std::string driverName);
void driveCar1(std::string driverName);

int main(){
    //create threads
    std::thread t1(driveCar,"Driver 1");
    std::thread t2(driveCar,"Driver 2");

    //ensure both threads have completed
    t1.join();
    t2.join();

    std::thread t3(driveCar1,"Driver 3");
    std::thread t4(driveCar1,"Driver 4");

    t3.join();
    t4.join();

    return 0;
}

void driveCar(std::string driverName){
    //lock
    std::unique_lock<std::mutex> carLock(carMutex);

    std::cout << driverName << " is driving\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); //sleep for 3 sec
    std::cout << driverName << " is done driving\n";

    //unlock (can be used to delay + run multiple times)
    carLock.unlock();
}

void driveCar1(std::string driverName){
    //lock + unlock (automatically)
    std::lock_guard<std::mutex> carLock(carMutex);

    std::cout << driverName << " is driving\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); //sleep for 3 sec
    std::cout << driverName << " is done driving\n";
}