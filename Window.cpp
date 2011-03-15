#include "Window.h"
#include <cstdlib>
#include <ctime>
#include <QtGui/QApplication>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    ::srand(::time(NULL));
    unsigned int randNum = ::rand() % 4;
    QHBoxLayout *l = new QHBoxLayout;
	for (unsigned int i = 0; i < 4; i++)
	{
	    QString buttonName = QString("Button ") + QString::number(i);
	    QPushButton *b = new QPushButton(buttonName, this);
	    l->addWidget(b);
	    buttons.append(b);
	}
	setLayout(l);
	QPushButton *b = buttons.at(randNum);
	b->setText("Mwahahaha");
	connect(b, SIGNAL(clicked()), qApp, SLOT(quit()));
}

Window::~Window()
{
}
