#include "ui_mainwindow.h"

#include<QtWidgets/QMainWindow>
using namespace Ui;

struct mainwindow {

    mainwindow(MainWindow* fwui = new MainWindow, QMainWindow* fw = new QMainWindow) : ui_window(fwui), w(fw) {

        fwui->setupUi(fw);
    }

    MainWindow* ui_window;

    QMainWindow* w = new QMainWindow;
};

