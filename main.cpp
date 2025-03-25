#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include "devicecontroller.h"
#include "deviceobserver.h"
#include <QObject>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    deviceController controller;
    deviceObserver  observer;

    QObject::connect(&controller, &deviceController::fanOnChanged, &observer, &deviceObserver::fanOnChanged);
    QObject::connect(&controller, &deviceController::lightOnChanged, &observer, &deviceObserver::lightOnChanged);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("controller", &controller);

    //const QUrl url(u"qrc:/main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("SmartHomeProject", "Main");

    return app.exec();
}
