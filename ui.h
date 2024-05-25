#ifndef UI_H
#define UI_H

#include <QWidget>

class UI : public QWidget
{
    Q_OBJECT
public:
    // Everything in this class is virtual
    explicit UI(QWidget *parent = nullptr);
    virtual void setupUI() = 0;

signals:
};

#endif // UI_H
