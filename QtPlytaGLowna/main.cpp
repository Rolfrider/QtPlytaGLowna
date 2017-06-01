#include "QtOknoGlowne.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	QApplication a(argc, argv);
	QtOknoGlowne w;
	w.show();
	return a.exec();
}
