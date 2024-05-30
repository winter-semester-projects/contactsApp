#include<iostream>
#include<src/libs/contacts.cpp>
#include<src/libs/prompt.cpp>
using std::string;

struct Search : protected Match_Prompt {

    Search() { }

    protected:
    string results { };

    friend void search(Contacts* usr_contacts, Search* query, string name) {

        for (auto i : usr_contacts->str_contacts) {

            if (i[0] == name) {

                query->results += name;

                break;
            }

        }
    }

};
