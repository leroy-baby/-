/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *P3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *P4;
    QPushButton *P5;
    QPushButton *P6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *P7;
    QPushButton *P8;
    QPushButton *P9;
    QHBoxLayout *horizontalLayout;
    QPushButton *P0;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1080, 728);
        MainWindow->setMaximumSize(QSize(1080, 2248));
        MainWindow->setBaseSize(QSize(720, 900));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        tableWidget->setFont(font1);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        P1 = new QPushButton(centralWidget);
        P1->setObjectName(QStringLiteral("P1"));
        P1->setMinimumSize(QSize(0, 130));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        P1->setFont(font2);

        horizontalLayout_2->addWidget(P1);

        P2 = new QPushButton(centralWidget);
        P2->setObjectName(QStringLiteral("P2"));
        P2->setMinimumSize(QSize(0, 130));
        P2->setFont(font2);

        horizontalLayout_2->addWidget(P2);

        P3 = new QPushButton(centralWidget);
        P3->setObjectName(QStringLiteral("P3"));
        P3->setMinimumSize(QSize(0, 130));
        P3->setFont(font2);

        horizontalLayout_2->addWidget(P3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        P4 = new QPushButton(centralWidget);
        P4->setObjectName(QStringLiteral("P4"));
        P4->setMinimumSize(QSize(0, 130));
        P4->setFont(font2);

        horizontalLayout_3->addWidget(P4);

        P5 = new QPushButton(centralWidget);
        P5->setObjectName(QStringLiteral("P5"));
        P5->setMinimumSize(QSize(0, 130));
        P5->setFont(font2);

        horizontalLayout_3->addWidget(P5);

        P6 = new QPushButton(centralWidget);
        P6->setObjectName(QStringLiteral("P6"));
        P6->setMinimumSize(QSize(0, 130));
        P6->setFont(font2);
        P6->setAutoDefault(false);

        horizontalLayout_3->addWidget(P6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        P7 = new QPushButton(centralWidget);
        P7->setObjectName(QStringLiteral("P7"));
        P7->setMinimumSize(QSize(0, 130));
        P7->setFont(font2);

        horizontalLayout_4->addWidget(P7);

        P8 = new QPushButton(centralWidget);
        P8->setObjectName(QStringLiteral("P8"));
        P8->setMinimumSize(QSize(0, 130));
        P8->setFont(font2);

        horizontalLayout_4->addWidget(P8);

        P9 = new QPushButton(centralWidget);
        P9->setObjectName(QStringLiteral("P9"));
        P9->setMinimumSize(QSize(0, 130));
        P9->setFont(font2);

        horizontalLayout_4->addWidget(P9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        P0 = new QPushButton(centralWidget);
        P0->setObjectName(QStringLiteral("P0"));
        P0->setMinimumSize(QSize(350, 130));
        P0->setFont(font2);

        horizontalLayout->addWidget(P0);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(350, 130));
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(350, 130));
        pushButton->setFont(font2);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\225\260\347\213\254\350\247\243\345\257\206\345\231\250V1.2", nullptr));
        P1->setText(QApplication::translate("MainWindow", "1", nullptr));
        P2->setText(QApplication::translate("MainWindow", "2", nullptr));
        P3->setText(QApplication::translate("MainWindow", "3", nullptr));
        P4->setText(QApplication::translate("MainWindow", "4", nullptr));
        P5->setText(QApplication::translate("MainWindow", "5", nullptr));
        P6->setText(QApplication::translate("MainWindow", "6", nullptr));
        P7->setText(QApplication::translate("MainWindow", "7", nullptr));
        P8->setText(QApplication::translate("MainWindow", "8", nullptr));
        P9->setText(QApplication::translate("MainWindow", "9", nullptr));
        P0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\270\205\351\233\266", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
