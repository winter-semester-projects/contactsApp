#include <iostream>
#include <unistd.h>
#include <cstring>
using std::cout, std::cin, std::string;

bool locater(string nm) {
    bool found { false };

    for (auto i { contacts.begin() }; i != contacts.end(); ++i) {
        if (strcmp((*i)[0].c_str(), nm.c_str()) == 0) {

            found = true;
        }
    }

    return found;
}

void del() {

    string nm { };

    cout << "What is their name?\n";

    cin >> nm;

    while (!locater(nm)) {

        sleep(0.3);

        cout << "There is no contact with that name!\n";

        del();
    }

    sleep(0.3);

    cout << "\nDeleting...\n";

    sleep(1.2);

    cout << "\nDeleted!";

}