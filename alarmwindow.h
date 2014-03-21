#ifndef ALARMWINDOW_H
#define ALARMWINDOW_H

#include <QMainWindow>

class AlarmWindow : public QMainWindow
{
    Q_OBJECT

public:
    AlarmWindow(QWidget *parent = 0);
    ~AlarmWindow();
};

#endif // ALARMWINDOW_H
