#include <iostream>
#include <cstring>
#include <cstdlib>
#include <regex>
using std::string, std::regex;

template <typename T> struct Prompt {

    protected:
    string prmt { };
    T inpt { };
    string cmpr { };

    T rtVl { };

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

    public:
    string text { };

    Prompt(const string& m="") : prmt(m) {
        using namespace std;

        if (!prmt.empty()) {
            
            text = prmt;
        }

        rtVl = inpt;
    }

};

struct Match_Prompt : protected Prompt<string> {

    protected:
    regex expr { };

    Match_Prompt() { } 

    public:
    string mRtVl { };
    
    Match_Prompt(const regex& e, const string& m, int clim=-1, const string& err="") : expr(e), Prompt(m) {

        using namespace std;

        if (clim != -1) {

            while (inpt.length() > clim) {

                inpt = { };

                text = "You entered greater input than expected... please, try again...\n";

                cin >> inpt;
            }

        }

        while (!regex_search(inpt, e)) {

            inpt = { };

            if (!err.empty()) {

                text = err;
            }

            cin >> inpt;
        }

        mRtVl = inpt;
    }
};