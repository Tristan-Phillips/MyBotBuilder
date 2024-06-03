#ifndef BOTDISCORD_H
#define BOTDISCORD_H

#include "bot.h"
#include <dpp/dpp.h>

class BotDiscord : public Bot
{
    /*
    * This class is a bot class for Discord.
    * This is meant to create instances of Discord bots.
    * Each bot instance will represent an individual bot.
    */
public:
    BotDiscord(std::string apiToken);
private:
    std::string apiToken;
    dpp::Bot* bot;
};

#endif // BOTDISCORD_H
