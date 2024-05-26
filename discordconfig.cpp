#include "discordconfig.h"
#include <iostream>
#include <ostream>

bool DiscordConfig::loadConfig(const QString &filePath)
{
}

std::string DiscordConfig::getBotToken() const
{
    QByteArray token = qgetenv("DISCORD_BOT_TOKEN");
        if (token.isEmpty()) {
            std::cerr << "DISCORD_BOT_TOKEN is not set. Please set it and try again." << std::endl;
            exit(1);
        }
        // return the token as a QString
        return token.toStdString();
}

QString DiscordConfig::getSetting(const QString &key) const
{
}
