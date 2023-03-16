#include "mainwindow.h"
#include "customqlistwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setStyleSheet(" QMainWindow{"
                        " background-color: #343c4a;"
                        " }"
                        );

    CustomQListWidget* customWidget = new CustomQListWidget();
    customWidget->addItem("Test1");
    customWidget->addItem("Test2");
    customWidget->addItem("Test3");
    customWidget->addItem("Test4");
    customWidget->addItem("Test5");
    customWidget->setCurrentRow(0);
    this->setCentralWidget(customWidget);

    customWidget->setStyleSheet(" CustomQListWidget {"
                             " background-color: transparent;"
                             " border-radius: 2px;"
                             " border: 1px solid #14F3F4F4;"
                             " outline: 0px;"
                             " padding: 0px;"
                             " margin-bottom: 4px;"
                             " }"
                             " CustomQListWidget::item {"
                             " background-color: transparent;"
                             " height: 24px;"
                             " color: #CCF3F4F4;"
                             " font-size: 12px;"
                             " margin-bottom: 4px;"
                             " }"
                             " CustomQListWidget::item:hover {"
                             " background-color: #0DDEE5E9;"
                             " color: #CCF3F4F4;"
                             " border-radius: 2px;"
                             " margin-bottom: 4px;"
                             " }"
                             " CustomQListWidget::item:selected  {"
                             " background-color: #333295FB;"
                             " color: #3295FB;"
                             " border-radius: 2px;"
                             " margin-bottom: 4px;"
                             " }"
                             );
}

MainWindow::~MainWindow()
{
}
