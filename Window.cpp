#include "Window.h"
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>

Window::Window(QWidget *parent)
    : QWidget(parent)
{
	quitButton = new QPushButton("Quit Me!!", this);
	QHBoxLayout *l = new QHBoxLayout;
	l->addWidget(quitButton);
	setLayout(l);
}

Window::~Window()
{
}
