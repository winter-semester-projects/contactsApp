#include <iostream>
#include <cstring>
using std::cout, std::cin, std::string, std::string_view;

bool affirm(string_view prmt) {

    char ans { };
    bool affirmed { false };

    cout << '\n' << prmt;

    cin >> ans;

    if (!cin.eof()) {
    
        cin.ignore(256, '\n');
    }

    if (tolower(ans) == 'y' && cin) {

        affirmed = true;
    } else if (!cin) {

        cin.clear();
        cout << "\nPlease, enter valid input...\n";

        affirm("");
    }

    return affirmed;
}

template<typename T>

T validate(string_view inptPrmt, bool prmt=true) {

    T dt { };
    
    if (prmt) {
    
        cout << inptPrmt;
    }

    cin >> dt;

    while(!cin) {

        cout << "\nPlease, enter valid input...\n";

        cin >> dt;
    }

    return dt;
}

