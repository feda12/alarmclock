#ifndef ALARMWINDOW_H
#define ALARMWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QTimeEdit>
#include <QTimer>
#include <QHBoxLayout>
#include <QVBoxLayout>

class AlarmWindow : public QWidget
{
    Q_OBJECT

public:
    AlarmWindow(QWidget *parent = 0);
    ~AlarmWindow();

private:
    QPushButton *_planAlarm;
    QTimeEdit *_alarmTimeEdit;
    QTimer *_alarmTimer;
};

#endif // ALARMWINDOW_H
