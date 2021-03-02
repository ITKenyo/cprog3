#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream MyFile("filename.doc");
    MyFile << "Files can be tricky, but it is fun enough. " << endl;
    MyFile << "Yes. It is so much fun..";
    MyFile.close();
    return 0;
}
