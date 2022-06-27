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
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMutex>
#include <QThread>

class SerialPort;
class PortWriteThread;
class PortReadThread;
QT_BEGIN_NAMESPACE

class Ui_MainWindow : public QMainWindow
{
Q_OBJECT
public:
    explicit Ui_MainWindow(QWidget *parent = nullptr);
public:
    QStringList QList;
    QTime time;
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
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_10;
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
    QGridLayout *gridLayout_8;
    QWidget *tab_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QGridLayout *gridLayout_3;
    QWidget *tab_6;
    QPushButton *pushButton_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    SerialPort *serialPort;

    void setupUi();

    void retranslateUi();

    void ShowPort();

    void createConnect();

    void SerialPort_Init();

public slots:
    void comboBox_5_currentIndexChanged(int i);

    void InitPort();

    void SendCommand();

    void Single_Rx_Test();

    void Multiple_Test(bool flag);

    void ShowData(QString msg);

    void ClearBrowser();

    void IsPortNotOpen();

    void Tx_Test();

signals:
    void OpenPort();

    void WritePort(QString msg);

    void IsMultiple_Test(bool flag);

private:
    QMutex _mux;

    PortWriteThread* writeObj;
    PortReadThread* readObj;
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LIGHTNINGSEMI_H
