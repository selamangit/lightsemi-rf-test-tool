#ifndef LIGHTSEMI_SERIALPORT_H
#define LIGHTSEMI_SERIALPORT_H
#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QByteArray>
#include <QtCore/QList>
#include <QMutex>


class SerialPort : public QObject
{
    Q_OBJECT
public:
    QSerialPort *_port;


    explicit SerialPort(QObject *parent = nullptr);

    ~SerialPort() override;

    void CloseThread();

    void Run();

public slots:

//    void ReadyWriteSlot(QString msg);

    void ReadyWriteSlot(QByteArray msg);

    void ReadyReadSlot();

    void ReadyOpenPort();

    void ReadyClosePort();

signals:
    void ThreadStop();

    void SendReadData(QByteArray);

    void PortNotOpen();

    void PortIsOpen();

private:

};

#endif //LIGHTSEMI_SERIALPORT_H