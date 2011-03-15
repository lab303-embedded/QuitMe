#include "Window.h"
#include <QtGui/QApplication>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *l = new QHBoxLayout;
	for (unsigned int i = 0; i < 4; i++)
	{
	    QString buttonName = QString("Button ") + QString::number(i);
	    QPushButton *b = new QPushButton(buttonName, this);
	    l->addWidget(b);
	    buttons.append(b);
	    connect(b, SIGNAL(clicked()), qApp, SLOT(quit()));
	}
	setLayout(l);
}

Window::~Window()
{
}
