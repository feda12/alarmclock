#include "alarmwindow.h"

AlarmWindow::AlarmWindow(QWidget *parent)
    : QWidget(parent)
{
    _planAlarm = new QPushButton(tr("Plan alarm"), this);
    _alarmTimeEdit = new QTimeEdit(QTime::currentTime(), this);
    _alarmTimer = new QTimer(this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(_alarmTimeEdit);
    layout->addWidget(_planAlarm);
    this->setLayout(layout);

}

AlarmWindow::~AlarmWindow()
{

}
