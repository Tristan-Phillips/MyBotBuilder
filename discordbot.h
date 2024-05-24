#ifndef DISCORDBOT_H
#define DISCORDBOT_H

#include <QObject>
#include "bot.h"

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
};

#endif // DISCORDBOT_H
