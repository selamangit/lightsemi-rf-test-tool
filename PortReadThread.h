#ifndef LIGHTSEMI_PORTREADTHREAD_H
#define LIGHTSEMI_PORTREADTHREAD_H
#include <QObject>
#include <QTimer>
#include <QMutex>

class PortReadThread : public QObject
{
Q_OBJECT
public:
    PortReadThread();
    ~PortReadThread();

    void CloseThread();

    void Run();

    void Addstr(QString str);
signals:
    void ThreadStop();

private:
    void RunThread();

private:
    QTimer* _timer;
    QMutex _mux;
    QList<QString> _list;

    bool _isClose = false;
};


#endif //LIGHTSEMI_PORTREADTHREAD_H
