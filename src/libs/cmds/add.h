#include<iostream>
#include "C:\Prjs\Contacts App\src\libs\usr_inpt.h"
using std::cout;

bool prompt(string& inpt) {
    cout << "Do you want to add a new contact?\n";

    if (inpt == "y") {
        return true;
    } else {

        return false;
    }

}

string add(string data[6]) {

    while (data[0] != "") {
       cout << "FIRST NAME IS REQUIRED...\n";

       cin >> data[0]; 
    }

    while (data[3] != "") { 
        cout << "PHONE NUMBER IS REQUIRED...\n";

        cin >> data[3];
    }

    return *data;
}
