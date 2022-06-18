#ifndef LIGHTSEMI_SERIALCONTROLLER_H
#define LIGHTSEMI_SERIALCONTROLLER_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QByteArray>
#include <QtCore/QList>
#include <QMutex>


class SerialController : public QObject
{
    QOBJECT_H
public:
    QSerialPort *_port;
    explicit SerialController(QObject *parent = nullptr);

    ~SerialController() override;

    void CloseThread();

    void Run();

public slots:
    void ReadyReadSlot();

    void ReadyWriteSlot(QString msg);

signals:
    void ThreadStop();

    void SendReadData(QString);

private:

    //QList<QByteArray> _datalist;
};

#endif //LIGHTSEMI_SERIALCONTROLLER_H
