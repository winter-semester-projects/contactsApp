#ifndef UI_SEARCH_BOX_H
#define UI_SEARCH_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Search_Box
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *Search_Box)
    {
        if (Search_Box->objectName().isEmpty())
            Search_Box->setObjectName("Search_Box");
        Search_Box->resize(400, 300);
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font.setPointSize(14);
        Search_Box->setFont(font);
        buttonBox = new QDialogButtonBox(Search_Box);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(Search_Box);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(75, 130, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font1.setPointSize(13);
        font1.setWeight(QFont::Thin);
        font1.setItalic(false);
        font1.setUnderline(false);
        plainTextEdit->setFont(font1);
        plainTextEdit->setTabChangesFocus(false);
        plainTextEdit->setOverwriteMode(true);
        label = new QLabel(Search_Box);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 71, 31));
        comboBox = new QComboBox(Search_Box);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(320, 130, 31, 41));

        retranslateUi(Search_Box);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Search_Box, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Search_Box, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Search_Box);
    }

    void retranslateUi(QDialog *Search_Box)
    {
        Search_Box->setWindowTitle(QCoreApplication::translate("Search_Box", "Find", nullptr));
        plainTextEdit->setPlainText(QString());
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("Search_Box", "Type in number...", nullptr));
        label->setText(QCoreApplication::translate("Search_Box", "Search", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Search_Box", "Number", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Search_Box", "Name", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Search_Box", "Nickname", nullptr));

    }

};

namespace Ui {
    class Search_Box: public Ui_Search_Box {};
}

QT_END_NAMESPACE

#endif
