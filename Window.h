#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui/QWidget>
class QPushButton;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();

private:
	QPushButton *quitButton;
};

#endif // WINDOW_H
