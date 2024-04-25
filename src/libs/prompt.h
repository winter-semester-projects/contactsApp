#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <regex>
using std::string, std::regex;

template <typename T> struct Prompt {

    protected:
    string prmt { };
    T inpt { };
    string cmpr { };

    // TODO: Make use of decltype() instead this... which is not-so-nice.
    bool cmpType (const char type) {

        return (*typeid(T).name()) == type ? true : false;
    }

    bool checkIfNumeric(bool vl=false) {

        if (cmpType('i')) {

            regex dotExpr(R"(\D)");

            vl = (std::regex_search(cmpr, dotExpr));
        }

        vl = ((cmpr[0] == '-') && cmpType('j')) ? true : false;

        return vl;
    }

    void extrctCmpr() {

        std::stringstream extr { };
        inpt = { };
        cmpr = { };

        std::cin >> cmpr;

        extr << cmpr;

        extr >> inpt;

    }

    // TODO: if  ‘‘cout’’ is not the method 

    public:
    Prompt(T& rtVl, const string& m="") : prmt(m) {
        using namespace std;

        if (!prmt.empty()) {
            
            cout << '\n' << prmt << '\n';
        }

        extrctCmpr();

        while (checkIfNumeric() || !cin) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << (!cmpType('j') ? "Please, enter valid input...\n" : "Please, enter a positive integer only.\n");
            extrctCmpr();

        }

        rtVl = inpt;
    }

};

struct Match_Prompt : public Prompt<string> {

    protected:
    regex expr { };

    public:
    Match_Prompt(const regex& e, const string& m, string& rtVl, int clim=-1, const string& err="") : expr(e), Prompt(rtVl, m) {

        using namespace std;

        if (clim != -1) {

            while (inpt.length() > clim) {

                inpt = { };

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "You entered greater input than expected... please, try again...\n";

                cin >> inpt;
            }

        }

        while (!regex_search(inpt, e)) {

            inpt = { };

            if (!err.empty()) {

                cout << err;
            }

            cin >> inpt;

            while (!cin) {

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nPlease, enter valid input...\n";
                cin >> inpt;
            }
        }

        rtVl = inpt;
    }
};