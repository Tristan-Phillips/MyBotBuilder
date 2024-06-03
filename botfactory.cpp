#include "botfactory.h"

static BotFactory* getInstance()
{
    static BotFactory instance;
    return &instance;
}

Bot* BotFactory::createBot()
{
    return new Bot();
}

void BotFactory::destroyBot(Bot *bot)
{
    delete bot;
}
