#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include <QObject>

class CommandHandler : public QObject
{
    Q_OBJECT
public:
    explicit CommandHandler(QObject *parent = nullptr);

signals:
};

#endif // COMMANDHANDLER_H