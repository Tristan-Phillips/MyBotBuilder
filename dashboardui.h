#ifndef DASHBOARDUI_H
#define DASHBOARDUI_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLayout>

class DashboardUI : public QWidget
{
    Q_OBJECT
public:
    explicit DashboardUI(QWidget *parent = nullptr);
    void setupUI();
    void sideBarSetup();
signals:
private:
    QHBoxLayout *m_layout;
    QVBoxLayout *m_sideBarLayout;
};

#endif // DASHBOARDUI_H
