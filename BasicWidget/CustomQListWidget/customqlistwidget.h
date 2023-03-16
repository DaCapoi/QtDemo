#ifndef CUSTOMQLISTWIDGET_H
#define CUSTOMQLISTWIDGET_H

#include <QStyledItemDelegate>
#include <QListWidget>

class CustomQListWidgetDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    CustomQListWidgetDelegate(QObject *parent = nullptr);
    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class CustomQListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit CustomQListWidget(QWidget *parent = nullptr);
};

#endif // CUSTOMQLISTWIDGET_H
