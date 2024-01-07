#include <iostream>
#include <unistd.h>
#include <cstring>
using std::cout, std::cin, std::string;

bool locater(string nm) {
    bool found { false };

    for (auto i { contacts.begin() }; i != contacts.end(); ++i) {
        if (strcmp((*i)[0].c_str(), nm.c_str()) == 0) {

            found = true;
            i = { };
        }
    }

    return found;
}

void del() {

    // `locater()` does not only locate the name... if it finds it, then it *will* delete it!

    while (!locater(validate<string>("What is their name?\n"))) {

        sleep(0.3);

        cout << "There is no contact with that name!\n";
    }

    cout << "\nDeleting...\n";

    sleep(1.2);

    cout << "\nDeleted!";

}