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

class Ui_MainWindow : public QMainWindow
{
    QOBJECT_H
public:
    explicit Ui_MainWindow(QWidget *parent = nullptr);
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

    void setupUi();
    void retranslateUi();
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
