#ifndef DEVICEOBSERVER_H
#define DEVICEOBSERVER_H

#include <QObject>
#include <QDebug>

class deviceObserver : public QObject
{
    Q_OBJECT
public:
    explicit deviceObserver(QObject *parent = nullptr);

signals:

public slots:
    void fanOnChanged();
    void lightOnChanged();
};

#endif // DEVICEOBSERVER_H
