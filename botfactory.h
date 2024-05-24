#ifndef BOTFACTORY_H
#define BOTFACTORY_H

#include <QObject>
#include "bot.h"
#include "discordbot.h"
#include "telegrambot.h"

enum class PlatformType {
    Discord,
    Telegram
};

class BotFactory
{
public:
    static Bot* createBot(PlatformType platformType) {
        switch (platformType) {
        case PlatformType::Discord:
            return new DiscordBot();
        case PlatformType::Telegram:
            return new TelegramBot();
        default:
            return nullptr;
        }
    }
};

#endif // BOTFACTORY_H
