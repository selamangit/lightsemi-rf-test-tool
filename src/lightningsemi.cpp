#include "lightningsemi.h"
#include "SerialPort.h"
//#include "PortWriteThread.h"
//#include "PortReadThread.h"

Ui_MainWindow::Ui_MainWindow(QWidget *parent): QMainWindow(parent)
{
    cmdbytes = new QByteArray;
    setupUi();
    serialPort = new SerialPort();
    portThread = new QThread();
    serialPort->moveToThread(portThread);
    this->connect(serialPort,&SerialPort::ThreadStop,portThread,&QThread::quit);
    this->connect(portThread,&QThread::finished,serialPort,&SerialPort::deleteLater);
    this->connect(portThread,&QThread::finished,portThread,&QThread::deleteLater);
    this->connect(portThread,&QThread::started,serialPort,&SerialPort::Run);
    this->connect(serialPort,&SerialPort::SendReadData,this,&Ui_MainWindow::ShowData);

    portThread->start();

//    readObj = new PortReadThread();
//    QThread *readThread = new QThread();
//    readObj->moveToThread(readThread);
//    this->connect(readThread,&QThread::started,readObj,&PortReadThread::Run);
//    this->connect(readObj,&PortReadThread::ThreadStop,readThread,&QThread::quit);
//    this->connect(readThread,&QThread::finished,readObj,&PortReadThread::deleteLater);
//    this->connect(readThread,&QThread::finished,readThread,&QThread::deleteLater);

    createConnect();

}

