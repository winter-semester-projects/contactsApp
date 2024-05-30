#ifndef SEARCH_RESULTSSBHMVG_H
#define SEARCH_RESULTSSBHMVG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Results
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 31, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 21, 16));
        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(60, 70, 231, 192));
        textBrowser_2 = new QTextBrowser(Dialog);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(60, 20, 231, 21));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 80, 75, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 220, 75, 24));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 150, 75, 24));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 20, 75, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    }

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Info", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Find", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Done", nullptr));
    }

};

namespace Ui {
    class Dialog_Results: public Ui_Dialog_Results {};
}

QT_END_NAMESPACE

#endif
