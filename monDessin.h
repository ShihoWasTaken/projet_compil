#ifndef MONDESSIN_H
#define MONDESSIN_H

#include <QtGui>
#include <QMainWindow>

class monDessin:public QWidget
{
	Q_OBJECT

	private:

	public:
		monDessin(QWidget * parent=0, Qt::WindowFlags flags=0);
		~monDessin();
		void paintEvent(QPaintEvent *);
		void draw() {update();}
};


#endif
