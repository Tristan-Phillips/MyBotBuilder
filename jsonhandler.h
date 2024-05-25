#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include <QObject>

class JsonHandler : public QObject
{
    Q_OBJECT
public:
    explicit JsonHandler(QObject *parent = nullptr);

signals:
};

#endif // JSONHANDLER_H
