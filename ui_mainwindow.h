/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionClearBytes;
    QAction *actionLoadfile;
    QAction *actionCleanPort;
    QAction *actionWriteToFile;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *ccradioButton;
    QRadioButton *chradioButton;
    QLCDNumber *recvbyteslcdNumber;
    QPushButton *clearUpBtn;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *sendAsHexcheckBox;
    QLineEdit *sendMsgLineEdit;
    QPushButton *sendmsgBtn;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QLabel *qter;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *portNameComboBox;
    QLabel *label_2;
    QComboBox *baudRateComboBox;
    QLabel *label_3;
    QComboBox *dataBitsComboBox;
    QLabel *label_4;
    QComboBox *parityComboBox;
    QLabel *label_5;
    QComboBox *stopBitsComboBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *obocheckBox;
    QLabel *label_6;
    QSpinBox *delayspinBox;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(820, 580);
        MainWindow->setMinimumSize(QSize(820, 580));
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("QDialog{background:rgb(229, 255, 239)}\n"
"QStatusBar{background:url(:/images/header.bmp)}\n"
"QPushButton{background:url(:/images/header.bmp)}\n"
"QLCDNumber{background:url(:/images/lcd.bmp)}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        MainWindow->setIconSize(QSize(16, 16));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setAnimated(true);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/mesage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionClearBytes = new QAction(MainWindow);
        actionClearBytes->setObjectName(QString::fromUtf8("actionClearBytes"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/clearbytes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearBytes->setIcon(icon6);
        actionLoadfile = new QAction(MainWindow);
        actionLoadfile->setObjectName(QString::fromUtf8("actionLoadfile"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/loadfile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadfile->setIcon(icon7);
        actionCleanPort = new QAction(MainWindow);
        actionCleanPort->setObjectName(QString::fromUtf8("actionCleanPort"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/cleanport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanPort->setIcon(icon8);
        actionWriteToFile = new QAction(MainWindow);
        actionWriteToFile->setObjectName(QString::fromUtf8("actionWriteToFile"));
        actionWriteToFile->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/write2file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteToFile->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(groupBox_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(1);
        frame_3->setMidLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ccradioButton = new QRadioButton(frame_3);
        ccradioButton->setObjectName(QString::fromUtf8("ccradioButton"));
        ccradioButton->setChecked(true);

        horizontalLayout->addWidget(ccradioButton);

        chradioButton = new QRadioButton(frame_3);
        chradioButton->setObjectName(QString::fromUtf8("chradioButton"));

        horizontalLayout->addWidget(chradioButton);

        recvbyteslcdNumber = new QLCDNumber(frame_3);
        recvbyteslcdNumber->setObjectName(QString::fromUtf8("recvbyteslcdNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recvbyteslcdNumber->sizePolicy().hasHeightForWidth());
        recvbyteslcdNumber->setSizePolicy(sizePolicy);
        recvbyteslcdNumber->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(recvbyteslcdNumber);

        clearUpBtn = new QPushButton(frame_3);
        clearUpBtn->setObjectName(QString::fromUtf8("clearUpBtn"));
        clearUpBtn->setMinimumSize(QSize(0, 23));
        clearUpBtn->setMaximumSize(QSize(100, 23));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearUpBtn->setIcon(icon10);

        horizontalLayout->addWidget(clearUpBtn);


        verticalLayout_2->addWidget(frame_3);

        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8(""));
        groupBox_4->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sendAsHexcheckBox = new QCheckBox(groupBox_4);
        sendAsHexcheckBox->setObjectName(QString::fromUtf8("sendAsHexcheckBox"));

        horizontalLayout_2->addWidget(sendAsHexcheckBox);

        sendMsgLineEdit = new QLineEdit(groupBox_4);
        sendMsgLineEdit->setObjectName(QString::fromUtf8("sendMsgLineEdit"));
        sendMsgLineEdit->setMaxLength(10000);
        sendMsgLineEdit->setDragEnabled(false);

        horizontalLayout_2->addWidget(sendMsgLineEdit);

        sendmsgBtn = new QPushButton(groupBox_4);
        sendmsgBtn->setObjectName(QString::fromUtf8("sendmsgBtn"));
        sendmsgBtn->setMinimumSize(QSize(0, 23));
        sendmsgBtn->setMaximumSize(QSize(100, 23));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendmsgBtn->setIcon(icon11);
        sendmsgBtn->setAutoDefault(false);

        horizontalLayout_2->addWidget(sendmsgBtn);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(0, 60));
        groupBox_3->setMaximumSize(QSize(16777215, 60));
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        groupBox_3->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 1);
        horizontalSpacer = new QSpacerItem(258, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/logo42-22.png")));

        horizontalLayout_3->addWidget(label_7);

        qter = new QLabel(groupBox_3);
        qter->setObjectName(QString::fromUtf8("qter"));
        sizePolicy1.setHeightForWidth(qter->sizePolicy().hasHeightForWidth());
        qter->setSizePolicy(sizePolicy1);
        qter->setOpenExternalLinks(true);

        horizontalLayout_3->addWidget(qter);

        horizontalSpacer_2 = new QSpacerItem(258, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label);

        portNameComboBox = new QComboBox(groupBox);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));

        verticalLayout->addWidget(portNameComboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_2);

        baudRateComboBox = new QComboBox(groupBox);
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        verticalLayout->addWidget(baudRateComboBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_3);

        dataBitsComboBox = new QComboBox(groupBox);
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));

        verticalLayout->addWidget(dataBitsComboBox);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_4);

        parityComboBox = new QComboBox(groupBox);
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        verticalLayout->addWidget(parityComboBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_5);

        stopBitsComboBox = new QComboBox(groupBox);
        stopBitsComboBox->addItem(QString());
        stopBitsComboBox->addItem(QString());
        stopBitsComboBox->addItem(QString());
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));

        verticalLayout->addWidget(stopBitsComboBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        obocheckBox = new QCheckBox(groupBox);
        obocheckBox->setObjectName(QString::fromUtf8("obocheckBox"));

        verticalLayout->addWidget(obocheckBox);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_6);

        delayspinBox = new QSpinBox(groupBox);
        delayspinBox->setObjectName(QString::fromUtf8("delayspinBox"));
        delayspinBox->setMinimum(10);
        delayspinBox->setMaximum(5000);
        delayspinBox->setValue(200);

        verticalLayout->addWidget(delayspinBox);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setMinimumSize(QSize(0, 0));
        mainToolBar->setMaximumSize(QSize(16777215, 55));
        mainToolBar->setFont(font);
        mainToolBar->setCursor(QCursor(Qt::PointingHandCursor));
        mainToolBar->setFocusPolicy(Qt::StrongFocus);
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::NoToolBarArea);
        mainToolBar->setIconSize(QSize(20, 20));
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionAdd);
        menu->addSeparator();
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addAction(actionLoadfile);
        menu->addAction(actionWriteToFile);
        menu->addSeparator();
        menu->addAction(actionClearBytes);
        menu->addAction(actionCleanPort);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionLoadfile);
        mainToolBar->addAction(actionWriteToFile);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClearBytes);
        mainToolBar->addAction(actionCleanPort);

        retranslateUi(MainWindow);

        sendmsgBtn->setDefault(false);
        baudRateComboBox->setCurrentIndex(12);
        dataBitsComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QCom\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213 1.0", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\262\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\262\345\217\243\350\256\276\345\244\207\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAdd->setStatusTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\262\345\217\243\350\256\276\345\244\207\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
