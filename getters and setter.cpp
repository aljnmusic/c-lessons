#include <iostream>

class Stove{
    private:
        int temp = 0;

    public:
    int getTemp(){
        return temp;
    }

    void setTemp(int temp){
        if (temp < 0)
        {
            this->temp = 0;
        }
        else if (temp >= 10)
        {
            this->temp = 10;
        }
        else{
            this->temp = temp;
        }
        
        
    }

};

int main(){

    Stove stove;

    stove.setTemp(5);

    std::cout << "The temperature of the stove is: " << stove.getTemp();

    return 0;
}