void Ui_MainWindow::setupUi()
{
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("MainWindow"));
    this->resize(1061, 710);

    QIcon icon;
    this->setWindowIcon(QIcon("data/logo008.png"));

    actiond = new QAction(this);
    actiond->setObjectName(QString::fromUtf8("actiond"));

    centralwidget = new QWidget(this);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setMinimumSize(800,700);

    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    verticalSpacer_12 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_12, 15, 10, 6, 1);

    gridFrame_3 = new QFrame(centralwidget);
    gridFrame_3->setObjectName(QString::fromUtf8("gridFrame_3"));
    gridLayout_5 = new QGridLayout(gridFrame_3);
    gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
    label_8 = new QLabel(gridFrame_3);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_8->setAlignment(Qt::AlignCenter);

    gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

    comboBox_6 = new QComboBox(gridFrame_3);
    comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
    comboBox_6->addItem("None");
    for(int i=1;i<=40;i++)
    {
        comboBox_6->addItem(QString::number(i-1));
    }
    comboBox_6->setCurrentIndex(0);

    gridLayout_5->addWidget(comboBox_6, 0, 1, 1, 1);

    pushButton_7 = new QPushButton(gridFrame_3);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

    gridLayout_5->addWidget(pushButton_7, 1, 0, 1, 1);

    pushButton_10 = new QPushButton(gridFrame_3);
    pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

    gridLayout_5->addWidget(pushButton_10, 1, 1, 1, 1);

    pushButton_13 = new QPushButton(gridFrame_3);
    pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

    gridLayout_5->addWidget(pushButton_13, 2, 0, 1, 1);

    pushButton_14 = new QPushButton(gridFrame_3);
    pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

    gridLayout_5->addWidget(pushButton_14, 2, 1, 1, 1);


    gridLayout->addWidget(gridFrame_3, 10, 0, 1, 2);

    horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_4, 27, 3, 1, 1);

    line = new QFrame(centralwidget);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line, 23, 3, 1, 5);

    line_5 = new QFrame(centralwidget);
    line_5->setObjectName(QString::fromUtf8("line_5"));
    line_5->setFrameShape(QFrame::HLine);
    line_5->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_5, 8, 0, 1, 2);

    verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_2, 22, 10, 3, 1);

    verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_7, 6, 10, 3, 1);

    line_3 = new QFrame(centralwidget);
    line_3->setObjectName(QString::fromUtf8("line_3"));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_3, 11, 0, 1, 2);

    verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_3, 3, 10, 1, 1);

    verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_18, 25, 10, 1, 1);

    horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_13, 27, 5, 1, 1);

    gridFrame_2 = new QFrame(centralwidget);
    gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
    gridLayout_7 = new QGridLayout(gridFrame_2);
    gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
    comboBox_3 = new QComboBox(gridFrame_2);
    comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
    comboBox_3->clear();
    comboBox_3->addItem(QString("None"));

    gridLayout_7->addWidget(comboBox_3, 1, 1, 1, 1);

    pushButton_6 = new QPushButton(gridFrame_2);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

    gridLayout_7->addWidget(pushButton_6, 4, 0, 1, 1);

    label_5 = new QLabel(gridFrame_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_5->setAlignment(Qt::AlignCenter);

    gridLayout_7->addWidget(label_5, 1, 0, 1, 1);

    comboBox_5 = new QComboBox(gridFrame_2);
    comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
    QList.clear();
    QList<<QString("BL")<<QString("G")<<QString("N");
    comboBox_5->clear();
    comboBox_5->addItem(QString("None"));
    comboBox_5->addItems(QList);
    comboBox_5->setCurrentIndex(0);

    gridLayout_7->addWidget(comboBox_5, 0, 1, 1, 1);

    pushButton_8 = new QPushButton(gridFrame_2);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

    gridLayout_7->addWidget(pushButton_8, 4, 1, 1, 1);

    pushButton_11 = new QPushButton(gridFrame_2);
    pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

    gridLayout_7->addWidget(pushButton_11, 3, 1, 1, 1);

    comboBox_4 = new QComboBox(gridFrame_2);
    comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
    comboBox_4->addItem("None");
    for(int i=1;i<=14;i++)
    {
        comboBox_4->addItem(QString::number(i-1));
    }
    comboBox_4->setCurrentIndex(0);

    gridLayout_7->addWidget(comboBox_4, 2, 1, 1, 1);

    label_3 = new QLabel(gridFrame_2);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_3->setAlignment(Qt::AlignCenter);

    gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

    pushButton_9 = new QPushButton(gridFrame_2);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

    gridLayout_7->addWidget(pushButton_9, 5, 0, 1, 2);

    pushButton_5 = new QPushButton(gridFrame_2);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

    gridLayout_7->addWidget(pushButton_5, 3, 0, 1, 1);

    label_6 = new QLabel(gridFrame_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_6->setAlignment(Qt::AlignCenter);

    gridLayout_7->addWidget(label_6, 2, 0, 1, 1);


    gridLayout->addWidget(gridFrame_2, 7, 0, 1, 2);

    label_10 = new QLabel(centralwidget);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Consolas\";"));

    gridLayout->addWidget(label_10, 1, 0, 1, 1);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 27, 0, 1, 1);

    horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_2, 27, 4, 1, 1);

    gridFrame_4 = new QFrame(centralwidget);
    gridFrame_4->setObjectName(QString::fromUtf8("gridFrame_4"));
    gridLayout_2 = new QGridLayout(gridFrame_4);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    pushButton = new QPushButton(gridFrame_4);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setStyleSheet(QString::fromUtf8(""));

    gridLayout_2->addWidget(pushButton, 6, 1, 1, 1);

    comboBox = new QComboBox(gridFrame_4);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));

    gridLayout_2->addWidget(comboBox, 2, 1, 1, 2);

    pushButton_4 = new QPushButton(gridFrame_4);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setStyleSheet(QString::fromUtf8(""));

    gridLayout_2->addWidget(pushButton_4, 6, 0, 1, 1);

    pushButton_12 = new QPushButton(gridFrame_4);
    pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

    gridLayout_2->addWidget(pushButton_12, 6, 2, 1, 1);

    label_2 = new QLabel(gridFrame_4);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_2->setAlignment(Qt::AlignCenter);

    gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

    label_4 = new QLabel(gridFrame_4);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
    label_4->setAlignment(Qt::AlignCenter);

    gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

    comboBox_2 = new QComboBox(gridFrame_4);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

    gridLayout_2->addWidget(comboBox_2, 3, 1, 1, 2);


    gridLayout->addWidget(gridFrame_4, 2, 0, 3, 2);

    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer, 1, 10, 2, 1);

    verticalFrame = new QFrame(centralwidget);
    verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
    verticalLayout_4 = new QVBoxLayout(verticalFrame);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    pushButton_3 = new QPushButton(verticalFrame);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));

    verticalLayout_4->addWidget(pushButton_3);

    pushButton_2 = new QPushButton(verticalFrame);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));

    verticalLayout_4->addWidget(pushButton_2);


    gridLayout->addWidget(verticalFrame, 24, 7, 2, 1);

    horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_9, 27, 7, 1, 1);

    horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_14, 27, 6, 1, 1);

    label_7 = new QLabel(centralwidget);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"Consolas\";"));

    gridLayout->addWidget(label_7, 6, 0, 1, 1);

    verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_4, 4, 10, 2, 1);

    horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_10, 27, 1, 1, 1);

    label_11 = new QLabel(centralwidget);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setStyleSheet(QString::fromUtf8("font: 10pt \"Consolas\";"));

    gridLayout->addWidget(label_11, 9, 0, 1, 1);

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


    gridLayout->addWidget(gridWidget, 24, 3, 2, 4);

    line_2 = new QFrame(centralwidget);
    line_2->setObjectName(QString::fromUtf8("line_2"));
    line_2->setFrameShape(QFrame::HLine);
    line_2->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_2, 5, 0, 1, 2);

    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setStyleSheet(QString::fromUtf8("font: 15pt \"Consolas\";"));
    label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label, 0, 5, 1, 1);

    textBrowser = new QTextBrowser(centralwidget);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

    gridLayout->addWidget(textBrowser, 1, 3, 22, 5);

    verticalSpacer_11 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(verticalSpacer_11, 9, 10, 6, 1);

    line_4 = new QFrame(centralwidget);
    line_4->setObjectName(QString::fromUtf8("line_4"));
    line_4->setFrameShape(QFrame::VLine);
    line_4->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_4, 1, 2, 25, 1);

    this->setCentralWidget(centralwidget);
    menuBar = new QMenuBar(this);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 1061, 23));
    menuabout = new QMenu(menuBar);
    menuabout->setObjectName(QString::fromUtf8("menuabout"));
    this->setMenuBar(menuBar);
    statusBar = new QStatusBar(this);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    this->setStatusBar(statusBar);

    timestamp = new QLabel(tr("串口状态："));
    status = new QLabel(tr("串口未打开"));
    statusBar->addWidget(timestamp);
    statusBar->addWidget(status,1);
    statusBar->setSizeGripEnabled(false);

    menuBar->addAction(menuabout->menuAction());

    retranslateUi();
    ShowPort();

    QMetaObject::connectSlotsByName(this);
}

