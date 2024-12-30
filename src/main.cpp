#include "src/libs/components/mainwindow/mainwindow.cpp"
#include "src/libs/components/search_box/search_box.cpp"

#include<QtWidgets/QApplication>

#include <iostream>
using std::string;

// TODO: Move them later...
// regex phoneNumber(R"((01[0-2]\d{8}$|015\d{8}$))");
// regex email(R"((\D+@\w+\.\w+))");

int main(int argc, char* argv[]) {

    using namespace Ui;

    /*

    std::stringstream welcome { };    

    welcome << R"(
          _____  _    _  ____  _   _ ______   _   _ _    _ __  __ ____  ______ _____
         |  __ \| |  | |/ __ \| \ | |  ____| | \ | | |  | |  \/  |  _ \|  ____|  __ \
         | |__) | |__| | |  | |  \| | |__    |  \| | |  | | \  / | |_) | |__  | |__) |
         |  ___/|  __  | |  | | . ` |  __|   | . ` | |  | | |\/| |  _ <|  __| |  _  /
         | |    | |  | | |__| | |\  | |____  | |\  | |__| | |  | | |_) | |____| | \ \
         |_|    |_|  |_|\____/|_| \_|______| |_| \_|\____/|_|  |_|____/|______|_|  \_\
                                                                              )" << '\n';

    */

    QApplication app(argc, argv);

    mainwindow main;

    search_bar SearchFun;

    (main.w)->show();

    (SearchFun.mw_sb)->show();

    return app.exec();
}
