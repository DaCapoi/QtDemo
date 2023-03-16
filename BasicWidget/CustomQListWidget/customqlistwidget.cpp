#include "customqlistwidget.h"

CustomQListWidgetDelegate::CustomQListWidgetDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{

}

void CustomQListWidgetDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem new_option(option);
    if( new_option.state & QStyle::State_Selected )
    {
        new_option.font.setBold(true);
    }
    QStyledItemDelegate::paint(painter, new_option, index);
}

CustomQListWidget::CustomQListWidget(QWidget* parent) :
    QListWidget(parent)
{
    this->setItemDelegate(new CustomQListWidgetDelegate(this));
    setAttribute(Qt::WA_StyledBackground);
}
