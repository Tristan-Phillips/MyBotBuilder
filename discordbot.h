#ifndef DISCORDBOT_H
#define DISCORDBOT_H

#include <QObject>
#include <dpp/dpp.h>
#include "bot.h"
#include "discordconfig.h"

class DiscordBot : public Bot
{
public:
    explicit DiscordBot(QObject *parent = nullptr);
    void setupAPI() override {
        // Discord-specific API setup
    }

    QString getPlatformName() const override {
        return "Discord";
    }
private:
    dpp::cluster *m_cluster;
    DiscordConfig m_config;
};

#endif // DISCORDBOT_H
