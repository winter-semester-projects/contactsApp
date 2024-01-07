#include <iostream>
#include <regex>
#include <vector>
#include <array>
#include <string_view>
#include "../prompt.h"
using std::cout, std::cin, std::string, std::string_view, std::regex, std::smatch, std::vector, std::array, std::regex_match;

string const queries[6] = { "What is their first name?\n", "What is their last name?\n", "What is their phone number?\n", "What is their e-mail?\n", "What is their address?\n", "What is their related name?\n"};

vector<array<string, 6>> contacts { { } };

regex phoneNumber(R"((01[0-2]\d{8}$|015\d{8}$))");
smatch mtchs1;

regex email(R"((\D+@\w+\.\w+))");
smatch mtchs2;

void add() {

    int k { -1 };
    for (auto& i : queries) {
        cout << i;

        ++k;
        
        contacts[0][k] = validate<string>("", false);

        if (k == 2) {

            while (!regex_match(contacts[0][2], mtchs1, phoneNumber)) {
            
                contacts[0][2] = validate<string>("Please, enter valid input...\n");
            }
        }

        if (k == 3) {

            while (!regex_match(contacts[0][3], mtchs2, email)) {

                contacts[0][3] = validate<string>("Please, enter valid input...\n");
            }
        }
    }

    string const iHateHardCoding[6] { "First Name:", "Last Name:", "Phone Number:", "Email:", "Address:", "Related Name:" };

    if (affirm("\nDo you want to view their contact info? [Y\\N]\n")) {
        int j { 0 };

        for (auto& i : contacts[0]) {

            if (!i.empty()) {
                cout << '\n' << iHateHardCoding[j] << '\n';
                cout << i;
            }

            ++j;   
        }
    }
}