#if QT_CONFIG(statustip)
        actionOpen->setStatusTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
#if QT_CONFIG(statustip)
        actionClose->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(statustip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216Wincom", nullptr));
#if QT_CONFIG(statustip)
        actionAbout->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216Wincom", nullptr));
#endif // QT_CONFIG(statustip)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\224\266\345\217\221\346\241\206\345\206\205\347\232\204\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSave->setStatusTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\224\266\345\217\221\346\241\206\345\206\205\347\232\204\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(statustip)
        actionClearBytes->setText(QCoreApplication::translate("MainWindow", "\350\256\241\346\225\260\346\270\205\351\233\266", nullptr));
#if QT_CONFIG(tooltip)
        actionClearBytes->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\233\266\345\267\262\346\224\266\345\210\260\347\232\204\345\255\227\350\212\202\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionClearBytes->setStatusTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\233\266\345\267\262\346\224\266\345\210\260\347\232\204\345\255\227\350\212\202\346\225\260", nullptr));
#endif // QT_CONFIG(statustip)
        actionLoadfile->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadfile->setToolTip(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\345\244\226\351\203\250\346\226\207\344\273\266\344\275\234\344\270\272\345\217\221\351\200\201\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLoadfile->setStatusTip(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\345\244\226\351\203\250\346\226\207\344\273\266\344\275\234\344\270\272\345\217\221\351\200\201\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(statustip)
        actionCleanPort->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\344\270\262\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanPort->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\344\270\262\345\217\243\344\270\255I/O\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCleanPort->setStatusTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\344\270\262\345\217\243\344\270\255I/O\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(statustip)
        actionWriteToFile->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionWriteToFile->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\206\350\257\273\345\217\226\346\225\260\346\215\256\345\206\231\345\205\245\345\210\260\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionWriteToFile->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\350\257\273\345\217\226\346\225\260\346\215\256\345\206\231\345\205\245\345\210\260\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        ccradioButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\344\273\245\345\255\227\347\254\246\346\226\271\345\274\217\346\230\276\347\244\272\346\225\260\346\215\256</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ccradioButton->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\345\275\242\345\274\217\346\230\276\347\244\272", nullptr));
#if QT_CONFIG(tooltip)
        chradioButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\344\273\245\345\215\201\345\205\255\350\277\233\345\210\266\346\226\271\345\274\217\346\230\276\347\244\272\346\225\260\346\215\256</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        chradioButton->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\345\275\242\345\274\217\346\230\276\347\244\272", nullptr));
#if QT_CONFIG(tooltip)
        recvbyteslcdNumber->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\262\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
        clearUpBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\230\276\347\244\272", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        sendAsHexcheckBox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\344\273\245\345\215\201\345\205\255\350\277\233\345\210\266\346\226\271\345\274\217\345\217\221\351\200\201\346\225\260\346\215\256\357\274\210\351\273\230\350\256\244\344\270\272\345\255\227\347\254\246\346\226\271\345\274\217\357\274\211</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sendAsHexcheckBox->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        sendmsgBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        groupBox_3->setTitle(QString());
        label_7->setText(QString());
#if QT_CONFIG(tooltip)
        qter->setToolTip(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\350\256\277\351\227\256\346\210\221\344\273\254\347\232\204\347\275\221\347\253\231", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        qter->setStatusTip(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\350\256\277\351\227\256\346\210\221\344\273\254\347\232\204\347\275\221\347\253\231", nullptr));
#endif // QT_CONFIG(statustip)
        qter->setText(QCoreApplication::translate("MainWindow", "www.qter.org", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        baudRateComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "50", nullptr));
        baudRateComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "75", nullptr));
        baudRateComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "110", nullptr));
        baudRateComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "134", nullptr));
        baudRateComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "150", nullptr));
        baudRateComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "200", nullptr));
        baudRateComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "300", nullptr));
        baudRateComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "600", nullptr));
        baudRateComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "1200", nullptr));
        baudRateComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "1800", nullptr));
        baudRateComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baudRateComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "4800", nullptr));
        baudRateComboBox->setItemText(12, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baudRateComboBox->setItemText(13, QCoreApplication::translate("MainWindow", "14400", nullptr));
        baudRateComboBox->setItemText(14, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baudRateComboBox->setItemText(15, QCoreApplication::translate("MainWindow", "38400", nullptr));
        baudRateComboBox->setItemText(16, QCoreApplication::translate("MainWindow", "56000", nullptr));
        baudRateComboBox->setItemText(17, QCoreApplication::translate("MainWindow", "57600", nullptr));
        baudRateComboBox->setItemText(18, QCoreApplication::translate("MainWindow", "76800", nullptr));
        baudRateComboBox->setItemText(19, QCoreApplication::translate("MainWindow", "115200", nullptr));
        baudRateComboBox->setItemText(20, QCoreApplication::translate("MainWindow", "128000", nullptr));
        baudRateComboBox->setItemText(21, QCoreApplication::translate("MainWindow", "256000", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        dataBitsComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        dataBitsComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        dataBitsComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        dataBitsComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        parityComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        parityComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\207", nullptr));
        parityComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\201\266", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        stopBitsComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopBitsComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        stopBitsComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        obocheckBox->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\345\217\221\351\200\201", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224(\346\257\253\347\247\222)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234(&C)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
