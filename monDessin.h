#ifndef MONDESSIN_H
#define MONDESSIN_H

#include <QtGui>
#include <QMainWindow>
#include <vector>

class monDessin:public QWidget
{
	Q_OBJECT

	private:

	public:
		monDessin(QWidget * parent=0, Qt::WindowFlags flags=0);
		~monDessin();
		void paintEvent(QPaintEvent *event);
		void draw() {update();}
		void dessinerRectangle(QRect &rect);
		void dessinerCercle();

		std::vector<char *> m_formes;
};


#endif
