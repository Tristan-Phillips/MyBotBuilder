#ifndef TELEGRAMCONFIG_H
#define TELEGRAMCONFIG_H

#include <QObject>
#include <QJsonObject>
#include "config.h"

class TelegramConfig : public Config
{
public:
    bool loadConfig(const QString &filePath) override;
    QString getBotToken() const override;
    QString getSetting(const QString &key) const override;
private:
    QJsonObject m_config;
};

#endif // TELEGRAMCONFIG_H
