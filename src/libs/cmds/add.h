#include <iostream>
#include <regex>
#include <vector>
#include <array>
using std::cout, std::cin, std::string, std::regex, std::regex_search, std::regex_replace, std::smatch, std::vector, std::array;

string const queries[6] = { "What is their first name?\n", "What is their last name?\n", "What is their phone number?\n", "What is their e-mail?\n", "What is their address?\n", "What is their related name?\n"};

vector<array<string, 6>> contacts { };

array<string, 6> inpt { };

regex phoneNumber(R"((01[0-2]\d{8}$|015\d{8}$))");
smatch mtchs1;

regex email(R"((\D+@\w+\.\w+))");
smatch mtchs2;

string query() {

    string nvl { };

    cout << "Please, enter valid input...\n";

    cin >> nvl;

    return nvl;
}

void add() {

    int cntr { -1 };
    for (auto i : queries) {
        cout << i;

        ++cntr;
        cin >> inpt[cntr];

        if (cntr == 2) {

            while (!std::regex_match(inpt[2], mtchs1, phoneNumber)) {
            
                inpt[2] = query();
            }
        }

        if (cntr == 3) {

            while (!std::regex_match(inpt[3], mtchs2, email)) {

                inpt[3] = query();
            }
        }
    }

    char toVieworNotToView { };
 
    cout << "\nDo you want to view their contact info? [Y\\y|N\\n]\n";

    cin >> toVieworNotToView;

    string const iHateHardCoding[6] { "First Name:", "Last Name:", "Phone Number:", "Email:", "Address:", "Related Name:" };

    if (tolower(toVieworNotToView) == 'y') {
        int counterThingy { 0 };
        for (auto i : inpt) {

            if (i != "") {
                cout << '\n' << iHateHardCoding[counterThingy] << '\n';
                cout << i;
            }

            ++counterThingy;   
        }
    }

    contacts.push_back(inpt);
}


