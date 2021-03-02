#include <iostream>
using namespace std;

class House {
    public:
        int floorSize = 10;
        int noOfFloors = 3;
        int noOfDoors = 6;
        void switchOn(){
            cout << "Switching On..." << endl;
            lightOpen();
            ovenOpen();
        }
        void lightOpen(){
            cout << "The light is open." << endl;
        }
        void ovenOpen(){
            cout << "The oven is open." << endl;
        }
};

class TownHouse: public House {
    public:
        int noOfFloors = 2;
        int noOfDoors = 4;
};

class SmallHouse: public House {
    public:
        int floorSize = 5;
        int noOfFloors = 1;
        int noOfDoors = 3;
};

int main(){
    SmallHouse myHouse;
    cout << "Floor size: " << myHouse.floorSize << endl;
    cout << "Number of Floors: " << myHouse.noOfFloors<< endl;
    cout << "Number of Doors: " << myHouse.noOfDoors << endl;
    myHouse.switchOn();

    return 0;
}
