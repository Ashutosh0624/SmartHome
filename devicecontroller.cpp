#include "devicecontroller.h"

deviceController::deviceController(QObject *parent)
    : QObject{parent}
{
    this->m_fanOn = false;
    this->m_lightOn = false;
}

bool deviceController::fanOn() const
{
    return this->m_fanOn;
}

void deviceController::setFanOn(bool on)
{
    if(!m_fanOn){
        this->m_fanOn = on;
        emit fanOnChanged();
    }
    if(m_fanOn){
        this->m_fanOn = on;
        emit fanOnChanged();
    }
}

bool deviceController::lightOn() const
{
    return this->m_lightOn;
}

void deviceController::setLightOn(bool on)
{
    if(!m_lightOn){
        this->m_lightOn = on;
        emit lightOnChanged();
    }
    if(m_lightOn){
        this->m_lightOn = on;
        emit lightOnChanged();
    }
}

void deviceController::toggleFan()
{
    setFanOn(!m_fanOn);
}

void deviceController::toggleLight()
{
    setLightOn(!m_lightOn);
}
