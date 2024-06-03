#ifndef BOTFACTORY_H
#define BOTFACTORY_H
#include "bot.h"

class BotFactory : public Bot
{
    /*
    * This class is a factory class for creating bots.
    * It is a singleton class, so it cannot be instantiated.
    */
public:
    static BotFactory* getInstance();
    Bot* createBot();
    void destroyBot(Bot* bot);
};

#endif // BOTFACTORY_H
