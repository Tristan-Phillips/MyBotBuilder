#ifndef XMLHANDLER_H
#define XMLHANDLER_H

#include <QObject>
#include "pugixml.hpp"

class XMLHandler : public QObject
{
    Q_OBJECT
public:
    virtual void writeBotConfigure() = 0;
};

#endif // XMLHANDLER_H