void Ui_MainWindow::retranslateUi()
{
    this->setWindowTitle(QCoreApplication::translate("MainWindow", "测试工具v1.0", nullptr));
    actiond->setText(QCoreApplication::translate("MainWindow", "d ", nullptr));
    label_8->setText(QCoreApplication::translate("MainWindow", "\344\277\241\351\201\223", nullptr));
    pushButton_7->setText(QCoreApplication::translate("MainWindow", "RX\346\265\213\350\257\225", nullptr));
    pushButton_10->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225", nullptr));
    pushButton_13->setText(QCoreApplication::translate("MainWindow", "RX\346\265\213\350\257\225\347\273\223\346\235\237", nullptr));
    pushButton_14->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225\347\273\223\346\235\237", nullptr));
    pushButton_6->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255RX\346\265\213\350\257\225", nullptr));
    label_5->setText(QCoreApplication::translate("MainWindow", "\351\200\237\347\216\207", nullptr));
    pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242RX\346\265\213\350\257\225", nullptr));
    pushButton_11->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226RX\346\225\260\346\215\256", nullptr));
    label_3->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217", nullptr));
    pushButton_9->setText(QCoreApplication::translate("MainWindow", "TX\346\265\213\350\257\225", nullptr));
    pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\254\241RX\346\265\213\350\257\225", nullptr));
    label_6->setText(QCoreApplication::translate("MainWindow", "\344\277\241\351\201\223", nullptr));
    label_10->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
    pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
    pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    pushButton_12->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267:", nullptr));
    label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207:", nullptr));
    pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\214\207\344\273\244", nullptr));
    pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\344\270\262\345\217\243\344\277\241\346\201\257", nullptr));
    label_7->setText(QCoreApplication::translate("MainWindow", "wifi\346\265\213\350\257\225", nullptr));
    label_11->setText(QCoreApplication::translate("MainWindow", "\350\223\235\347\211\231\346\265\213\350\257\225", nullptr));
    label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\344\277\241\346\201\257", nullptr));
    menuabout->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));

} // retranslateUi

