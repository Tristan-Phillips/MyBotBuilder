#ifndef BOT_H
#define BOT_H

#include <QObject>

class Bot : public QObject
{
    Q_OBJECT
public:
    virtual ~Bot() {}
    virtual void setupAPI() = 0;
    virtual QString getPlatformName() const = 0;

signals:
};

#endif // BOT_H
