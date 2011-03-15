#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui/QWidget>
#include <QtCore/QList>
class QPushButton;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();

private:
    QList<QPushButton *> buttons;
};

#endif // WINDOW_H
