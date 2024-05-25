#include "settingsui.h"
#include <QLabel>
#include <QLineEdit>

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
    
    QHBoxLayout *botTokenLayout = new QHBoxLayout{};
    botTokenLayout->addWidget(new QLabel{"Discord Bot:"});
    botTokenLayout->addWidget(new QLineEdit{});
    m_v_layout_main_right->addLayout(botTokenLayout);

    // Save button
    m_v_layout_main_right->addWidget(new QPushButton{"Save"});

    setLayout(m_h_layout_main);
}
