#include <QDebug>
#include "PortReadThread.h"

PortReadThread::PortReadThread()
{
    qDebug()<<"创建serialcontroller成功";
}
PortReadThread::~PortReadThread()
{

}

void PortReadThread::Run()
{
    _timer = new QTimer();
    this->connect(_timer,&QTimer::timeout,this,&PortReadThread::RunThread);
    _timer->start(100);
}
void PortReadThread::RunThread()
{
    qDebug()<<"读取线程";
}