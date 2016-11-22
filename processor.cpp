#include <QDebug>
#include "processor.h"

Processor::Processor(QObject *parent) : QObject(parent)
{

}

void Processor::onMenuClicked(const QString &str)
{
    qDebug() << str;
}
