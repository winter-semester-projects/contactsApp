#include "ui_search_results.h"
#include "ui_search_prompt.h"

#include<QtWidgets/QDialog>
#include<iostream>
using namespace Ui;

struct search_intr {

    search_intr(Dialog_Results* fwui = new Dialog_Results, QDialog* fw = new QDialog) : ui_window_r(fwui), w_r(fw) {

        fwui->setupUi(fw);
    }

    search_intr(std::string txt, Dialog_Prompt* fwui = new Dialog_Prompt, QDialog* fw = new QDialog) : ui_window_p(fwui), w_p(fw) {

        fwui->setupUi(fw);
    }

    Dialog_Results* ui_window_r;

    Dialog_Prompt* ui_window_p;

    QDialog* w_r = new QDialog;

    QDialog* w_p = new QDialog;
};