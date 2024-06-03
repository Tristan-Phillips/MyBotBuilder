#include "botdiscord.h"

BotDiscord::BotDiscord(std::string apiToken)
{
    this->m_apiToken = apiToken;
    // this->bot = new dpp::Bot(apiToken); <- Pseudo code
    // this->bot->start(); <- Pseudo code
}
