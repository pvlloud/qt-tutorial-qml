#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "processor.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QObject *firstRootItem = engine.rootObjects().first();
    Processor myProcessor;
    QObject::connect(firstRootItem, SIGNAL(menuClicked(QString)), &myProcessor, SLOT(onMenuClicked(QString)));

    return app.exec();
}
