#include "Window.h"
#include <cstdlib>
#include <ctime>
#include <QtGui/QApplication>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    QGridLayout *l = new QGridLayout;
    ::srand(::time(NULL));
    unsigned int randNum = ::rand() % 4;

	for (unsigned int i = 0; i < 4; i++)
	{
	    QString buttonName = QString("Button ") + QString::number(i);
	    QPushButton *b = new QPushButton(buttonName, this);
	    l->addWidget(b, i%2, i/2);
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
