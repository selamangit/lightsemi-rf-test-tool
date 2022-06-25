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
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "serialcontroller.h"

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
    QGridLayout *gridLayout_8;
    QWidget *tab_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGridLayout *gridLayout_3;
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
    QTimer *timer;
    SerialController *serialController;

    void setupUi();

    void retranslateUi();

    void ShowPort();

    void createConnect();

public slots:
    void on_comboBox_5_currentIndexChanged(int i);
    void on_pushButton_4_clicked();
    void on_timer_timerout_readComData();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LIGHTNINGSEMI_H
