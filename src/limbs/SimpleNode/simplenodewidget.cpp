#include "simplenodewidget.h"
#include "ui_simplenodewidget.h"

SimpleNodeWidget::SimpleNodeWidget(TreeSharedPointer &node, QWidget *parent) :
    QWidget(parent),
    _node(node),
    ui(new Ui::SimpleNodeWidget)
{
	ui->setupUi(this);

	setFocusPolicy(Qt::ClickFocus);
	setFocusProxy(ui->lineEdit);

	updateUi();
}

SimpleNodeWidget::~SimpleNodeWidget()
{
	delete ui;
}

TreeSharedPointer &SimpleNodeWidget::node()
{
	return _node;
}

void SimpleNodeWidget::updateUi()
{
	ui->levelFrame->setFixedWidth(node()->level() * 20);
	ui->lineEdit->setText(node()->data(tr("description")).toString());
}
