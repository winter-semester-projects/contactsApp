#include <iostream>
#include <unistd.h>
using std::cout, std::cin, std::string;

void del() {

    char uselesssThing { };

    cout << "What is their name?\n";

    cin >> uselesssThing;

    sleep(0.3);

    cout << "\nDeleting...\n";

    sleep(1.2);

    cout << "\nDeleted!";

}