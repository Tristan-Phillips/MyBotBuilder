#include "dashboardui.h"
#include <QLabel>
#include <QVBoxLayout>

DashboardUI::DashboardUI(QWidget *parent)
    : QWidget{parent}
{
    setupUI();
    sideBarSetup();
}

void DashboardUI::setupUI()
{
    m_layout = new QHBoxLayout{this};
    setLayout(m_layout);
}

void DashboardUI::sideBarSetup()
{
    m_sideBarLayout = new QVBoxLayout{};
    QLabel *sideBarLabel = new QLabel{"Side Bar"};
    m_sideBarLayout->addWidget(sideBarLabel);

    // Setup elements that can display information about the bots live

    m_layout->addLayout(m_sideBarLayout);
}
