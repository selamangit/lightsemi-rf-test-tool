#ifndef LIGHTNINGSEMI_H
#define LIGHTNINGSEMI_H

#include <QtCore/QVariant>
#include <QtCore/QTime>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QList>
#include <QStringList>
#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include <QMessageBox>
#include <QByteArray>


QT_BEGIN_NAMESPACE

class Ui_MainWindow : public QObject
{
    Q_OBJECT

public:
    QStringList QList;
    QTime time;
    QByteArray buffer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *gridWidget;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QFrame *gridFrame;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_10;
    QComboBox *comboBox_6;
    QPushButton *pushButton_12;
    QFrame *gridFrame_3;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_4;
    QFrame *line;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_2;
    QFrame *gridFrame1;
    QGridLayout *gridLayout_6;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox_5;
    QLabel *label_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    QSerialPort *serial;
    QTimer *timer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 699);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 6, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 0, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 7, 10, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 10, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 6, 10, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 15, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 10, 2, 1);

        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalLayout_4 = new QVBoxLayout(verticalFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_3 = new QPushButton(verticalFrame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        QObject::connect(pushButton_3,&QPushButton::clicked,this,&Ui_MainWindow::on_pushButton_3_clicked);

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalFrame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));

        verticalLayout_4->addWidget(pushButton_2);


        gridLayout->addWidget(verticalFrame, 13, 7, 2, 1);

        gridWidget = new QWidget(centralwidget);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridLayout_4 = new QGridLayout(gridWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setAcceptDrops(true);

        gridLayout_4->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout->addWidget(gridWidget, 13, 3, 2, 4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 10, 2, 1);

        gridFrame = new QFrame(centralwidget);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridLayout_2 = new QGridLayout(gridFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_4 = new QPushButton(gridFrame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)),this, SLOT(on_pushButton_4_clicked()));


        gridLayout_2->addWidget(pushButton_4, 8, 0, 1, 1);

        comboBox = new QComboBox(gridFrame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 1, 1, 2);

        pushButton = new QPushButton(gridFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton, 8, 1, 1, 1);

        comboBox_2 = new QComboBox(gridFrame);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 2, 1, 1, 2);

        label_9 = new QLabel(gridFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 6, 0, 1, 1);

        label_4 = new QLabel(gridFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(gridFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBox_7 = new QComboBox(gridFrame);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_2->addWidget(comboBox_7, 4, 1, 1, 2);

        comboBox_8 = new QComboBox(gridFrame);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_2->addWidget(comboBox_8, 6, 1, 1, 2);

        label_8 = new QLabel(gridFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_7 = new QLabel(gridFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_10 = new QLabel(gridFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        comboBox_6 = new QComboBox(gridFrame);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_2->addWidget(comboBox_6, 3, 1, 1, 2);

        pushButton_12 = new QPushButton(gridFrame);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_2->addWidget(pushButton_12, 8, 2, 1, 1);


        gridLayout->addWidget(gridFrame, 2, 0, 3, 2);

        gridFrame_3 = new QFrame(centralwidget);
        gridFrame_3->setObjectName(QString::fromUtf8("gridFrame_3"));
        gridLayout_5 = new QGridLayout(gridFrame_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_11 = new QLabel(gridFrame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);


        gridLayout->addWidget(gridFrame_3, 10, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 8, 10, 4, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 15, 1, 1, 1);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 2, 2, 13, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 12, 3, 1, 5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 1, 1, 2);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_18, 14, 10, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 15, 5, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 15, 7, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 9, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 15, 4, 1, 1);

        gridFrame1 = new QFrame(centralwidget);
        gridFrame1->setObjectName(QString::fromUtf8("gridFrame1"));
        gridLayout_6 = new QGridLayout(gridFrame1);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridFrame_2 = new QFrame(gridFrame1);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        gridLayout_7 = new QGridLayout(gridFrame_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        comboBox_5 = new QComboBox(gridFrame_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        QList.clear();
        QList<<QString("BL")<<QString("G")<<QString("N");
        comboBox_5->clear();
        comboBox_5->addItem(QString("None"));
        comboBox_5->addItems(QList);
        comboBox_5->setCurrentIndex(0);
        QObject::connect(comboBox_5, SIGNAL(currentIndexChanged(int)),this, SLOT(on_comboBox_5_currentIndexChanged(int)));


        gridLayout_7->addWidget(comboBox_5, 0, 1, 1, 1);

        label_3 = new QLabel(gridFrame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        comboBox_4 = new QComboBox(gridFrame_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->addItem(QString("None"));
        for(int i=1;i<=14;i++)
        {
            comboBox_4->addItem(QString::number(i));
        }
        comboBox_4->setCurrentIndex(0);


        gridLayout_7->addWidget(comboBox_4, 2, 1, 1, 1);

        comboBox_3 = new QComboBox(gridFrame_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->clear();
        comboBox_3->addItem(QString("None"));



        gridLayout_7->addWidget(comboBox_3, 1, 1, 1, 1);

        label_5 = new QLabel(gridFrame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gridFrame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_6, 2, 0, 1, 1);


        gridLayout_6->addWidget(gridFrame_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(gridFrame1);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab_5->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 10, 90, 23));

        QObject::connect(pushButton_5,&QPushButton::clicked,this,&Ui_MainWindow::on_pushButton_5_clicked);

        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 10, 90, 23));
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 40, 90, 23));
        pushButton_8 = new QPushButton(tab_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 40, 90, 23));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        pushButton_9 = new QPushButton(tab_6);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 10, 90, 23));
        pushButton_10 = new QPushButton(tab_6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(170, 10, 90, 23));
        pushButton_11 = new QPushButton(tab_6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 40, 90, 23));
        tabWidget->addTab(tab_6, QString());

        gridLayout_6->addWidget(tabWidget, 4, 0, 1, 1);


        gridLayout->addWidget(gridFrame1, 6, 0, 3, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"Consolas\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 5, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 15, 6, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 0, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 10, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 15, 0, 1, 1);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 2, 3, 10, 5);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        tabWidget->setCurrentIndex(1);
        QMetaObject::connectSlotsByName(MainWindow);
        initPort();
    } // setupUi
    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\214\207\344\273\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\344\270\262\345\217\243\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\344\277\241\346\201\257", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\347\203\247\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\351\200\237\347\216\207", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\344\277\241\351\201\223", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\254\241RX\346\265\213\350\257\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255RX\346\265\213\350\257\225", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226RX\344\277\241\346\201\257", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242RX\346\265\213\350\257\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "RX\346\265\213\350\257\225", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225(11B)", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225(11G)", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225(11N)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\344\277\241\346\201\257", nullptr));
    } // retranslateUi
    void initPort()
    {
        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        {
//            qDebug()<<"Name:"<<info.portName();
//            qDebug()<<"Description:"<<info.description();
//            qDebug()<<"Manufacturer:"<<info.manufacturer();
//
//            //这里相当于自动识别串口号之后添加到了cmb，如果要手动选择可以用下面列表的方式添加进去
//            QSerialPort serial;
//            serial.setPort(info);
//            if(serial.open(QIODevice::ReadWrite))
//            {
//                //将串口号添加到cmb
//                comboBox->addItem(info.portName());
//                //关闭串口等待人为(打开串口按钮)打开
//                serial.close();
//            }
            comboBox->addItem(info.portName());
        }
        QList.clear();
        QList<<"None"<<"1200"<<"2400"<<"4800"<<"9600"
                <<"19200"<<"38400"<<"57600"<<"115200";
        comboBox_2->addItems(QList);
        QList.clear();
        QList<<"无"<<"奇"<<"偶";
        comboBox_7->addItems(QList);
        QList.clear();
        QList<<"5"<<"6"<<"7"<<"8";
        comboBox_6->addItems(QList);
        QList.clear();
        QList<<"1"<<"2";
        comboBox_8->addItems(QList);
    }
