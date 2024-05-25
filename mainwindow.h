#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "settingsui.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // UI setup
    void setupMenuBar();
    void setupStatusBar();
    void setupCentralWidget();
    void setupConnections();
    void openSettingsDialog();
private:
    QLabel *statusMessageLabel;
    QAction *settingsAction;
};
#endif // MAINWINDOW_H
