#include <QtWidgets/QApplication>

#include "mainWindow.h"


int main(int argC, char* argV[])
{
	QApplication app{ argC, argV };

	MainWindow window;
	window.show();

	return app.exec();
}