public slots:
    void on_comboBox_5_currentIndexChanged(int i)
    {
        QString text = comboBox_5->currentText();
        if(text == "BL")
        {
            QList.clear();
            comboBox_3->clear();
            comboBox_3->addItem(QString("None"));
            QList<<QString("1")<<QString("2")<<QString("5.5")<<QString("11");
            comboBox_3->addItems(QList);
        }
        else if(text == "G")
        {
            QList.clear();
            comboBox_3->clear();
            comboBox_3->addItem(QString("None"));
            QList<<QString("6")<<QString("9")<<QString("12")<<QString("18")<<QString("24")<<QString("36")<<QString("48")<<QString("54");
            comboBox_3->addItems(QList);
        }
        else if(text == "N")
        {
            QList.clear();
            comboBox_3->clear();
            comboBox_3->addItem(QString("None"));
            QList<<QString("1")<<QString("2")<<QString("3")<<QString("4")<<QString("5")<<QString("6")<<QString("7");
            comboBox_3->addItems(QList);
        }
        comboBox_3->setCurrentIndex(0);
    }
    void on_pushButton_4_clicked()
    {
        serial = new QSerialPort();
        timer = new QTimer();
        if(serial->isOpen())
        {
            serial->clear();
            serial->close();
        }
//        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
//        {
//            if(info.portName() == comboBox->currentText())
//            {
//                serial->setPort(info);
//            }
//        }

//比较鸡肋的功能：打开串口之后，设置combobox不可选
//        comboBox->setEnabled(false);
//        comboBox_2->setEnabled(false);
//        comboBox_6->setEnabled(false);
//        comboBox_7->setEnabled(false);
//        comboBox_8->setEnabled(false);
        serial->setPortName(comboBox->currentText());
        switch (comboBox_2->currentText().toInt())
        {
            case 1200:
                serial->setBaudRate(QSerialPort::Baud1200);
                break;
            case 2400:
                serial->setBaudRate(QSerialPort::Baud2400);
                break;
            case 4800:
                serial->setBaudRate(QSerialPort::Baud4800);
                break;
            case 9600:
                serial->setBaudRate(QSerialPort::Baud9600);
                break;
            case 19200:
                serial->setBaudRate(QSerialPort::Baud19200);
                break;
            case 38400:
                serial->setBaudRate(QSerialPort::Baud38400);
                break;
            case 57600:
                serial->setBaudRate(QSerialPort::Baud57600);
                break;
            case 115200:
                serial->setBaudRate(QSerialPort::Baud115200);
                break;
        }
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->setStopBits(QSerialPort::OneStop);
        if(serial->open(QIODevice::ReadWrite))
        {
            QObject::connect(serial,&QSerialPort::readyRead,this,[=]()
            {
                timer->start(100);
                buffer.append(serial->readAll());//将读到的数据放入缓冲区
            });
            QObject::connect(timer,&QTimer::timeout,this,&Ui_MainWindow::on_timer_timerout_readComData);
//            QObject::connect(timer, SIGNAL(timeout()),this, SLOT(on_timer_timerout_readComData()));
//            timer->start(1000);
//            QObject::connect(serial,&QSerialPort::readyRead,this,&Ui_MainWindow::on_timer_timerout_readComData);
        }
        else
        {
            QMessageBox::about(NULL, "提示", "串口没有打开！");
            serial->clear();
            serial->close();
            return;
        }

    }
    void on_timer_timerout_readComData()
    {
//        QByteArray info = serial->readAll();
//        if(!info.isEmpty())
//        {
//            auto text = this->textBrowser->toPlainText();
//            text.append("["+time.currentTime().toString("hh:mm:ss.zzz")+"]"+"receive:");
//            text.append(info.data()).append("\n");
//            textBrowser->setText(text);
//            textBrowser->moveCursor(QTextCursor::End);
//        }
        timer->stop();
        if(!buffer.isEmpty())
        {
            auto text = this->textBrowser->toPlainText();
            text.append("["+time.currentTime().toString("hh:mm:ss.zzz")+"]"+"receive:");
            text.append(buffer.data()).append("\n");
            textBrowser->setText(text);
            textBrowser->moveCursor(QTextCursor::End);
        }
        buffer.clear();
    }
    void on_pushButton_3_clicked()
    {
        QString text = textEdit->toPlainText();
        auto browser_text = this->textBrowser->toPlainText();
        browser_text.append("["+time.currentTime().toString("hh:mm:ss.zzz")+"]"+"send:"+text+"\n");
        textBrowser->setText(browser_text);
        textBrowser->moveCursor(QTextCursor::End);
        text = text.append("\r\n");
        serial->write(text.toLocal8Bit());

        QObject::connect(serial, &QSerialPort::readyRead,this,&Ui_MainWindow::on_timer_timerout_readComData);
    }
    void on_pushButton_5_clicked()
    {
        QString command("AT+PVTCMD=EVM,RXS,1,CH");
        command.append("\r\n");
        serial->write(command.toLocal8Bit());

        command = "AT+PVTCMD=EVM,RXS,0,CH";
        command.append("\r\n");
        serial->write(command.toLocal8Bit());

        command = "AT+PVTCMD=EVM,RXS,INFO";
        command.append("\r\n");
        serial->write(command.toLocal8Bit());
    }
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LIGHTNINGSEMI_H
