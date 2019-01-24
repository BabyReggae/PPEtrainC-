#include "QtGuiApplication1.h"
#include <QtWidgets>
#include <QMessageBox>


QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{


	ui.setupUi(this);

	//ui.pushButton01->setText("monNouveauText");
	//connect(ui.pushButton01, &QAbstractButton::clicked, this, &QtGuiApplication1::WrapTheDiv);

}

/*void QtGuiApplication1::WrapTheDiv()
{
	if (ui.simpleName->isVisible()) {
		ui.simpleName->setVisible(false);
	}
	else {
		ui.simpleName->setVisible(true);
	}
	
}
*/
void QtGuiApplication1::Mapremierefonction()
{
	QMessageBox::information(this, "nouveauText", "nouveau");
}

