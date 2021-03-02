#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string myText;

    ifstream rf("filename.txt");

    while (getline (rf, myText)){
        cout << myText << endl;
    }

    rf.close();

    return 0;
}
