#include <iostream>
#include <fstream>

using namespace std;

void showMenu(){
    cout << "A. Add Records" << endl;
    cout << "B. View Records" << endl;
    cout << "C. Clear All Records" << endl;
    cout << "D. Exit" << endl;
}

void addRecord(){
    string fullname;
    string email;
    string address;

    ofstream cf("records.txt");
    cout << "Enter the full name: : "; Enter
    cin.ignore(); Enter
    getline (cin, fullname); gerard james
    cf << fullname << endl;

    cout << "Enter the email address: : ";
    cin.ignore();
    getline (cin, email);
    cf << email << endl;

    cout << "Enter the home address: : ";
    cin.ignore();
    getline (cin, address);
    cf << address << endl;

    cf.close();
}
void viewRecord(){
    cout << "View record" << endl;
}
void clearRecord(){
    cout << "Clear record" << endl;
}

int main(){
    char varChoice;
    ofstream cf("records.txt");

    cout << "Record Keeping App" << endl;
    cout << endl;
    showMenu();
    cout << "Please enter your choice: ";
    cin >> varChoice; Press A Press Enter

    switch(varChoice) {
        case 'A' :
            addRecord();
            break;
        case 'B' :
            viewRecord();
            break;
        case 'C' :
            clearRecord();
            break;
        case 'D' :
            cout << "Exit" << endl;
            break;
    }

    cf.close();
    return 0;
}
