#include <iostream>
#include <fstream>

using namespace std;

void addRecord(string fullname, string email, string address){
    fstream file;

    file.open("Records.txt", ios::out | ios::app);
    file << fullname << " / " << email << " / " << address << endl;
    file.close();
}
class Record {
    public:
        string rFullname;
        string rEmail;
        string rAddress;

        Record(string f, string e, string a){
            rFullname = f;
            rEmail = e;
            rAddress = a;
        }
        void addPerson(){
            addRecord(rFullname, rEmail, rAddress);
        }
};

void showMenu(){
    cout << "A. Add Records" << endl;
    cout << "B. View Records" << endl;
    cout << "C. Remove Records" << endl;
    cout << "D. Exit" << endl;
}


void viewRecord(){
    fstream file;
    string line;
    int counter = 0;

    file.open("Records.txt", ios::in);
    cout << "View record" << endl << endl;

    while(getline(file, line)){
        counter += 1;
        cout << counter << " " << line << endl;
    }
    file.close();

}
void clearRecord(){
    fstream file;
    string line;
    string strTemp = "";
    string strLine;
    int counter = 0;
    int numLine = 0;

    file.open("Records.txt", ios::in);
    cout << "Clear record" << endl << endl;
    cout << "Enter the line number to be removed: ";
    getline(cin, strLine);
    numLine = stoi(strLine);

    while(getline(file, line)){
        counter += 1;
        if(counter != numLine){
            strTemp = strTemp + line + "\n";
        }
    }
    file.close();

    file.open("Records.txt", ios::out);
    file << strTemp;
    file.close();

}

int main(){
    char charChoice = 'x';
    string strChoice;
    while(charChoice != 'd'){
        cout << "Record Keeping App" << endl << endl;
        do{
            showMenu();
            cout << "Please enter your choice (a, b, c, or d): ";
            getline (cin, strChoice);
            if (strChoice.length() != 1 ){
                cout << endl << "Please enter a single character only!" << endl;
            }
        } while(strChoice.length() != 1);

        charChoice = tolower(strChoice[0]);

        switch(charChoice) {
            case 'a' :
                {
                    string fName;
                    string fEmail;
                    string fAddress;

                    cout << "Name: ";
                    getline(cin, fName);
                    cout << "Email: ";
                    getline(cin, fEmail);
                    cout << "Address: ";
                    getline(cin, fAddress);
                    Record recs(fName, fEmail, fAddress);
                    recs.addPerson();
                    break;
                }

            case 'b' :
                {
                    viewRecord();
                    cout << endl;
                    break;
                }
            case 'c' :
                {
                    clearRecord();
                    cout << endl;
                    break;
                }
            case 'd' :
                cout << "Exit" << endl;
                break;
        }
    }
    return 0;
}
