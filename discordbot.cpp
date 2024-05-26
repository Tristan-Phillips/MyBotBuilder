#include "discordbot.h"

DiscordBot::DiscordBot(QObject *parent)
{
    // dpp::cluster bot(m_config.getBotToken());
}

void DiscordBot::setupAPI()
{

}

void DiscordBot::startBot()
{
    // m_cluster->on_log([](const dpp::log_t &log) {
    //     qDebug() << log.message;
    // });
    // m_cluster->on_ready([](const dpp::ready_t & event) {
    //     qDebug() << "Ready";
    // });

    // m_cluster->start(dpp::st_wait);
}

void DiscordBot::registerCommands()
{

}
