#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui/QWidget>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();
};

#endif // WINDOW_H
