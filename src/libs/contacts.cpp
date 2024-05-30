#include<iostream>
#include<vector>
#include<array>
#include<regex>
using std::string, std::vector, std::array, std::regex;

struct Search;

struct Contacts {

    void operator+(array<string, 6> fContact) {

        Contacts mContact;

        mContact.str_contacts.push_back(fContact);
    }

    void search(Contacts*, Search*, string);

    protected:
    vector<array<string,6>> str_contacts { };
    
    Contacts() {

    }

    friend void search(Contacts*, Search*, string);
};