void Ui_MainWindow::ShowPort()
{
    status->setText(tr("串口未打开"));
    comboBox->clear();
    comboBox_2->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        comboBox->addItem(info.portName());
    }
    QList.clear();
    QList<<"None"<<"1200"<<"2400"<<"4800"<<"9600"
         <<"19200"<<"38400"<<"57600"<<"115200";
    comboBox_2->addItems(QList);
}

void Ui_MainWindow::createConnect()
{
    QObject::connect(pushButton_4, &QPushButton::clicked,this, &Ui_MainWindow::InitPort);
    QObject::connect(comboBox_5, static_cast<void(QComboBox::*)(int index)>(&QComboBox::currentIndexChanged),this, &Ui_MainWindow::comboBox_5_currentIndexChanged);
    QObject::connect(pushButton_3,&QPushButton::clicked,this,&Ui_MainWindow::SendCommand);
    QObject::connect(pushButton_5,&QPushButton::clicked,this,&Ui_MainWindow::Single_Rx_Test);
    QObject::connect(this,&Ui_MainWindow::OpenPort,serialPort,&SerialPort::ReadyOpenPort);
    QObject::connect(this,&Ui_MainWindow::WritePort,serialPort,&SerialPort::ReadyWriteSlot);

    QObject::connect(pushButton_6,&QPushButton::clicked,this,&Ui_MainWindow::Multiple_Test);
    QObject::connect(pushButton_8,&QPushButton::clicked,this,&Ui_MainWindow::Stop_Multiple_Test);
    QObject::connect(pushButton_2,&QPushButton::clicked,this,&Ui_MainWindow::ClearBrowser);
    QObject::connect(serialPort,&SerialPort::PortNotOpen,this,&Ui_MainWindow::IsPortNotOpen);
    QObject::connect(serialPort,&SerialPort::PortIsOpen,this,&Ui_MainWindow::IsPortOpen);
    QObject::connect(pushButton_12,&QPushButton::clicked,this,&Ui_MainWindow::ShowPort);

    QObject::connect(serialPort,&SerialPort::PortNotOpen,this,&Ui_MainWindow::ShowPort);
    QObject::connect(pushButton,&QPushButton::clicked,serialPort,&SerialPort::ReadyClosePort);

    QObject::connect(pushButton_9,&QPushButton::clicked,this,&Ui_MainWindow::Tx_Test);
    QObject::connect(pushButton_10,&QPushButton::clicked,this,&Ui_MainWindow::Ble_Tx_Test);
    QObject::connect(pushButton_7,&QPushButton::clicked,this,&Ui_MainWindow::Ble_Rx_Test);
    QObject::connect(pushButton_11,&QPushButton::clicked,this,&Ui_MainWindow::Read_Rx_Info);

    QObject::connect(pushButton_13,&QPushButton::clicked,this,&Ui_MainWindow::Stop_Ble_Rx_Test);
    QObject::connect(pushButton_14,&QPushButton::clicked,this,&Ui_MainWindow::Stop_Ble_Tx_Test);
}

void Ui_MainWindow::comboBox_5_currentIndexChanged(int i)
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

void Ui_MainWindow::InitPort()
{
    SerialPort_Init();
}

