#include "parser.tab.cpp"
#include "monDessin.h"

#include <QtGui>
#include <QApplication>


using namespace std;

int main ( int argc , char ** argv )
{
QApplication app(argc,argv);
QMainWindow * w = new QMainWindow;
trace(w,argc,argv);
return app.exec();
}
