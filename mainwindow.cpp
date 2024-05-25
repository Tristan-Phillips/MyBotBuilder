#include "mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QStatusBar>

#include "dashboardui.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupMenuBar();
    setupStatusBar();
    setupCentralWidget();
    setupConnections();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupMenuBar()
{
    QMenu *menu = menuBar()->addMenu(tr("&File"));
    QMenu *botsMenu = menuBar()->addMenu(tr("&Bots"));

    settingsAction = new QAction(tr("&Settings"), this);
    menu->addAction(settingsAction);

    QAction *exitAction = new QAction(tr("&Exit"), this);
    menu->addAction(exitAction);
    // Connect the exit action to the close() slot of the main window
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);

    QAction *discordBots = new QAction(tr("&Discord"), this);
    botsMenu->addAction(discordBots);

    QAction *telegramBots = new QAction(tr("&Telegram"), this);
    botsMenu->addAction(telegramBots);
}

void MainWindow::setupStatusBar()
{
    statusMessageLabel = new QLabel(tr("Ready"));
    statusBar()->addWidget(statusMessageLabel);
    // Align the label to the right
    statusMessageLabel->setAlignment(Qt::AlignRight);
    // Add a stretchable space to the left of the QLabel widget
    statusBar()->addPermanentWidget(new QWidget(), 1); // 1 is the stretch factor (1 = 100%)
    // Add the QLabel widget to the status bar
    statusBar()->addPermanentWidget(statusMessageLabel);
}

void MainWindow::setupCentralWidget()
{
    // Placeholder for the central widget setup
    DashboardUI *dashboard = new DashboardUI(this);
    setCentralWidget(dashboard);
}

void MainWindow::setupConnections()
{
    // Open the settings dialog when the settings action is triggered
    connect(settingsAction, &QAction::triggered, this, &MainWindow::openSettingsDialog);
}

void MainWindow::openSettingsDialog()
{
    SettingsUI *settingsDialog = new SettingsUI(this);
    settingsDialog->setAttribute(Qt::WA_DeleteOnClose);
    settingsDialog->setWindowModality(Qt::ApplicationModal);
    settingsDialog->show();
}