void Ui_MainWindow::SerialPort_Init()
{
    serialPort->_port->setPortName(comboBox->currentText());
    if(comboBox_2->currentText() == "None")
    {
        serialPort->ReadyClosePort();
        return ;
    }
    switch (comboBox_2->currentText().toInt())
    {
        case 1200:
            serialPort->_port->setBaudRate(QSerialPort::Baud1200);
            break;
        case 2400:
            serialPort->_port->setBaudRate(QSerialPort::Baud2400);
            break;
        case 4800:
            serialPort->_port->setBaudRate(QSerialPort::Baud4800);
            break;
        case 9600:
            serialPort->_port->setBaudRate(QSerialPort::Baud9600);
            break;
        case 19200:
            serialPort->_port->setBaudRate(QSerialPort::Baud19200);
            break;
        case 38400:
            serialPort->_port->setBaudRate(QSerialPort::Baud38400);
            break;
        case 57600:
            serialPort->_port->setBaudRate(QSerialPort::Baud57600);
            break;
        case 115200:
            serialPort->_port->setBaudRate(QSerialPort::Baud115200);
            break;
    }
    serialPort->_port->setDataBits(QSerialPort::Data8);
    serialPort->_port->setParity(QSerialPort::NoParity);
    serialPort->_port->setFlowControl(QSerialPort::NoFlowControl);
    serialPort->_port->setStopBits(QSerialPort::OneStop);
    emit OpenPort();
}

void Ui_MainWindow::ShowData(QByteArray msg)
{
    if(mode == 2)
    {
        auto browser_text = this->textBrowser->toPlainText();
        QFont font = QFont("Consolas",12,2);
        textBrowser->setFont(font);
        QString HEX = "0123456789abcdef";
        for(int i=0;i<msg.size();i++)
        {
            browser_text.append(HEX[(msg[i] >> 4) & 0x0f]);
            browser_text.append(HEX[(msg[i]) & 0x0f]);
            browser_text.append(" ");
        }
        browser_text.append("\n");
        textBrowser->setText(browser_text);
        textBrowser->moveCursor(QTextCursor::End);
    }
    else if(mode == 1)
    {
        auto browser_text = this->textBrowser->toPlainText();
        QFont font = QFont("Consolas",12,2);
        textBrowser->setFont(font);
        browser_text.append(msg);
        textBrowser->setText(browser_text);
        textBrowser->moveCursor(QTextCursor::End);
    }
}

void Ui_MainWindow::SendCommand()
{
    mode = 1;
    QString text = textEdit->toPlainText();
    auto browser_text = this->textBrowser->toPlainText();
    QFont font = QFont("Consolas",12,2);
    textBrowser->setFont(font);
    browser_text.append("["+time.currentTime().toString("hh:mm:ss.zzz")+"]"+"send:"+text+"\n");
    textBrowser->setText(browser_text);
    textBrowser->moveCursor(QTextCursor::End);
    text = text.append("\r\n");
    emit WritePort(text.toLocal8Bit());
}

void Ui_MainWindow::Single_Rx_Test()
{
    mode = 1;
    QString command("AT+PVTCMD=EVM,RXS,1,");
    if(comboBox_4->currentText() == "None")
    {
        QMessageBox::information(this,"提示","请选择测试信道！");
    }
    else
    {
        command.append(comboBox_4->currentText());
        command.append("\r\n");
        emit WritePort(command.toLocal8Bit());
    }
}

void Ui_MainWindow::Read_Rx_Info()
{
    mode = 1;
    QString command;
    command = "AT+PVTCMD=EVM,RXS,0,CH";
    command.append("\r\n");
    emit WritePort(command.toLocal8Bit());

    command = "AT+PVTCMD=EVM,RXS,INFO";
    command.append("\r\n");
    emit WritePort(command.toLocal8Bit());
}

void Ui_MainWindow::Multiple_Test()
{
    mode = 1;
    QString command("AT+PVTCMD=EVM,RX,");
    if(comboBox_4->currentText() == "None")
    {
        QMessageBox::information(this,"提示","请选择测试信道！");
    }
    else
    {
        command.append(comboBox_4->currentText());
        command.append("\r\n");
        emit WritePort(command.toLocal8Bit());
    }
}

void Ui_MainWindow::Stop_Multiple_Test()
{
    QString command("AT+PVTCMD=EVM,stop");
    command.append("\r\n");
    emit WritePort(command.toLocal8Bit());
}

