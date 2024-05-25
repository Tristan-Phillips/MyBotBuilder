#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <QObject>

class Scheduler : public QObject
{
    Q_OBJECT
public:
    explicit Scheduler(QObject *parent = nullptr);

signals:
};

#endif // SCHEDULER_H
