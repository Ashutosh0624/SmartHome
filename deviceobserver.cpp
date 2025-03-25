#include "deviceobserver.h"

deviceObserver::deviceObserver(QObject *parent)
    : QObject{parent}
{}

void deviceObserver::fanOnChanged()
{
    qDebug()<<"Fan status changed!!";
}

void deviceObserver::lightOnChanged()
{
    qDebug()<<"Light status changed!!";
}
