#ifndef SETTINGSUI_H
#define SETTINGSUI_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "ui.h"

class SettingsUI : public UI
{
    Q_OBJECT
public:
    explicit SettingsUI(QWidget *parent = nullptr);
    void setupUI();

signals:
private:
    QHBoxLayout *m_h_layout_main;
    QVBoxLayout *m_v_layout_main_left;
    QVBoxLayout *m_v_layout_main_right;
};

#endif // SETTINGSUI_H
