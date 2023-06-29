#include <iostream>

class Stove{
    private:
        int temp = 0;
    public:
        //temp readable but not writable (immutable)
        int getTemp(){
            return temp;
        }

        //temp readable but need extra step to write
        void setTemp(int temp){
            if(temp<0){
                this->temp = 0;
            }else if(temp>=10){
                this->temp = 10;
            }else{
                this->temp = temp;
            }
        }
};

int main(){
    Stove stove;

    // stove.temp = 69420;
    // std::cout << stove.temp << "\n";

    std::cout << stove.getTemp() << "\n";

    stove.setTemp(100);
    std::cout << stove.getTemp() << "\n";

    return 0;
}