void Ui_MainWindow::ClearBrowser()
{
    textBrowser->clear();
}

void Ui_MainWindow::IsPortNotOpen()
{
    status->setText(tr("串口未打开"));
}

void Ui_MainWindow::IsPortOpen()
{
    status->setText(tr("串口打开"));
}

void Ui_MainWindow::Tx_Test()
{
    mode = 1;
    if(comboBox_3->currentText() == "None" || comboBox_4->currentText() == "None" || comboBox_5->currentText() == "None")
    {
        QMessageBox::information(this,"提示","请配置好Tx测试信息");
    }
    else
    {
        QString command("AT+PVTCMD=EVM,TX,");
        command.append(comboBox_5->currentText()+","+comboBox_3->currentText()+","+comboBox_4->currentText()+","+"1024");
        command.append("\r\n");
        emit WritePort(command.toLocal8Bit());
    }
}

void Ui_MainWindow::Ble_Tx_Test()
{
    if(comboBox_6->currentText() != "None")
    {
        mode = 2;
        char bytes_arr_1[]={0x01,0x03,0x0c,0x00};
        QByteArray byt_1;
        QByteArray byt_2;
        byt_1.resize(sizeof(bytes_arr_1));
        for(int i=0;i<sizeof(bytes_arr_1);++i)
        {
            byt_1[i]=(char)bytes_arr_1[i];
        }
        emit WritePort(byt_1);

        char bytes_arr_2[]={0x01,0x1e,0x20,0x03,0x00,0x25,0x00};

        int num = comboBox_6->currentText().toInt();
        QString hex = QString::number(num,16);
        char a;
        a = hex.mid(0, 4).toInt(nullptr, 16);
        bytes_arr_2[4] = a;

        byt_2.resize(sizeof(bytes_arr_2));
        for(int i=0;i<sizeof(bytes_arr_2);++i)
        {
            byt_2[i]=(char)bytes_arr_2[i];
        }
        qDebug()<<byt_2.toHex();
        emit WritePort(byt_2);
    }
    else
    {
        QMessageBox::information(this,"提示","请配置好信道信息");
        return ;
    }
}

void Ui_MainWindow::Stop_Ble_Tx_Test()
{
    QByteArray byt_3;
    char bytes_arr_3[]={0x01,0x1f,0x20,0x00};
    byt_3.resize(sizeof(bytes_arr_3));
    for(int i=0;i<sizeof(bytes_arr_3);++i)
    {
        byt_3[i]=(char)bytes_arr_3[i];
    }
    emit WritePort(byt_3);
}

void Ui_MainWindow::Ble_Rx_Test()
{
    if(comboBox_6->currentText() != "None")
    {
        mode = 2;
        char bytes_arr_1[]={0x01,0x03,0x0c,0x00};
        QByteArray byt_1;
        QByteArray byt_2;

        byt_1.resize(sizeof(bytes_arr_1));
        for(int i=0;i<sizeof(bytes_arr_1);++i)
        {
            byt_1[i]=(char)bytes_arr_1[i];
        }
        emit WritePort(byt_1);

        char bytes_arr_2[]={0x01,0x1d,0x20,0x01,0x00};

        int num = comboBox_6->currentText().toInt();
        QString hex = QString::number(num,16);
        char a;
        a = hex.mid(0, 4).toInt(nullptr, 16);
        bytes_arr_2[4] = a;

        byt_2.resize(sizeof(bytes_arr_2));
        for(int i=0;i<sizeof(bytes_arr_2);++i)
        {
            byt_2[i]=(char)bytes_arr_2[i];
        }
        emit WritePort(byt_2);
    }
    else
    {
        QMessageBox::information(this,"提示","请配置好信道信息");
        return ;
    }
}

void Ui_MainWindow::Stop_Ble_Rx_Test()
{
    QByteArray byt_3;
    char bytes_arr_3[]={0x01,0x1f,0x20,0x00};
    byt_3.resize(sizeof(bytes_arr_3));
    for(int i=0;i<sizeof(bytes_arr_3);++i)
    {
        byt_3[i]=(char)bytes_arr_3[i];
    }
    emit WritePort(byt_3);
}