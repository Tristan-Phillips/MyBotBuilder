#ifndef TELEGRAMBOT_H
#define TELEGRAMBOT_H

#include <QObject>
#include "bot.h"

class TelegramBot : public Bot
{
public:
    explicit TelegramBot(QObject *parent = nullptr);
    void setupAPI() override;

    QString getPlatformName() const override {
        return "Telegram";
    }
};

#endif // TELEGRAMBOT_H
