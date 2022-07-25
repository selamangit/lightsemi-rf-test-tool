#include "SerialPort.h"
#include "lightningsemi.h"

SerialPort::SerialPort(QObject *parent):QObject(parent)
{

}
SerialPort::~SerialPort()
{
    delete _port;
}
void SerialPort::Run()
{
    qDebug()<<"Run:"<<QThread::currentThreadId();
    _port = new QSerialPort();
    this->connect(_port,&QSerialPort::readyRead, this, &SerialPort::ReadyReadSlot);
}

void SerialPort::ReadyReadSlot()
{
    qDebug()<<"ReadyReadSlot:"<<QThread::currentThreadId();
    if(_port->bytesAvailable() > 0)
    {
        QByteArray bytes = _port->readAll();
        if(!bytes.isEmpty())
        {
            emit SendReadData(bytes);
            _port->waitForReadyRead(100);
        }
    }
}

//void SerialPort::ReadyWriteSlot(QString msg)
//{
//    qDebug()<<"ReadyWriteSlot:"<<QThread::currentThreadId();
//    qDebug()<<"send QString";
//    ReadyOpenPort();
//    _port->write(msg.toLocal8Bit());
//    _port->waitForReadyRead(100);
//    qDebug()<<msg.toLocal8Bit();
//}
void SerialPort::ReadyWriteSlot(QByteArray msg)
{
    qDebug()<<"ReadyWriteSlot:"<<QThread::currentThreadId();
    qDebug()<<"send QByteArray";
    qDebug() << msg.toHex();
//    ReadyOpenPort();
    _port->write(msg);
    _port->waitForReadyRead(100);
}
void SerialPort::ReadyOpenPort()
{
    if(_port->isOpen())
    {
        _port->clear();
        _port->close();
    }
    qDebug()<<"ReadyOpenPort:"<<QThread::currentThreadId();
    if(_port->open(QIODevice::ReadWrite))
    {
        emit PortIsOpen();
    }
    else
    {
        emit PortNotOpen();
    }
}
void SerialPort::ReadyClosePort()
{
    if(_port->isOpen())
    {
        _port->clear();
        _port->close();
        emit PortNotOpen();
    }
}
