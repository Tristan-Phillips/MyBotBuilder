#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>
#include <QString>

class Config
{
public:
    virtual ~Config() = default;
    virtual bool loadConfig(const QString &filePath) = 0;
    virtual QString getBotToken() const = 0;
    virtual QString getSetting(const QString &key) const = 0;
};

#endif // CONFIG_H
