#ifndef DEVICECONTROLLER_H
#define DEVICECONTROLLER_H

#include <QObject>
#include<QDebug>

class deviceController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool fanOn READ fanOn WRITE setFanOn NOTIFY fanOnChanged FINAL)
    Q_PROPERTY(bool lightOn READ lightOn WRITE setLightOn NOTIFY lightOnChanged FINAL)
public:
    explicit deviceController(QObject *parent = nullptr);

    bool fanOn() const;
    void setFanOn(bool on);

    bool lightOn() const;
    void setLightOn(bool on);

    Q_INVOKABLE void toggleFan();
    Q_INVOKABLE void toggleLight();

signals:
    void fanOnChanged();
    void lightOnChanged();

private:
    bool m_fanOn;
    bool m_lightOn;
};

#endif // DEVICECONTROLLER_H
