#include "simplenodewidget.h"
#include "ui_simplenodewidget.h"

SimpleNodeWidget::SimpleNodeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimpleNodeWidget)
{
	ui->setupUi(this);

	setFocusPolicy(Qt::ClickFocus);
	setFocusProxy(ui->lineEdit);
}

SimpleNodeWidget::~SimpleNodeWidget()
{
	delete ui;
}
