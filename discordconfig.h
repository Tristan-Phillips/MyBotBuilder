#ifndef DISCORDCONFIG_H
#define DISCORDCONFIG_H

#include <QObject>
#include <QJsonObject>
#include "config.h"

class DiscordConfig : public Config
{
public:
    bool loadConfig(const QString &filePath) override;
    std::string getBotToken() const override;
    QString getSetting(const QString &key) const override;
private:
    QJsonObject m_config;
};

#endif // DISCORDCONFIG_H
