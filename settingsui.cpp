#include "settingsui.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

SettingsUI::SettingsUI(QWidget *parent)
{
    setupUI();
}

void SettingsUI::setupUI()
{
    m_h_layout_main = new QHBoxLayout{};
    m_v_layout_main_left = new QVBoxLayout{};
    m_v_layout_main_right = new QVBoxLayout{};

    m_h_layout_main->addLayout(m_v_layout_main_left);
    m_h_layout_main->addLayout(m_v_layout_main_right);

    m_v_layout_main_left->addWidget(new QLabel{"Bot Tokens"});
    
    QHBoxLayout *discordBotToken = new QHBoxLayout{};
    discordBotToken->addWidget(new QLabel{"Discord Bot Token:"});
    QLineEdit *discordBotTokenLineEdit = new QLineEdit{};
    // Hide the text in the line edit
    discordBotTokenLineEdit->setEchoMode(QLineEdit::Password);
    discordBotTokenLineEdit->setPlaceholderText("Enter your Discord Bot Token");
    discordBotToken->addWidget(discordBotTokenLineEdit);
    m_v_layout_main_right->addLayout(discordBotToken);

    QHBoxLayout *telegramBotToken = new QHBoxLayout{};
    telegramBotToken->addWidget(new QLabel{"Telegram Bot Token:"});
    QLineEdit *telegramBotTokenLineEdit = new QLineEdit{};
    // Hide the text in the line edit
    telegramBotTokenLineEdit->setEchoMode(QLineEdit::Password);
    telegramBotTokenLineEdit->setPlaceholderText("Enter your Telegram Bot Token");
    telegramBotToken->addWidget(telegramBotTokenLineEdit);
    m_v_layout_main_right->addLayout(telegramBotToken);

    // Save button
    m_v_layout_main_right->addWidget(new QPushButton{"Save"});

    setLayout(m_h_layout_main);
}
