#include "ui_search_box.h"

#include<QtWidgets/QDialog>
#include<iostream>
using namespace Ui;

struct search_bar {

    search_bar(Search_Box* fsb = new Search_Box, QDialog* fw = new QDialog) : ui_search_box(fsb), mw_sb(fw) {
        
        fsb->setupUi(fw);
    }

    Search_Box* ui_search_box;

    QDialog* mw_sb = new QDialog;
};
