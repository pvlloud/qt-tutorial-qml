#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <QObject>

class Processor : public QObject
{
    Q_OBJECT
public:
    explicit Processor(QObject *parent = 0);

//signals:

public slots:
    void onMenuClicked(const QString &str);
};

#endif // PROCESSOR_H
