#ifndef BACKUP0ANIBHE_H
#define BACKUP0ANIBHE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClear;
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *widget;
    QLabel *label;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuLog_Out;
    QMenu *menuRecents;
    QMenu *menuFind;
    QMenu *menuProfile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(843, 565);
        MainWindow->setMaximumSize(QSize(843, 578));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName("actionClear");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(9, 9, 771, 511));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 9, 761, 481));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 81, 21));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Palatino Linotype\";"));
        listWidget = new QListWidget(widget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 40, 711, 431));
        listWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 843, 22));
        menuLog_Out = new QMenu(menubar);
        menuLog_Out->setObjectName("menuLog_Out");
        menuRecents = new QMenu(menubar);
        menuRecents->setObjectName("menuRecents");
        menuFind = new QMenu(menubar);
        menuFind->setObjectName("menuFind");
        menuProfile = new QMenu(menubar);
        menuProfile->setObjectName("menuProfile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuRecents->menuAction());
        menubar->addAction(menuFind->menuAction());
        menubar->addAction(menuProfile->menuAction());
        menubar->addAction(menuLog_Out->menuAction());
        menuRecents->addAction(actionClear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    }

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Contacts Application", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Contacts", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Sherif M. Haraedy", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        menuLog_Out->setTitle(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        menuRecents->setTitle(QCoreApplication::translate("MainWindow", "Recents", nullptr));
        menuFind->setTitle(QCoreApplication::translate("MainWindow", "Find", nullptr));
        menuProfile->setTitle(QCoreApplication::translate("MainWindow", "Profile", nullptr));
    }

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
}

QT_END_NAMESPACE

#endif

