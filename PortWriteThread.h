#ifndef LIGHTSEMI_PORTWRITETHREAD_H
#define LIGHTSEMI_PORTWRITETHREAD_H
#include <QObject>
#include <QTimer>
#include <QMutex>



class PortWriteThread : public QObject
{
    Q_OBJECT
public:
    PortWriteThread();
    ~PortWriteThread();

    void CloseThread();
signals:
    void ThreadStop();

    void SendWriteData(QString);

public slots:
    void Run();

    void Addstr(QString);

private:
    void RunThread();

private:
    QTimer* _timer;
    QMutex _mux;
    QList<QString> _list;

    bool _isClose = false;
};
#endif //LIGHTSEMI_PORTWRITETHREAD_H
